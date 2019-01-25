# 第4课 在Scratch中使用滑杆——生日快乐

小猫喵喵的生日到了。为了给它一个惊喜，朋友们为它精心设计了一个生日晚会。生日之夜，“生日快乐”歌声奏响，还可以通过传感器板上的滑杆调整音量、调整房间灯光亮度。小猫在浓浓的生日氛围中与朋友欢度生日之夜。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-1.png)

## 模块与指令

要完成本课的创意构思，需要了解以下的新知识、使用以下的新指令：

### 滑竿

[单击此处](http://www.haohaodada.com/video/b10401)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-3.png)

滑杆的实质是一个滑动变阻器，它可以通过滑动滑片调整电路中电阻的大小，从而改变电路的电流强度。

### “读取滑竿”指令：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-4.png)

读取传感器板上滑杆的数值，取值范围是（0，1023）。该指令的数值会随着滑片的左右移动呈线性变化，传感器板在正常摆放的前提下，往左移，数值越小；越往右移，数值越大。

#### 试一试

登录“好好搭搭”网站，连接传感器板，根据下表的要求操作，观察舞台上显示的滑杆传感器数值，将不同状态下的滑杆传感器数值记录下来。

[单击此处](http://www.haohaodada.com/video/b10402)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-5.png)

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-b1.png)

## 作品制作

要完成本课范例，可以先添加舞台、角色，设置舞台和角色的初始状态；然后根据音乐的音量与滑杆参数值、房间亮度与滑杆值参数之间的关系，通过传感器板上的滑杆调整生日晚会的音乐和灯光，滑杆值越大，音乐越响，灯光越亮。

### 第一步：设置舞台背景与角色

[单击此处](http://www.haohaodada.com/video/b10403)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-7.png)

1.通过“背景库”对话框添加“派对”（party）图片作为舞台背景；再通过“角色库”对话框添加小猫（Cat1）、蛋糕（Cake）角色；调整这两个角色的大小、将它们拖动到舞台的合适位置。

2.选中背景缩略图，单击“声音选项卡”中的

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-8.png)

按钮，在“声音库”对话框的“循环音乐”类别中，打开“生日音乐”（birthday）声音。

3.隐藏舞台上除“滑杆”以外，其它无关的传感器数值。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-9.png)

### 第二步：在背景中编写音乐调节脚本

[单击此处](http://www.haohaodada.com/video/b10404)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-10.png)

在背景脚本中，有两段脚本代码与“生日快乐”音乐有关：第一段代码如下左图所示，用于播放音乐。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-11.png)

第二段代码如上右图所示，用于实现通过滑杆调整音乐的音量大小。也就是通过滑动传感器板上的滑杆，可以改变音乐的音量大小。要实现这个效果，可以在舞台脚本代码中，将“读取滑杆”指令组合到“音量设定”指令的参数框内，具体脚本代码如上右图所示。

#### 想一想

以上代码中，直接将滑杆值设定为音量值，在滑动传感器板的滑杆时出现了什么问题？你认为应该如何解决？

[单击此处](http://www.haohaodada.com/video/b10405)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-13.png)

如果直接将“读取滑杆”指令组合到“音量设定”指令的参数框内，会导致音量调节不正常。当“读取滑杆”指令值从“0”变化到“100”时，音量调节还是正常的，但当“读取滑杆”指令值大于“100”以后，由于音量已达到最大值，所以继续调节滑杆，并不会改变音乐音量的大小。

这是由于滑杆的取值范围（0，1023）与音量的取值范围（0，100）不一致所造成的。因此，先要将滑杆与音量的数值进行换算。为方便计算，可以将滑杆的最小值看做“0”、最大值看做“1000”；当音量是“0”时，没有声音；当音量是“50”时，用正常声音播放音乐；当音量为“100”时，用最响的声音播放音乐。具体如下图所示：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-17.png)

通过上图，可以看出：滑杆数值是音量数值的10倍，也就是以下这个换算公式：音量数值=滑竿数值/10。

用滑杆控制音量的脚本代码也可以修改为如下图所示：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-19.png)

#### 想一想

如果要用滑杆精确控制音量，换算公式应该是怎样的？

### 第三步：在背景中编写亮度调节脚本

[单击此处](http://www.haohaodada.com/video/b10406)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-16.png)

在本课的范例作品中，通过传感器板上的滑杆还可以改变背景图片的亮度。与用滑杆控制音量一样，用滑杆控制背景图片亮度，也需要先找到它们之间的转换公式。但与控制音量不一样的是：图片亮度的取值范围是（-100，100），是由一段负数、一段正数组成的，因此滑杆和亮度的数值不能直接相除。如下图所示：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-17.png)

可以先把亮度值转化为正数，也就是在原来数值的基础上增加100，使亮度值最小是“0”，最大是“200”，如下图所示：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-18.png)

再观察上图，就可以得出滑杆是亮度数值的5倍，也就是如下所示的换算公式：亮度数值=滑杆数值/5-100。

用传感器板上的滑杆控制背景图片亮度的脚本代码如下图所示：

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-19.png)

#### 试一试

为了使背景的亮度变化呈现更好的效果，还可以怎样优化脚本？

[单击此处](http://www.haohaodada.com/video/b10407)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-20.png)

### 第四步：编写小猫和蛋糕角色脚本

[单击此处](http://www.haohaodada.com/video/b10408)或者扫描下方二维码可以观看相关的视频。

![](https://github.com/Haohaodada-official/docs/tree/75ec2c4586880d18df756ec3d2daf4b3d5ddb66f/.gitbook/assets/Scratch-sensor4-21.png)

小猫、蛋糕这两个角色也应该随着背景图片的亮度变化而变化，具体的代码与背景图片的代码类似，可以通过复制得到：

单击选中背景缩略图，将“脚本区”中的“亮度特效设定”代码分别拖动到“角色列表区”小猫角色缩略图及蛋糕角色缩略图上，就可以将这段代码复制到这两个角色中。这样小猫和蛋糕的亮度也能够跟着背景图片亮度的改变而改变。

#### 拓展思考

除了可以用传感器板上的滑杆控制Scratch舞台的亮度、声音，还可以综合前面所学的知识，为生日晚会添加更多的乐趣。比如，伴随着“生日快乐”音乐的响起，传感器板上的红灯渐渐亮起，房间内的气球也缓缓升起，小猫的朋友们依次出现，祝小猫生日快乐。

