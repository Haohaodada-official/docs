# 第2课 在Scratch中使用按键——点亮卧室里的灯

小猫“喵喵”马上要搬新房了。新房子设计得可漂亮了，小猫很满意。可是准备搬家的时候，小猫才发现新房里没装电灯开关。这可怎么办呢？本课我们将帮助小猫利用传感器板上的“Up”键与“Down”键设计一个程序，对房间里的灯进行控制。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-1.png)

## 模块与指令

要完成本课的创意构思，需要了解以下的新知识、使用以下的新指令：

### “读取Up键”指令：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-3.png)

读取传感器板上“Up”按键的状态，数值范围（0，1）。当按下“Up”键，数值为“1”，当弹起“Up”键，数值为“0”。

### “读取Up键”指令：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-4.png)

读取传感器板上“Down”按键的状态，数值范围（0，1）。当按下“Down”键，数值为“1”，当弹起“Down”键，数值为“0”。

#### 试一试

传感器板上每个按键都有“按下”和“弹起”两种状态，那么“Up”键和“Down”键的组合能表示几种状态？请你试试看，并记录不同状态下的参数值。

[单击此处](http://www.haohaodada.com/video/b10201)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-5.png)

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-b1.png)

## 作品制作

要完成本课范例，可以先导入卧室图片作为舞台背景；然后判断传感器板上的“Up键”是否“按下”；如果“按下”，那么将舞台的亮度设置为“亮”；如果状态是“弹起”，那么不改变舞台亮度。传感器板上“Down键”和“Up键”的判断方式类似。

### 第一步：设置舞台背景与角色

[单击此处](http://www.haohaodada.com/video/b10202)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-7.png)

1.打开网络浏览器，登录“好好搭搭”网站，单击首页中的“创作”按钮，在“创作模版”网页中单击“好好搭搭传感器板”模版，进入“模版项目页”，单击项目页右上角的“转到设计页”按钮，进入“传感器板编程设计页”。

2.使用USB线把传感器板和计算机连接起来，打开“在线编程插件”程序，单击“连接”按钮，可以在浏览器的“传感器板编程设计页”中看到传感器数值发生变化，说明传感器板和Scratch已经正常连接。

3.单击“舞台列表区”的

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-8.png)

按钮，在打开的“背景库”对话框中找到并双击卧室缩略图（bedroom2），将这个背景图片添加到舞台上。

4.由于默认的传感器板编程网页中没有小猫角色，因此可以单击“角色列表区”中的

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor5-9.png)

按钮，在“角色库”对话框中找到并双击小猫缩略图（Cat1），将它添加到舞台上。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-8.png)

5.在舞台上，默认显示传感器板上所有传感器的数值。为了作品的美观，可以右键单击这些数值，在打开的右键菜单中选择“隐藏”选项，将不需要的数值隐藏起来，只保留

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-9.png)

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-10.png)

这两个数值，最后把它们拖放到舞台的合适位置。

### 第二步：编写舞台背景脚本

[单击此处](http://www.haohaodada.com/video/b10203)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-11.png)

控制舞台“亮度”的脚本，应该单击“舞台列表区”中的背景缩略图，然后在“脚本区”编写舞台脚本代码：

将“开始旗”和“重复执行”指令组合在一起，然后在“重复指令”中使用两个判断指令进行“判断”：如果“Up键”=“1”，那么将“亮度特效”设定为“0”，并广播“开灯状态”消息；如果“Down键”=“1”，那么将“亮度特效”设定为“-80”，并广播“关灯状态”消息。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-12.png)

#### 试一试

在以上代码中，将

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-13.png)

指令参数设置为“-80”，如果设置其它数值行不行？请分别用“-100”、“-50”、“50”、“100”试一试，效果会怎么样？

[单击此处](http://www.haohaodada.com/video/b10204)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-14.png)

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-b2.png)

### 第三步：编写小猫角色脚本

[单击此处](http://www.haohaodada.com/video/b10205)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-16.png)

在“关灯”状态下由于房间光线很暗，小猫角色可以隐藏起来，开灯状态下则显示出来，这样会使开、关灯效果更加逼真。具体可以单击小猫角色，为小猫编写以下脚本代码：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-17.png)

#### 想一想

如果不使用“发送消息”和“接收消息”的指令，还有什么方法可以让小猫隐藏和显示？ [单击此处](http://www.haohaodada.com/video/b10206)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-18.png)

#### 练一练

当按下“Up键”开灯时，房间一下子亮了起来，小猫心里肯定很高兴，这个时候，它会怎么说、怎么做呢？同样的，当按下“Down键”关灯时，房间一下子就黑了，它又会说什么、做什么呢？

请用

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor2-19.png)

来完善你的作品！

#### 拓展思考

通过以上范例的制作，利用传感器板上的两个按键，可以控制Scratch舞台的亮度，模拟开灯、关灯的效果。请再想一想、试一试，能不能只使用一个按键实现开、关灯效果？

提示：在制作过程中需要注意以下几点：

1. 可以设置一个变量，用于保存当前灯的状态。比如用“0”表示“灯关了”，用“1”表示“灯开着”。
2. 当按下按键时，判断变量值。如果是“0”，则设定为“1”，否则设定为0。
3. 通过判断变量值，来确定房间的亮度。如果变量值是“1”，则设定房间的亮度为“0”；否则房间亮度为“-80”。

