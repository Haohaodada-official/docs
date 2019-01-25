# Micropython

## 故事

Micropython的由来，这得益于Damien George这位伟大的计算机工程师，Damien George每天都会使用Python工作，他有一天冒出一个大胆的想法：能否用Python来控制单片机，从而实现对机器人的操作呢？

Python语言本身就是一款简单上手的脚本语言，一些非计算机专业的爱好者都选Python语言作为入门语言，但是美中不足，它不能实现对一些底层的操作，在硬件领域毫不起眼。所以，Damien George利用6个月时间打造了MicroPython，这就是MicroPyhton的由来。

MicroPython它基于ANSIC，语法跟Python3基本一致，拥有独立的解析器、编译器、虚拟机和类库等。目前他支持基于32-bit的ARM处理器，比如说STM32F401、STM32F405、STM32F407，ESP8266，ESP32

## 特性

* MicroPython 是 Python 3 编程语言的一种精简而高效的实现，它包含 Python 标准库的一个子集，并被优化为在微控制器和受限环境中运行。
* MicroPython 可以运行在有一定资源的开发板上，给你一个低层次的 Python 操作系统，可以用来控制各种电子系统。
* MicroPython 富有各种高级特性，比如交互式提示、任意精度整数、闭包函数、列表解析、生成器、异常处理等等。
* MicroPython 的目标是尽可能与普通 Python 兼容，使开发者能够轻松地将代码从桌面端转移到微控制器或嵌入式系统。程序可移植性很强，因为不需要考虑底层驱动，所以程序移植变得轻松和容易。

## 优势

* Python 是一款容易上手的脚本语言，同时具有强大的功能，语法优雅简单。使用 MicroPython 编程可以降低嵌入式的开发门槛，让更多的人体验嵌入式的乐趣。
* 通过 MicroPython 实现硬件底层的访问和控制，不需要了解底层寄存器、数据手册、厂家的库函数等，即可轻松控制硬件。
* 外设与常用功能都有相应的模块，降低开发难度，使开发和移植变得容易和快速。
* 解释性语言不需要编译，降低了编程软件的开发难度，用户更新程序也更方便。

## 资源

[Micropython官方文档](http://docs.micropython.org/en/latest/library/index.html)

[掌控官方文档](https://mpython.readthedocs.io)

