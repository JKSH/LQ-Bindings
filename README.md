LQ
==
LQ (pronounced "Luke") is a set of [LabVIEW](https://www.ni.com/labview/)
bindings for the [Qt toolkit](https://www.qt.io/). It is currently focussed on
the widget classes, but other major technologies from Qt are planned for
inclusion in future releases.


Roadmap
-------
Please see http://github.com/JKSH/LQ-Bindings/wiki/Roadmap


System Requirements
-------------------
For using LQ:
* Windows 7 or newer
* LabVIEW 2014 or newer

For compiling the C++ shared library:
* A C++11 compliant compiler (tested with Microsoft Visual C++ 2017)^
* Qt 5.10 or newer
* Qwt 6.1.2 or newer

For building NIPM Packages:
* [NI LabVIEW Command Line Interface 1.0](https://www.ni.com/download/labview-command-line-interface-18.0/7545/en/)
  or newer
* Package Building Support for LabVIEW (installable via [NI Package Manager](https://www.ni.com/en-au/support/downloads/software-products/download.package-manager.html))

NOTE: LabVIEW 2018 and newer comes bundled with the components needed to build
      NI packages. These components must be installed separately for LabVIEW
      2014-2017.

Usage
-----
1. Download and install the NIPM package from https://github.com/JKSH/LQ-Bindings/releases.

2. Create a new LabVIEW VI. Drag the LQ VIs that you want from Windows Explorer
   (C:\LQ\src\LabVIEW\) onto your block diagram. Once a class and its
   dependencies are loaded in LabVIEW's memory, you can use the Quick Drop menu
   to find other VIs you want.
   
NOTE 0: If you don't have NI Package Manager, you can download the .zip package
        instead of the .nipkg package, and manually extract the files to C:\LQ\.

NOTE 1: LabVIEW palette entries are planned for future releases.

NOTE 2: The LabVIEW code in the Git repo has "Separate compiled code from source
        file" enabled to make them friendlier for source control. However, this
        can cause significant lag when opening/closing a project that depends
        on many LQ classes. Code separation is disabled in the files at
        https://github.com/JKSH/LQ-Bindings/releases


Examples
--------
Please see the [examples](examples) folder. Here is a video compilation of some
of these examples:

[![Video thumbnail](doc/demo_vid_0.1.0_thumb.png)](https://www.youtube.com/watch?v=YChRI1cMfiI)


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


Copyright and Licensing
-----------------------
Copyright (c) 2018 Sze Howe Koh <<szehowe.koh@gmail.com>>

The LQ library is published under the [Mozilla Public License v2.0]
(LICENSE.MPLv2), while examples are published under the [MIT License]
(examples/LICENSE.MIT).

LQ also uses third party software that are licensed under different terms.
Please see the [3rdparty](3rdparty) folder for details.
