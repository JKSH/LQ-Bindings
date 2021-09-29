---
layout: page
title: Installation
---

Minimum Supported Platforms
---------------------------
Development platforms:
* NI LabVIEW 2016 (32-bit and 64-bit)

Deployment platforms:
* Microsoft Windows 7 (x86 or x86_64)
* NI Linux RT (x86_64)

Installation Instructions
-------------------------
The recommended way to install LQ is to add the official LQ feed to the
[NI Package Manager](https://www.ni.com/en-us/support/downloads/ni-package-manager.html) (NIPM). If
you already have NIPM on your PC, read the [Quickstart guide](/docs/).

Alternatively, download the *.zip files from
[https://github.com/JKSH/LQ-Bindings/releases](https://github.com/JKSH/LQ-Bindings/releases)
and manually extract their contents into their destinations:

* _lq-dev*.zip_ goes into your LabVIEW installation folder (for example,
  _C:\Program Files (x86)\National Instruments\LabVIEW 2016\\_)
* _lq-runtime*.zip_ goes into the Program Files folder (for example, _C:\Program Files (x86)\\_)

A proper MSI installer is planned for future releases.
