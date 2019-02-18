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
To compile the C++ shared library, you need:
* A C++11 compliant compiler (tested with Microsoft Visual C++ 2017)
* [Qt](https://www.qt.io/) 5.10 or newer
* [Qwt](https://qwt.sourceforge.io/) 6.1.2 or newer

To build the NIPM packages, you need a number of National Instruments tools. These come bundled with
LabVIEW 2018 or newer, or they can be installed separately for LabVIEW 2014-2017:
* [NI Package Manager 18.0](http://www.ni.com/en-us/support/downloads/ni-package-manager.html)
  or newer
* [NI LabVIEW Command Line Interface 1.0](http://www.ni.com/en-us/support/downloads/software-products/download.ni-labview-command-line-interface.html)
  or newer
* Package Building Support for LabVIEW (installable via NIPM)


Building from Source
--------------------
To build the LQ packages from scratch:
1. Install a suitable C++ compiler (e.g. Microsoft Visual C++ 2017)
2. Install Qt
3. Build and install Qwt
4. Install [NI LabVIEW](https://www.ni.com/labview/)
5. (If using LabVIEW 2014-2017) Install the additional National Instruments tools listed under the
   **System Requirements** section above.
6. Clone the repo from [https://github.com/JKSH/LQ-Bindings/](https://github.com/JKSH/LQ-Bindings/).
7. Open _/buildRuntimePackages.bat_, _/buildDevPackages.bat_, and _/src/Cpp/LQ.pro_ with a text
   editor. Check the file paths at the top of each file and and edit them if necessary.
8. Open the Command Prompt.
     * If you want to build the C++ shared library, ensure that your compiler is in the PATH (e.g.
       by launching _x86 Native Tools Command Prompt for VS 2017_)
9. From the Command Prompt, run the _*.bat_ files.
