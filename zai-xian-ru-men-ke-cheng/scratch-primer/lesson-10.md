# 第10课 喵喵出题目

班级即将举行口算竞赛，为此“喵喵”想要制作一个口算训练程序给大家练习，我们一起来帮助它吧！

在本课的范例作品中，我们需要制作一个能够随机出题、自动批改的加法口算训练程序。

![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-0.png)

## 创意构思

本课的范例作品是一个加法口算训练程序，先随机出题，然后等待用户输入答案，再判断输入的答案是否正确。

要完成本课的创意构思，需要了解以下的新指令：

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-1.png)  

属于“数据”类别工具按钮，单击这个按钮后，可以通过打开的“新建变量”对话框创建变量。

创建变量以后，在“指令区”的“数据”类别中，会增加一些用于控制变量的指令，同时在舞台的左上角默认会显示变量对象。该变量对象左边是变量名，右边是变量当前的值。

[单击此处](http://haohaodada.com/video/a21001.php)或者扫描下方二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21001.png) 

#### 试一试

双击舞台中的变量对象，你发现了什么？？

[单击此处](http://haohaodada.com/video/a21002.php)或者扫描下方二维码可以观看相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21002.png) 

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-2.png) 

属于“数据”类别指令，为一个变量赋值；由第一个下拉列表参数确定需要赋值的变量，第二个参数确定这个变量具体设定的值。

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-3.png) 

属于“数据”类别指令，每次新建一个变革，都会增加相应变量的指令。通过该指令，可以获取变量当前的值。

#### 4. Scratch中的变量

在Scratch中，“变量”是另一个非常重要的概念，可以新建变量、对变量赋值，在程序的运行过程中可以根据需要随时修改变量的值。

一个变量包括“变量名”与“变量值”两个属性：“变量名”用于在脚本中识别不同的变量，可以使用中文作为变量名称，变量名应该有一定意义；“变量值”是指变量所包含的值。比如创建一个名为“加数1”的变量，可以通过 [img](file:///C:\Users\蒋先华\AppData\Local\Temp\ksohtml\wpsC111.tmp.jpg) 指令来设置它的变量值，也可以使用 [img](file:///C:\Users\蒋先华\AppData\Local\Temp\ksohtml\wpsC122.tmp.jpg) 指令来获取它的变量值。

[单击此处](http://haohaodada.com/video/a21003.php)或者扫描下方二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21003.png) 

#### 想一想

下列表格中的字符，在Scratch中都可以作为新建变量名。但有些作为变量名不太合适，容易混淆。请在你认为最合适的变量名下方的表格中打“**√**”。

![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-3b.png)

[单击此处](http://haohaodada.com/video/a21004.php)或者扫描下方二维码可以观看相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21004.png) 

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-4.png)、![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-5.png)、![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-6.png) 

属于“数字和逻辑关系”类别指令，分别用于比较指令左边的参数与右边的参数之间是否存在相等、小于或大于的关系。

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-7.png)
2. 属于“侦测”类别指令，能够显示提示文本并等待用户通过键盘输入，指令的参数就是显示的提示文本内容。
3. 执行该指令会暂停程序执行，然后在舞台下文显示文本输入框，等待用户输入。输入完成后直接回车或者单击文本框右侧的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-8.png) 按钮完成输入。

#### 试一试

分别将该指令放置在角色脚本中与舞台背景脚本中运行程序，你发现了什么？

[单击此处](http://haohaodada.com/video/a21005.php)或者扫描下方二维码可以观看相关视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21005.png) 

1. ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-9.png)
2. 属于“侦测”类别指令，与 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-7.png) 指令配合使用，用户键盘输入的内容保存于该指令中。

## 脚本设计

### 第一步：准备角色和背景

1. 从背景库中选择“chalkboard”作为舞台背景图片；
2. 将角色“Cat1”重命名为“喵喵”，然后摆放到舞台合适的位置；
3. 单击“角色列表区”的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch5-6.png) 按钮，在角色造型编辑窗口中绘制一个加号，并将该角色重命名为“加号”，将这个加号摆放到黑板的中央。

[单击此处](http://haohaodada.com/video/a21006.php)或者扫描下方二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21006.png) 

### 第二步：口算出题

本课范例中的口算是由两个加数组成的加法口算，可以按以下步骤出题：

1. 在“脚本”选项卡中，单击“数据”类别下的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-1.png) 按钮；在打开的“新建变量”对话框中输入变量名“加数1”。
2. 重复以上步骤，再新建变量“加数2”。
3. 将舞台中的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-10.png) 、 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-11.png) 标记设置成 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-12.png) 样式后分别摆放到加号的两侧。
4. 单击舞台背景缩略图，添加如下图所示的变量初始化脚本：

![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-13.png)

[单击此处](http://haohaodada.com/video/a21007.php)或者扫描下方二维码观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21007.png) 

#### 试一试

把 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-14.png) 指令和 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-15.png) 指令中的第二个参数修改成不同的数字后再运行程序，你发现了什么？

如果将 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch7-5.png) 指令分别拖动到以上两个指令的第二个参数位置上再运行程序，你又发现了什么？

[单击此处](http://haohaodada.com/video/a21008.php)或者扫描下方二维码可以观看相关视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21008.png) 

### 第三步：输入口算答案

口算题目产生并且显示以后，程序应该能够接受用户的键盘输入。要实现这个功能，可以将以下脚本添加到“喵喵”的角色脚本中：

![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-16.png)

[单击此处](http://haohaodada.com/video/a21009.php)或者扫描上方的二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21009.png) 

#### 试一试

在指令区勾选 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-9.png) 指令前的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-17.png) ，然后运行上图所示的脚本，在文本输入区中输入答案。观察舞台区并把你的发现记录下来。

[单击此处](http://haohaodada.com/video/a21010.php)或者扫描下方二维码可以观看相关视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21010.png) 

### 第四步：判断答案是否正确

* 口算答案输入后，需要马上判断是否正确，也就是将“加数1”与“加数2”相加的结果与输入的答案进行比较，如果相等说明输入正确，否则就是输入错误。可以将以下脚本添加到“喵喵”的角色脚本的 ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-18.png) 指令后：

![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/scratch10-19.png)

[单击此处](http://haohaodada.com/video/a21011.php)或者扫描下方二维码可以观看以上内容相关的视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21011.png) 

#### 想一想

现在的口算练习程序每运行一次只能练习一道口算题，如果想要练习多道题目，应该如何修改脚本？

[单击此处](http://haohaodada.com/video/a21012.php)或者扫描下方二维码可以观看相关视频。

* ![](https://github.com/Haohaodada-official/docs/tree/8a7bce8f9269f3537909f64d03ad2a1ddd80af30/.gitbook/assets/a21012.png) 

## 拓展思考

在“喵喵”制作的口算软件帮助下，大家的口算成绩突飞猛进。不过“喵喵”觉得这个口算软件还不够完美，发挥你的想象，用学过的知识让口算软件更完美吧！

