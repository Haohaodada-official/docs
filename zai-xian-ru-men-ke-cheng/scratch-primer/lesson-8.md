# 第8课 喵喵运动会

马上举办校园运动会了，小狗“小白”和“小蓝”都名参加跑步比赛，“喵喵”将是这个项目的裁判。

在本课的范例作品中，单击“喵喵”角色，“小白”和“小蓝”开始向舞台右侧方向奔跑。当遇到终点线时，停止前进，同时由“喵喵”宣布它们到达终点的消息。

![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-0.png)

## 创意构思

可以使用Scratch中的“广播”功能来完成本课任务：单击“喵喵”后，由“喵喵”广播“起跑”消息，运动员角色在收到消息后起跑，并在到达终点线时广播“到达”的消息。

在运动员是否到达终点线的判断上，可以使用Scratch中的颜色触碰检测方法进行判别。此外，还可以使用随机数指令随机产生运动员的移动速度，从而使比赛更精彩。

要完成本课的创意构思，需要了解以下的新指令：

#### 1. Scratch中的广播

在Scratch中，“广播”是非常重要的一个功能。每个广播都有“消息名称”，Scratch通过消息名称来区别不同的广播。Scratch的舞台和角色都能够发送广播，每个广播发送后，能被所有对象（包括广播的发送者）接收。

比如下图中的“喵喵”、“小白”和“小蓝”三个角色，如果已经编写了当“小白”和“小蓝”接收到“起跑”的消息后，开始向终点线方向移动的脚本。那么当“喵喵”广播“起跑”消息后，所有角色，包括“喵喵”自己，都会收到这条消息；其中“小白”和“小蓝”由于事先编写了相应的脚本，因此会向终点线移动。

![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-1.png)

[单击此处](http://haohaodada.com/video/a20801.php)或者扫描下方二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a20801.png) 

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-2.png) 

属于“事件”类别指令，通过指令广播一条消息；单击下拉列表参数，可以选择需要广播的消息名称；单击其中的“新消息”选项，可以在打开的对话框中新建消息名称。

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-3.png) 

属于“事件”类别指令，当接收到指定消息后，能够触发指令，执行指令下方的脚本；单击下拉列表参数，可以选择触发指令的具体消息名称。

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-4.png) 

属于“侦测”类别指令，用于侦测角色是否碰到指定颜色；单击指令的颜色参数，当鼠标指针变成 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-6.png) 时，移动鼠标在需要的颜色上单击，指令中的颜色参数会变成指定的颜色。

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-5.png) 

属于“控制”类别指令，Scratch循环指令中的一种；在满足条件之前，重复执行指令中所包含的脚本；指令中的参数就是停止的条件。

## 脚本设计

### 第一步：绘制赛道

本课范例中的舞台背景图片是一条赛道，上面有起跑线和终点线。其中，终点线的颜色还将被用作角色是否到达终点的判断条件。可以在“背景”选项卡中绘制这条赛道：

1. 单击“背景列表区”中的缩略图，再单击进入“背景”选项卡；然后单击右下角的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-7.png) 按钮，进入“矢量模式”。
2. 单击选中“矢量工具按钮”中的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-8.png) 按钮，再单击选中“颜色”区域的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-9.png) 、“填充模式”中的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-10.png) ，最后在“背景编辑区”拖动鼠标，画出红色矩形赛道。
3. 单击选中“矢量工具按钮”中的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-11.png) 按钮，再选中“颜色”区域的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-12.png) ，设置合适的线宽，最后按住键盘上的“Shift”键，在“背景编辑区”赛道的左边拖动鼠标，画出一条蓝色线条，作为起跑线。
4. 重新选择颜色为 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-13.png) ，还是按住键盘上的“Shift”键，在赛道的右边拖动鼠标，画出一条黄色线条，作为终点线。

