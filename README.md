# libxml2-win-uwp
A Windows Universal Platform (UWP) build of the libxml2 XML parser for use with Windows 10 Microsoft Store apps.

This is free software available under the MIT License. Read the Copyright.md file for details.

Source: This project was built from version 2.9.6 of the libxml2 code base. URL: http://www.xmlsoft.org/

Build enviroment: Visual Studio 2019. Compiled for C++ 17. Generates a static library.

Notes:

- The unit tests have been excluded since a UWP app cannot access a file outside of the install directory without first getting permission from a user. Perhaps this can be changed in the future, but it was beyond the scope of this project.

- The folder arrangement for the header files had to be changed since the ARM64 compiler was having issues finding them.

- libxml2 was used in SaviDraw to parse from a memory buffer only. As of the original push of this souce code, no testing has been done using the built-in file I/O. Fixes / upgrades are welcome.
