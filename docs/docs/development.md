---
layout: page
title: Development
---

Most of the code in the [main GitHub repo](https://github.com/JKSH/LQ-Bindings/) is auto-generated
and should not be edited by hand. See the [code generator repo](https://github.com/JKSH/LQ-CodeGen/)
instead.

Also, do not call VIs directly from the main Git repository. These VIs have "Separate compiled code
from source file" enabled, which causes [significant lag](https://bitbucket.org/jksh/lq-codegen/issues/56/labview-disable-separate-compiled-code)
when opening or closing large LQ-based projects. Instead, only use the VIs that you have
[installed](index.html). Alternative, run the build scripts to generate usable VIs (see the **Building
from Source** section below).


System Requirements
-------------------
To build the C++ shared library (runtime):
* MSVC 2015 or newer (Windows), GCC 5.3.1 or newer (Linux)
* [Qt](https://www.qt.io/) 5.12 or newer
* [Qwt](https://qwt.sourceforge.io/) 6.2.0 or newer

To build the NIPM packages (dev and runtime):
* [NI Package Manager 19.0](http://www.ni.com/en-us/support/downloads/ni-package-manager.html)
  or newer
* [NI LabVIEW 2014](https://www.ni.com/labview/) or newer
* [NI LabVIEW Command Line Interface 1.0](http://www.ni.com/en-us/support/downloads/software-products/download.ni-labview-command-line-interface.html)
  or newer

To build the .ipk packages (runtime):
* Python 3.5 or newer
* `opkg-utils` 0.4.0 or newer

Building from Source
--------------------
To build the LQ packages from scratch:
1. Install a suitable C++ compiler
2. Install Qt
3. Build and install Qwt
4. Install [NI LabVIEW](https://www.ni.com/labview/)
5. (If using LabVIEW 2014-2017) Install the additional National Instruments tools listed under the
   **System Requirements** section above.
6. Clone the repo from [https://github.com/JKSH/LQ-Bindings/](https://github.com/JKSH/LQ-Bindings/).
7. Open _/buildpkg-nipkg-runtime.bat_ and _/buildpkg-nipkg-dev.bat_ with a text
   editor. Check the file paths at the top of each file and and edit them if necessary.
8. Open the Command Prompt and ensure that your compiler is in the PATH (e.g. by launching _x86 Native
   Tools Command Prompt for VS 2019_)
9. From the Command Prompt, run the _*.bat_ files.
