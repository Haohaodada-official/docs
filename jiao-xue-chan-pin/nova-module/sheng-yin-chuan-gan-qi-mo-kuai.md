# 声音传感器模块

## 概述

NOVA的声音模块采用咪头采集声音信号并转化成高低电平脉冲，这个电平脉冲再经过LM2904运算放大器放大输出，输出大于一定阈值就能点亮绿色LED，LED随着声音强度亮灭，声音越大，LED越亮。

## 参数

* 尺寸：40x23mm
* 工作电压：5V
* 工作电流：&lt;10mA
* 最长相应时间：220ms
* 具有输出大小调节
* 接口模式：2510-3p
* 引脚定义：1-控制端 2-电源 3-地

## 接口说明

* 可用端口： A0、A1、A2、A3

## 使用方式

![](../../.gitbook/assets/53.png)

## 示例代码

![](../../.gitbook/assets/54.png)

[声音传感器模块示例代码](http://www.haohaodada.com/show.php?id=947651)

## 原理图

{% file src="../../.gitbook/assets/sheng-yin-chuan-gan-qi-mo-kuai \(1\).pdf" caption="声音传感器模块原理图" %}

## 尺寸说明

![](../../.gitbook/assets/121.png)

## 相关资源

{% file src="../../.gitbook/assets/sheng-yin-lm2904.PDF" caption="LM2904芯片说明" %}

## 常见问题

