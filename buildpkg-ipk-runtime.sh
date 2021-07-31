#!/bin/sh

# ==================================================================================
# (Edit these parameters before running this script, if necessary)
# ----------------------------------------------------------------------------------
LV_ROOT="/usr/local/natinst/LabVIEW-2014"
QT_ROOT="/home/lvuser/Qt5.12.11/5.12.11/gcc_64"
QWT_ROOT="/usr/local/qwt-6.2.0"
PKG_VERSION="0.2.2"
# ==================================================================================

LQ_DEV_ROOT="$PWD"
BUILD_DIR="$LQ_DEV_ROOT"/builds
OUTPUT_DIR="$BUILD_DIR"/Runtime
PKG_DIR="$OUTPUT_DIR"/Package
PKG_ARCH=x64 # TODO: Get from input, support armhf (LINX targets)
CPP_DIR="$BUILD_DIR"/Cpp_"$PKG_ARCH"
PKG_DATA_DIR="$PKG_DIR"/usr/lib/lq


# Clean out the distribution folder
if [ -d "$OUTPUT_DIR" ]; then
	rm -rf "$OUTPUT_DIR"
fi


# Prepare shadow build folder for shared library
if [ ! -d "$CPP_DIR" ]; then
	mkdir -p "$CPP_DIR"
fi
cd "$CPP_DIR"
test $? -eq 0 || exit $?


# Build the LQ shared library
"$QT_ROOT"/bin/qmake "$LQ_DEV_ROOT"/src/Cpp/ CINTOOLS_PATH="$LV_ROOT"/cintools/ QWT_PATH="$QWT_ROOT" VERSION="$PKG_VERSION" && make
test $? -eq 0 || exit $?


# Copy files
mkdir -p                              "$PKG_DATA_DIR"/lib
cp    -R "$LQ_DEV_ROOT"/3rdparty/     "$PKG_DATA_DIR"/3rdparty/
cp       "$LQ_DEV_ROOT"/LICENSE.MPLv2 "$PKG_DATA_DIR"/
cp       "$LQ_DEV_ROOT"/README.md     "$PKG_DATA_DIR"/
cp    -R "$CPP_DIR"/libLQ.so*         "$PKG_DATA_DIR"/lib/
cp    -R "$QWT_ROOT"/lib/libqwt.so*   "$PKG_DATA_DIR"/lib/
test $? -eq 0 || exit $?


# Patch RUNPATH to search the directory which contains the libraries
chrpath --replace '$ORIGIN' "$PKG_DATA_DIR"/lib/libqwt.so
test $? -eq 0 || exit $?


# Do manual deployment because linuxdeployqt doesn't use the structure we want
QtLibs=(
	"libicudata"
	"libicui18n"
	"libicuuc"
	"libQt5Concurrent"
	"libQt5Core"
	"libQt5DBus"
	"libQt5Gui"
	"libQt5Network"
	"libQt5OpenGL"
	"libQt5PrintSupport"
	"libQt5Svg"
	"libQt5Widgets"
	"libQt5XcbQpa"
)
QtPlugins=(
	"generic"
	"iconengines"
	"imageformats"
	"platforminputcontexts"
	"platforms"
	"platformthemes"
	"xcbglintegrations"
)
UnsupportedPlatformPlugins=(
	"libqeglfs"
	"libqwayland"
)

mkdir "$PKG_DATA_DIR"/plugins/

for item in ${QtLibs[*]}; do
	cp -a $QT_ROOT/lib/"$item".so* "$PKG_DATA_DIR"/lib/
	test $? -eq 0 || exit $?
done

for item in ${QtPlugins[*]}; do
	cp -a $QT_ROOT/plugins/"$item" "$PKG_DATA_DIR"/plugins/
	test $? -eq 0 || exit $?
done

for item in ${UnsupportedPlatformPlugins[*]}; do
	rm "$PKG_DATA_DIR"/plugins/platforms/"$item"*
	test $? -eq 0 || exit $?
done


# Write the package metadata
python "$LQ_DEV_ROOT"/utils/Packaging/write_pkg_metadata.py --template "$LQ_DEV_ROOT"/utils/Packaging/data/control-ipk.template --arch "$PKG_ARCH" --pkgformat ipk --rootdir "$PKG_DIR" --type runtime --version "$PKG_VERSION"
test $? -eq 0 || exit $?


# Build package
cd "$OUTPUT_DIR" && opkg-build "$PKG_DIR"
test $? -eq 0 || exit $?


echo Done. The output files are in "$OUTPUT_DIR".
