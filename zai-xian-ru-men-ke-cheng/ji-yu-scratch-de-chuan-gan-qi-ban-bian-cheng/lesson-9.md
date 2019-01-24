# 第9课 在Scratch中使用扩展模块——智能灯控

好好搭搭Scratch传感器板除了集成在主板上的摇杆、滑杆、按键、声音传感器、亮度传感器、蜂鸣器、LED这七种电子元器件以外，还可以通过扩展口使用其它的传感器模块，这样可以极大的扩展Scratch传感器板的功能。本课我们将使用触摸传感器控制鹦鹉飞翔、使用人体红外传感器制作智能灯。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-1.png)

## 模块与指令

要制作本课的范例作品，还需要用到以下指令：

### "读取扩展口A"指令、"读取扩展口B"指令、"读取扩展口C"指令：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-2.png)

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-3.png)

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-4.png)

分别读取传感器板A、B、C这三个扩展口的数值，取值范围（0，4095）。

#### 试一试

登录“好好搭搭”网站，连接传感器板，根据下表的要求操作，观察舞台上显示的扩展口数值，将不同状态下的摇杆数值记录下来。

[单击此处](http://www.haohaodada.com/video/b10901)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-5.png)

连接到扩展口A的触摸传感器模块：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-b1.png)

连接到扩展口B的人体红外传感器模块：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-b2.png)

## 作品制作

要制作本课的范例作品，需要将扩展模块通过连接线连接到传感器板：先找到触摸传感器模块和扩展模块连接线，将连接线方形插头插入模块的插座中、圆形插头插入传感器板标注为“A”的扩展接口中；然后找到人体红外传感器模块，同样用连接线将它插入传感器板标注为“B”的扩展接口中。

### 作品一：用触摸传感器模块控制鹦鹉飞翔

[单击此处](http://www.haohaodada.com/video/b10902)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-8.png)

要用触摸传感器模块控制鹦鹉飞翔，需要先按以下步骤添加舞台背景和角色：

1.找到“背景库”中的“hay field”作为舞台背景，找到“角色库”中的“parrot”作为角色，将这个角色摆放到舞台合适的位置。

2.删除舞台上其它无关的角色和传感器数值，将

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-2.png)

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-3.png)

这两个传感器数值摆放到合适的位置。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-11.png)

用触摸传感器模块控制鹦鹉飞翔的程序由三段脚本组成。

其中第一段脚本如下左图所示，通过造型切换扇动翅膀；第二段脚本如下右图所示，控制鹦鹉在舞台上移动。这两段脚本运行以后，鹦鹉能够在舞台上沿直线飞行、碰到边缘就反弹，飞行的时候还能够扇动翅膀，效果可以更加逼真。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-12.png)

第三段脚本重复执行条件判断：如果扩展口A（也就是触摸传感器模块连接的扩展口）所读取的数值大于指定值，那么通过增、减y坐标值，让鹦鹉飞行中产生上、下跳跃的动画效果。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-13.png)

#### 想一想

触摸传感器模块与传感器板上的按键有什么区别？

除了控制鹦鹉的飞行，你还可以用它编写什么程序？

### 作品二：用人体红外传感器模块控制LED亮灭

[单击此处](http://www.haohaodada.com/video/b10903)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-14.png)

要用人体红外传感器模块控制LED亮灭，就要重复执行条件判断：如果扩展口B（也就是人体红外传感器模块连接的扩展口）所读取的数值大于指定值，那么就设置LED亮，否则就设置LED灭。具体程序脚本如下图所示。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-15.png)

#### 试一试

能不能让LED更智能？比如再加上亮度传感器控制：只有亮度比较暗、同时检测到有人出现的时候，才能点亮LED。

[单击此处](http://www.haohaodada.com/video/b10904)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-16.png)

#### 拓展思考

除了触摸传感器和人体红外传感器模块，好好搭搭Scratch传感器板还提供有以下扩展模块：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor9-17.png)

你还对什么扩展模块感兴趣？尝试使用自己感兴趣的扩展传感器模块编写程序。

