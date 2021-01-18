# libxml2-win-uwp
A Windows Universal Platform (UWP) build of the libxml2 XML parser for use with Windows 10 Microsoft Store apps.

This is built from version 2.9.6 of the libxml2 library code base.

Build enviroment: Visual Studio 2019. Generates a static C++ 17 library.

The unit tests have been excluded since a UWP app cannot access a file outside of the install directory without first getting permission from a user. Perhaps this can be changed in the future, but it was beyond the scope of this project.
