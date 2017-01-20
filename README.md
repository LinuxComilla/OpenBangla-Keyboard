# OpenBangla Keyboard
[![Build Status](https://travis-ci.org/OpenBangla/OpenBangla-Keyboard.svg?branch=master)](https://travis-ci.org/OpenBangla/OpenBangla-Keyboard)

![openbangla-keyboard](https://cloud.githubusercontent.com/assets/9459891/15998078/ead3cae2-315c-11e6-8595-df1efbe478d2.png)

An OpenSource, Unicode compliant Bengali Input Method for GNU/Linux systems.

### Features
* Phonetic Keyboard Layout (Avro Phonetic)
* Fixed Keyboard Layout
* Typing Automation tools for Fixed Keyboard layout
* Can use Avro Keyboard Layout file (version 5)
* Layout Viewer
* Preview window when using Phonetic Keyboard Layout
* Features Avro Keyboard like Top Bar

### Installing
#### Linux
Linux packages can be downloaded from [here](https://github.com/OpenBangla/OpenBangla-Keyboard/releases)

If you need help, there is a wiki [page](https://github.com/OpenBangla/OpenBangla-Keyboard/wiki/Installing%20OpenBangla%20Keyboard)

Tested in Ubuntu 16.04

**Currently Debian Package(.deb) are only supported**

### Compiling on GNU/Linux
#### Build & Install procedures
OpenBangla Keyboard currently needs following libraries and binaries
* GNU GCC, G++ compiler or Clang
* GNU Make or Ninja
* CMake
* Qt 5 libraries
* iBus development library

On a Ubuntu/Debian system you can easily install them like this
```
sudo apt-get install build-essential cmake libibus-1.0-dev qt5-default qtdeclarative5-dev
```

After you have installed required libraries and binaries. Clone this repository and change the directory to the cloned folder and issue the commands:
```
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX='/usr' -DLIBEXEC_DIR='/usr/libexec'
make
sudo make install
```
Use iBus UI or run ibus-setup to add **OpenBangla Keyboard**. You can get help on adding **OpenBangla Keyboard** in **Text entry settings** in this [page](https://github.com/OpenBangla/OpenBangla-Keyboard/wiki/Installing%20OpenBangla%20Keyboard)

### License
<img align="right" src="http://opensource.org/trademarks/opensource/OSI-Approved-License-100x137.png">


The program is licensed under the [GPL 3 License](https://opensource.org/licenses/GPL-3.0):

Copyright &copy; 2015-2016 [Muhammad Mominul Huque](https://github.com/mominul)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
