#!/bin/sh
QT_VERSION=4.6.0
export QT_VERSION
QT_VER=4.6
export QT_VER
QT_VERSION_TAG=460
export QT_VERSION_TAG
QT_INSTALL_DOCS=/home/rpa/qifw/qt-everywhere-src-5.15.2/qtbase/doc
export QT_INSTALL_DOCS
BUILDDIR=/home/rpa/qifw/installer-framework-everywhere-src-4.6/build/doc
export BUILDDIR
exec /home/rpa/qifw/qt-everywhere-src-5.15.2/qtbase/bin/qdoc "$@"