[单击此处](http://haohaodada.com/video/a20802.php)或者扫描下方二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a20802.png) 

### 第二步：准备角色

本课范例作品中的三个角色，除了默认的小猫以外，另外两个“Dog1”和“Dog2”角色可以从Scratch的“角色库”选取，再把这三个角色重命名为“喵喵”、“小白”和“小蓝”，然后调整三个角色的大小，把它们拖放到合适的位置。

[单击此处](http://haohaodada.com/video/a20803.php)或者扫描上方的二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a20803.png) 

### 第三步：喵喵发令

首先为小猫“喵喵”编写脚本，使它能够向两个运动员广播“起跑”消息：

1. 单击选中小猫“喵喵”角色，将“事件”类别中的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch5-1.png) 指令拖动到脚本区，然后再将 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-2.png) 指令拖动到脚本区与前一个指令组合。
2. 单击 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-2.png) 指令的下拉列表参数，选中“新消息”选项，在打开的“新消息”对话框中输入消息名称为“起跑”。

[单击此处](http://haohaodada.com/video/a20804.php)或者扫描上方的二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a20804.png) 

### 第四步：运动员响应消息

两只小狗运动员接收到“喵喵”广播的“起跑”消息后，应该开始向舞台右侧的终点线移动，并在碰到终点线时停止前进。具体可以按以下步骤操作：

1. 为了让 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-4.png)指令能够对“是否碰到了终点线”这个条件进行检测，需要将指令中的颜色参数设置成与终点线颜色相同：先单击指令中的颜色参数，然后将鼠标移动到终点线上单击，这样，指令的参数颜色就与终点线相同。
2. 还可以使用 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch7-5.png) 指令，让“小白”每次比赛都拥有不同的速度。

“小白”完整的脚本如下图所示：

![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-14.png)

“小蓝”的脚本与“小白”相同，可以采用复制粘贴的方法编写。

[单击此处](http://haohaodada.com/video/a20805.php)或者扫描下方二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a20805.png) 

#### 试一试

在“侦测”类别中，与 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-4.png) 指令功能类似的还有![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-15.png)、![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-16.png)这两个，你知道这两个指令起什么作用吗？

[单击此处](http://haohaodada.com/video/a20806.php)或者扫描下方二维码可以观看相关视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a20806.png) 

### 第五步：到达终点发消息

当“小白”和“小蓝”在到达终点后，应该分别发送到达终点的消息。这样，才能让“喵喵”知道谁到达终点：

1. 单击选中“小白”，将“事件”类别中的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-2.png) 指令拖动组合到脚本区，作为最后一条指令；再单击指令的下拉列表参数，选中“新消息”选项，在打开的“新消息”对话框中输入消息名称为“小白到达终点”。
2. 再单击选中“小蓝”，按照以上的步骤添加指令，并设置指令的参数为“小蓝到达终点”。

小猫“喵喵”接收到来自“小白”和“小蓝”发送的消息后，可以按以下步骤操作，宣布相应的到达信息：

1. 单击选中小猫“喵喵”，将“事件”类别中的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch8-3.png) 指令拖动到脚本区，在下拉列表参数中选择“小白到达终点”。
2. 将“外观”类别中的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch2-2.png) 指令拖动组合到上一条指令下方，修改指令的第一个参数为“小白已经到达终点”。这样，当“喵喵”接收到“小白到达终点”这个消息的时候，会宣布“小白已经到达终点”。
3. 复制这段脚本，修改第一个指令的参数为“小蓝到达终点”，第二个指令的第一个参数为“小蓝已经到达终点”。这样，“喵喵”会宣布“小蓝已经到达终点”。

[单击此处](http://haohaodada.com/video/a20807.php)或者扫描下方二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a20807.png) 

#### 练一练

按照以上步骤所编写的程序脚本，运动员到达终点以后，“喵喵”只会宣布运动员到达的消息。你能够编写程序，让“喵喵”还能够根据比赛情况，宣布运动员的比赛成绩吗？

[单击此处](http://haohaodada.com/video/a20808.php)或者扫描下方二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a20808.png) 

## 拓展思考

校园运动会结束了，“喵喵”还不满意，你能编写程序，让比赛更精彩吗？

