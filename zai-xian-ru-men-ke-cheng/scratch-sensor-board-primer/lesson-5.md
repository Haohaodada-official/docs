# 第5课 在Scratch中使用蜂鸣器——守卫松饼

小猫由于工作努力，主人奖励了它一个松饼。它舍不得吃，准备作为第二天的早餐。可是，松饼的香味引来了馋嘴的老鼠。我们可以用Scratch设计一个程序，通过传感器板上的蜂鸣器发出警报，帮助小猫守卫松饼。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-1.png)

## 模块与指令

要完成本课的创意构思，需要了解以下的新知识、使用以下的新指令：

### “设置蜂鸣器频率”指令：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-3.png)

通过设置参数可以改变蜂鸣器发出声音的频率。该指令默认参数值为“2500”，取值范围为（20，20000）。

人耳可以听到的声音频率范围，一般是在20赫兹到20000赫兹之间。20赫兹以下的“次声波”与高于20000赫兹的“超声波”，我们人耳是听不到的。根据人耳可听见的声音频率范围，设置不同的参数值，可以改变蜂鸣器的频率。

### “设置蜂鸣器音量”指令：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-4.png)

通过参数设置可以改变蜂鸣器发出声音的音量大小。该指令默认参数值为“10”，取值范围为（0，100）。

#### 试一试

请根据以下的程序图编写脚本，然后分别依据表格中的数据设置频率参数值，再运行程序后试听，最后选择合适的声音效果打“P”。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-5.png)

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-b1.png)

[单击此处](http://www.haohaodada.com/video/b10501)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-7.png)

## 作品制作

要完成这个任务，我们可以先设置舞台，选取角色，设置老鼠的运动路线；然后判断老鼠与松饼之间的距离，距离越近，警报声越高、越急；再设置小猫能够跟随鼠标指针守卫松饼，老鼠也能够侦测与小猫之间的距离，当小于一定值时，它会逃回到初始位置。

### 第一步：设置舞台背景与角色

1.单击“舞台列表区”中的

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-8.png)

按钮，在打开的“背景库”对话框中找到并双击“room3”缩略图，将“room3” 背景图片添加到舞台上。

2.单击“角色列表区”中的

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-9.png)

按钮，在打开的“角色库”对话框中找到并双击“Cat2”缩略图，将“Cat2” 角色添加到舞台上。

3.按以上方法，继续从角色库中将“Mouse1”、“Muffin” 添加到舞台上；调整这三个角色的大小，将它们摆放到舞台合适的位置。

4.将角色列表区无用的角色删除；将舞台上无关的传感器数值隐藏起来。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-10.png)

### 第二步：编写老鼠角色脚本

[单击此处](http://www.haohaodada.com/video/b10502)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-11.png)

老鼠角色脚本共有两段代码，可以在“角色列表区”中选中“Mouse1”角色，分别按以下步骤编写这两段代码：

第一段代码使老鼠能够面向松饼（Muffin）方向移动。首先指定“Mouse1”的起始坐标，其中X值为（-210，210）之间的随机数，y值为（-180）；然后重复移动，每次都是面向松饼（Muffin）方向，移动10步、等待0.2秒。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-12.png)

第二段代码用于侦测老鼠与小猫之间的距离。使用重复执行指令进行侦测判断，如果与小猫（Cat2）之间的距离小于150，那么老鼠（Mouse1）返回起始的随机位置。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-13.png)

#### 想一想

1. 在以上代码中，Mouse1起始坐标的x值是一个随机数，你认为这样的指令有什么好处？你想让它每次从哪个位置随机出现？
2. 如果想让Mouse1的运动更加流畅，可以怎样修改参数？

[单击此处](http://www.haohaodada.com/video/b10503)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-14.png)

### 第三步：编写小猫角色脚本

[单击此处](http://www.haohaodada.com/video/b10504)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-15.png)

小猫角色脚本比较简单，只要让小猫面向老鼠方向，同时跟随鼠标指针移动就行。具体可以按以下步骤编写代码：

首先在“角色列表区”中选中“Cat2”角色，然后在开始旗下面使用重复执行指令，让小猫不断地面向老鼠（Mouse1），同时移动到当前鼠标指针所在的位置。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-16.png)

#### 试一试

如果不使用

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-17.png)

而是使用

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-18.png)

效果会如何？你喜欢哪种方式，为什么？

[单击此处](http://www.haohaodada.com/video/b10505)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-19.png)

### 第四步：编写松饼角色脚本

[单击此处](http://www.haohaodada.com/video/b10506)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-20.png)

松饼（Muffin）的脚本有两段，可以在“角色列表区”中选中“Muffin”角色，分别按以下步骤编写这两段代码：

第一段脚本主要是侦测老鼠（Mouse1）与松饼（Muffin）之间的距离，并根据侦测所获得的数据做出判断：当与老鼠之间的距离小于100时，发出频率是1000、以0.5秒为间隔的报警声；当与老鼠之间的距离大于100时，发出频率是2000、以0.25秒为间隔的报警声；

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-21.png)

第二段脚本用于判断老鼠有没有碰到松饼。首先显示松饼（Muffin）的第1个造型（muffin-a）；然后判断，如果碰到老鼠（Mouse1），则关闭蜂鸣器、将造型切换为第2个造型（muffin-b）、播放声音“pop”，等声音播放完毕停止程序运行。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-22.png)

#### 练一练

在以上介绍的基础上进一步完善程序。比如增加舞台场景、添加其它角色，还可以再加上计分、计时、奖励系统等，使游戏变得更加好玩。

#### 拓展思考

我们听到的音乐，每个音符都是有固定频率的，比如C调音符相对应的频率如下图所示：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-23.png)

请你使用Scratch编写一段自动演奏《两只老虎》的音乐程序，或者编写一个能够用键盘弹奏的钢琴程序。与以前编写的类似程序不同的是，现在演奏音乐的，是传感器板上的蜂鸣器。

