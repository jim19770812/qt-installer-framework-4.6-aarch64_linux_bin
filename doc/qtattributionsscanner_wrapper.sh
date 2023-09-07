#!/bin/sh
LD_LIBRARY_PATH=/home/rpa/qifw/qt-everywhere-src-5.15.2/qtbase/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
export LD_LIBRARY_PATH
QT_PLUGIN_PATH=/home/rpa/qifw/qt-everywhere-src-5.15.2/qtbase/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec /home/rpa/qifw/qt-everywhere-src-5.15.2/qtbase/bin/qtattributionsscanner "$@"
