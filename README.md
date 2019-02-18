LQ
==
LQ (pronounced "Luke") is a set of [LabVIEW](https://www.ni.com/labview/)
bindings for the [Qt toolkit](https://www.qt.io/). It is currently focussed on
the widget classes, but other major technologies from Qt are planned for
inclusion in future releases.


System Requirements
-------------------
To use LQ:
* Microsoft Windows 7 or newer
* NI LabVIEW 2014 or newer

To compile the C++ shared library:
* A C++11 compliant compiler (tested with Microsoft Visual C++ 2017)
* Qt 5.10 or newer
* Qwt 6.1.2 or newer

To build the full package:
* [NI LabVIEW Command Line Interface 18.0](https://www.ni.com/download/labview-command-line-interface-18.0/7545/en/)
  or newer
* [NI Package Manager 18.5](http://www.ni.com/en-us/support/downloads/ni-package-manager.html)
  or newer
* Package Building Support for LabVIEW (installable via NIPM)

NOTE: LabVIEW 2018 and newer comes bundled with the components needed to build
      NIPM packages. These components must be installed separately for LabVIEW
      2014-2017.


Installation
------------
Download and run the *.nipkg file from https://github.com/JKSH/LQ-Bindings/releases
(recommended).

Alternatively, if you don't have NIPM, download the *.zip package instead and
manually extract its contents to your LabVIEW installation folder (for example,
C:\Program Files (x86)\National Instruments\LabVIEW 2014\)

To uninstall, open the **Installed** tab and remove the LQ Add-On package. Delete
<LABVIEW>\examples\LQ\ and <LabVIEW>\vi.lib\addons\LQ\ if necessary (the folders
might persist after uninstallation).


Usage
-----
After installing, run the examples (C:\LQ\examples\). Copy the code to your own
block diagram and modify.

To use an LQ class/VI that hasn't yet been loaded into LabVIEW's memory, drag it
from Windows Explorer (C:\LQ\src\LabVIEW\) and drop it onto your block diagram.

NOTE: LabVIEW palette entries are planned for future releases.

Do not use VIs directly from the Git repository. These VIs have "Separate
compiled code from source file" enabled, which causes significant lag when
opening/closing a project that uses many LQ classes. Instead, only use the VIs
that you installed from https://github.com/JKSH/LQ-Bindings/releases or you
packaged yourself (see the **Building from Source** section below).


Examples
--------
Here is a video compilation of some of the provided examples:

[![Video thumbnail](doc/demo_vid_0.1.0_thumb.png)](https://www.youtube.com/watch?v=YChRI1cMfiI)


Building from Source
--------------------
To build the LQ package from scratch:
1. Install a suitable C++ compiler (e.g. Microsoft Visual C++ 2017)
2. Install Qt
3. Build and install Qwt
4. Install [NI LabVIEW](https://www.ni.com/labview/)
5. Install [NI LabVIEWCLI](https://www.ni.com/download/labview-command-line-interface-18.0/7545/en/),
   [NIPM](http://www.ni.com/en-us/support/downloads/ni-package-manager.html),
   and Package Building Support for LabVIEW (not needed for LabVIEW 2018 and newer)
6. Edit the paths at the top of [deployLQ.bat](deployLQ.bat) and [LQ.pro](src/Cpp/LQ.pro)
   if necessary
7. Open the Command Prompt, ensuring that your compiler is in the PATH (e.g. by
   launching _x86 Native Tools Command Prompt for VS 2017_)
8. From the Command Prompt, run [deployLQ.bat](deployLQ.bat)


Hacking
-------
Most of the code in this repo is auto-generated and should not be edited
directly. See https://github.com/JKSH/LQ-CodeGen/ instead.

Also, do not use VIs directly from the Git repository. These VIs have "Separate
compiled code from source file" enabled, which causes significant lag when
opening/closing a project that uses many LQ classes. Instead, only use the VIs
that you installed from https://github.com/JKSH/LQ-Bindings/releases or you
packaged yourself (see the **Building from Source** section above).


Known Issues
------------
This is a pre-alpha release, which means (i) the API will likely change in the
near future, (ii) the library is far from feature-complete, (iii) performance is
not optimized, and (iv) you might experience crashes. Other issues include:

* You currently can't free any resources or disconnect signals, except by
  calling _LQCoreEngine.lvclass:Stop Engine.vi_.

* QWinThumbnailToolButton cannot be applied to non-Qt windows, such as LabVIEW
  front panels.

* After you start and stop the engine, QWinThumbnailToolButton no longer emits
  any signals when you click on it.
    * Workaround: Restart LabVIEW.

* There are a few small memory leaks, which will persist until you close
  LabVIEW.

  
Roadmap
-------
See http://github.com/JKSH/LQ-Bindings/wiki/Roadmap


Copyright and Licensing
-----------------------
Copyright (c) 2019 Sze Howe Koh <<szehowe.koh@gmail.com>>

The LQ library is published under the [Mozilla Public License v2.0](LICENSE.MPLv2),
while examples are published under the [MIT License](examples/LICENSE.MIT).

LQ also uses third party software that are licensed under different terms.
Please see the [3rdparty](3rdparty) folder for details.
