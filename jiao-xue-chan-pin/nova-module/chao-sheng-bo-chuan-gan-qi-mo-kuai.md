# 超声波传感器模块

## 概述

NOVA超声波模块有效探测距离范围为4-400cm，一个发射探头，一个接受探头。此模块只需你提供一个10uS以上脉冲触发信号，该模块内部将发出8个40kHz周期电平并检测回波。一旦检测到有回波信号则输出回响信号。回响信号的脉冲宽度与所测的距离成正比。由此通过发射信号到回响信号的时间间隔可以计算得到距离。建议测量周期为60ms以上，以防发射信号对回响信号的影响。

## 参数

* 尺寸：24x57mm
* 电源要求：+3.3-5V
* 类型：数字模式
* 接口模式：2510-3p
* 引脚定义：1-控制端 2-电源 3-地

## 接口说明

* 可用端口： A0、A1、A2、A3、S0、S1、S2、S3

## 使用方式

![](../../.gitbook/assets/19.png)

## 示例代码

![](../../.gitbook/assets/20.png)

[超声波传感器模块示例代码](http://www.haohaodada.com/show.php?id=947506)

## 原理图

{% file src="../../.gitbook/assets/chao-sheng-bo-chuan-gan-qi-mo-kuai.pdf" caption="超声波传感器模块原理图" %}

## 尺寸说明

![](../../.gitbook/assets/87.png)

![](../../.gitbook/assets/88.png)

## 相关资源

{% file src="../../.gitbook/assets/chao-sheng-bo-stm8s003f3u6tr.PDF" caption="STM8S003F3U6TR芯片手册" %}

{% file src="../../.gitbook/assets/chao-sheng-bo-max232.PDF" caption="MAX232芯片手册" %}

{% file src="../../.gitbook/assets/chao-sheng-bo-lmv324idr.PDF" caption="LMV324IDR芯片手册" %}

## 常见问题

