import os
import math
import argparse
import configparser

script_dir = os.path.dirname(os.path.abspath(__file__))
data_dir = os.path.join(script_dir, "data")

# ================================
# Helper functions
# ================================
# From https://www.python.org/dev/peps/pep-0471/#examples
def get_tree_size(path):
    """Return total size (in bytes) of files in the given path and subdirs."""
    total = 0
    for entry in os.scandir(path):
        if entry.is_dir(follow_symlinks=False):
            total += get_tree_size(entry.path)
        else:
            total += entry.stat(follow_symlinks=False).st_size
    return total


# ================================
# Parse and validate the arguments
# ================================
arg_parser = argparse.ArgumentParser()
arg_parser.add_argument("--arch", required=True,
                        choices=["x86", "x64"]) # TODO: Support armhf too (for LINX targets)

arg_parser.add_argument("--pkgformat", required=True,
                        choices=["ipk"]) # TODO: Support deb too (for LINX targets)

arg_parser.add_argument("--rootdir", required=True,
                        help="Root folder of the package")

arg_parser.add_argument("--template", required=True,
                        help="The template for the control file")

arg_parser.add_argument("--type", required=True,
                        choices=["runtime"]) # TODO: Support "dev" packages too?

arg_parser.add_argument("--version", required=True,
                        help="Package version")

args = arg_parser.parse_args()


# =====================================
# Generate control output from template
# =====================================
var_parser = configparser.ConfigParser(interpolation=None) # Disable interpolation to allow '%' in the .ini file
var_parser.optionxform = str # Preserve uppercase keys
var_parser.read( os.path.join(data_dir, "template-variables-linux.ini") ) # TODO: Make configurable

with open(args.template, 'r') as template_file:
    output = template_file.read()

for key, value in var_parser[args.type].items():
    output = output.replace( '%'+key+'%', value.strip('"') )

output = ( output
           .replace("%LQ_VERSION%", args.version)
           .replace("%PKG_ARCH%", args.arch)
           .replace("%PKG_SIZE%", str(   int(  math.ceil( get_tree_size(args.rootdir)/1024 )  )   )    )
           .replace("\\n", '\n')
         )

control_dir = os.path.join(args.rootdir, "CONTROL")
if not os.path.exists(control_dir):
    os.mkdir(control_dir)

with open( os.path.join(control_dir, "control"), 'w' ) as control_file:
    control_file.write(output)
