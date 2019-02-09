uvftp
=======================
[![Status](https://img.shields.io/badge/status-working-green.svg)]()
[![Cirrus CI](https://api.cirrus-ci.com/github/neverwin/uvftp.svg?branch=master)](https://cirrus-ci.com/github/neverwin/uvftp)
[![OS](https://img.shields.io/badge/platform-windows%20%7C%20linux%20%7C%20osx-blue.svg)]()


Tiny FTP server based on libuv for share files among LAN. Super easy to use😉.

## Features

* it needs no any run-time dependencies.
* it runs really fast(based on libuv).
* it can work without any configurations.
* just share files among LAN.
* it runs on Windows, Linux, Mac OS, etc.

## Get

Get it at [Releases](https://github.com/neverwin/uvftp/releases).

Or you can compile easily. 

You need GCC(MinGW or Cygwin on Windows) and libuv. Then make.

If libuv cannot be found automatically when build, you need pkg-config(USE_PKGCONFIG=1) or the libuv's path(LIBUV=path).

## Usage

Put the program under the folder and run it without any configuration.
Or you can give it a commandline parameter as the path.
*NOTICE* You may need root privilege for network in Linux and Mac OS.

## License

GPLv3


这是一款基于libuv的用于局域网分享的轻量FTP服务器。极易使用😉。

## 优势

* 没有任何运行时依赖。
* 速度快(基于libuv)。
* 无需任何配置。
* 专注于局域网内分享文件。
* 运行于Windows、Linux和Mac OS等系统。

## 如何安装

可以直接在[Releases](https://github.com/neverwin/uvftp/releases)下载。
你也可以手动编译，需要gcc(在Windows下为mingw或cygwin)环境和libuv库，然后直接make就行。
如果编译时无法找到libuv，你需要启用pkg-config(USE_PKGCONFIG=1)或者指明libuv的位置(LIBUV=path)。
*注意* 在Linux和Mac OS下运行服务可能需要root权限。

## 使用方式

无需配置，之间放入想分享的文件夹目录中，运行即可。
特殊情况下，你也可以加入一个命令行参数，以另外指定一个路径。

## 协议

GPLv3
