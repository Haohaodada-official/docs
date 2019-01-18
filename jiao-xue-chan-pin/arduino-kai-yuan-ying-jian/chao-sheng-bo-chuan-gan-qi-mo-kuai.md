# 超声波传感器模块

## 概述

超声波传感器模块有效探测距离范围为4-400cm，一个发射探头，一个接受探头。此模块只需你提供一个10uS以上脉冲触发信号，该模块内部将发出8个40kHz周期电平并检测回波。一旦检测到有回波信号则输出回响信号。回响信号的脉冲宽度与所测的距离成正比。由此通过发射信号到回响信号的时间间隔可以计算得到距离。建议测量周期为60ms以上，以防发射信号对回响信号的影响。

## 参数

* 尺寸：56x36mm
* 工作电压：5V
* 接口类型：XH2.54mm-4P
* 引脚定义：1-地 2-电源 3-SCL 4-SDA

## 接口说明

* 可用端口：四排排针

## 使用方式

![](https://github.com/Haohaodada-official/docs/tree/87a8c0277156955860937750dd97e504bdd44d88/jiao-xue-chan-pin/arduino-kai-yuan-ying-jian/images/16.png)

## 示例代码

![](https://github.com/Haohaodada-official/docs/tree/87a8c0277156955860937750dd97e504bdd44d88/jiao-xue-chan-pin/arduino-kai-yuan-ying-jian/images/72.png)

![](https://github.com/Haohaodada-official/docs/tree/87a8c0277156955860937750dd97e504bdd44d88/jiao-xue-chan-pin/arduino-kai-yuan-ying-jian/images/43.png)

[超声波模块示例代码](http://www.haohaodada.com/show.php?id=956445)

## 原理图

[超声波传感器模块原理图](https://github.com/Haohaodada-official/haohaodada-docs/blob/master/原理图/超声波传感器模块.pdf)

## 尺寸说明

![](https://github.com/Haohaodada-official/docs/tree/87a8c0277156955860937750dd97e504bdd44d88/jiao-xue-chan-pin/arduino-kai-yuan-ying-jian/images/36.png)

## 相关资源

[STM8S003F3U6TR芯片手册](https://github.com/Haohaodada-official/haohaodada-docs/blob/master/主要芯片说明书/超声波-STM8S003F3U6TR.PDF) [MAX232芯片手册](https://github.com/Haohaodada-official/haohaodada-docs/blob/master/主要芯片说明书/超声波-MAX232.PDF) [LMV324IDR芯片手册](https://github.com/Haohaodada-official/haohaodada-docs/blob/master/主要芯片说明书/超声波-LMV324IDR.PDF)

## 常见问题

