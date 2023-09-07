# qt-installer-framework-4.6-aarch64_linux_bin
静态编译的qt-installer-framework 4.6 for aarch64 linux版本

# apt install zlib1g-dev liblzma-dev libbz2-dev
$ mkdir build
$ cd build
$ /home/rpa/qt-everywhere-src-5.15.2/qtbase/bin/qmake ../*.pro CONFIG+=libarchive
$ make -j4 V=1
$ make install
