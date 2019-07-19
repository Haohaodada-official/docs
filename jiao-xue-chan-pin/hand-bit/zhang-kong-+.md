# 掌控BOX

## 概述

掌控box是一块microPython微控制器板，可以通过编程来配合OLED屏实现各种功能的显示，板载了按键、RGB灯、温度传感器、光线传感器、声音传感器、加速度传感器、双路电机驱动、锂电池管理系统并添加外接扩展接口，兼容乐高结构，可轻松造物，实现炫酷的小发明。

![](../.gitbook/assets/zhangkongbox-1.PNG)

## 性能参数

* 电池容量：630mA
* 充电电压：5V
* 工作电压：3.3V
* 控制芯片：ESP-32主控芯片
* 扩展接口：2路电机接口，2路PWM接口，6路AD接口（包含PWM接口），2路通讯接口
* 尺寸：54.3x84.8mm

## 接口说明

![](../.gitbook/assets/zhangkongbox-2.png)

## 指示灯说明

* 绿色LED灯：开机状态LED亮起
* 双色灯：充电指示灯，充电时亮红灯，充满电亮蓝灯。

## 刷固件和联网配置

掌控box刷好搭固件和联网配置方式与掌控板刷好搭固件一致，详见上文（掌控板刷好搭固件）。

## 程序下载

1.使用USB线连接掌控box与计算机，OLED屏显示联网成功并提示空文件请下载。

2.[单击此处](http://www.haohaodada.com)进入好好搭搭网站，登录并点击进入创作界面。

![](../.gitbook/assets/haodabit-4.png)

3.下拉选择掌控box编程界面，点击进入。

![](../.gitbook/assets/zhangkongbox-3.png)

4.进入编程界面后，填写掌控box对应mac地址，编写程序，点击下载到设备。

![](../.gitbook/assets/zhangkongbox-4.png)

示例程序：

![](../.gitbook/assets/zhangkongbox-5.png)

5.下载成功后，弹出对话框点击确定后，掌控板OLED屏显示ABCD。

## 相关视频

[点击此处](http://haohaodada.com/video/zk01.php)查看教程视频第一课烧写物联网固件与编写第一个程序

## 常见问题