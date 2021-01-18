# libxml2-win-uwp
A Windows Universal Platform (UWP) build of the libxml2 XML parser.

This is built from version 2.9.6 of the library code base.

The unit tests have been excluded since a UWP app cannot access a file outside of the install directory without fist getting permission from a user. Perhaps this can be changed in the future, but it was beyond the scope of this project.
