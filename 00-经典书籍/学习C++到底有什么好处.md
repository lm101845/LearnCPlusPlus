# 学习C++到底有什么好处

>  链接：https://www.zhihu.com/question/328171823/answer/727835037

学C++本身是教不会你编程的。你需要主动的、不断的扩展自己的知识领域。



写一个学生管理系统是一个很好的开端；但接下来，你还需要学习更多。



举例来说，“图形界面”究竟是怎么一回事呢？

我们知道，计算机屏幕实际上是一个“色点”组成的“点阵”；高清屏1920X1080@24bit，意思就是：它一共有1080行，每行1920个点；每个点又可表示2^24种不同颜色（以RGB格式表示；其中RGB的意思是红绿蓝三原色，每种原色8bit，256种取值，即有效取值为0~255）。



这个知识，就是计算机屏幕显示的根本；一切的一切，最终都要变成这样一个1920X1080的彩色点构成的点阵——我们的眼睛无法区分这么多点，看起来就是一整幅图片了。



我们的程序，想要显示出“图形界面”，就得管理好这个巨大的、彩色点构成的点阵；不仅如此，操作系统还可以同时运行一大堆程序、显示一大堆窗口……



那么，这么程序的这么多窗口，又是如何有条不紊的显示在屏幕上的呢？它们不会相互干扰吗？如何处理它们彼此之间的遮挡关系？那些压根看不见的窗口，也要每秒60帧的更新它的显示内容吗？那些一直没有改变过的窗口，是否每帧都必须从头生成内容？可不可以想办法节约掉这些不必要的计算动作？



你看，这是不是一个“[学生管理系统](https://www.zhihu.com/search?q=%E5%AD%A6%E7%94%9F%E7%AE%A1%E7%90%86%E7%B3%BB%E7%BB%9F&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A727835037%7D)”的超级放大版、复杂版？



为了管理这样一个复杂的东西，人们不得不搞出复杂的[数据结构](https://www.zhihu.com/search?q=%E6%95%B0%E6%8D%AE%E7%BB%93%E6%9E%84&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A727835037%7D)和针对性的各种算法；这样还不够，业界从MFC那复杂的消息循环、复杂的对话框数据交换开始，发展了许多年，这才找到Qt/GTK/WPF这样精炼高效、界面与逻辑分开的、方便易用的新架构——而这些东西，就需要面向对象之类东西的帮助了。



你可以算一算，如果每秒刷新60次，1920X1080的屏幕需要多大的计算量。

这么大的计算量，这么复杂的交互逻辑，只有C/C++系语言才hold得住。让其他语言来做它，就很容易浪费太多的性能。



不仅如此。

对于游戏之类应用，人们经常不得不用几十上百万个三角形拼凑出栩栩如生的[3d模型](https://www.zhihu.com/search?q=3d%E6%A8%A1%E5%9E%8B&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A727835037%7D)；然后通过实时计算更新它们的位置，再模拟出几个光源去照它、处理它们在不同光照下的颜色/反射等等细节——经过各种复杂的处理流程之后，通过一个虚拟的摄像机，计算这个摄像机应该看到什么样的数据……最终，我们才能把这些数据投射到屏幕上，让用户看到一个逼真的3D世界。

CPU处理这样巨大的“阵列数据”显得非常笨拙，因为它只能一个顶点一个顶点的处理它；后来就加入了MMX/SSE/3D NOW之类SIMD指令集。但这东西的性能还是不太够……

再后来，就有了显卡；显卡后来又发展成了GPU。GPU支持的特性又越来越多，直到现在的实时[光线追踪](https://www.zhihu.com/search?q=%E5%85%89%E7%BA%BF%E8%BF%BD%E8%B8%AA&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A727835037%7D)……



你看，仅仅一块屏幕，这后面都有多少东西。



其中，Qt/GTK/WPF之类，是别人写出来、帮我们管理常规应用的窗口的；而OpenGL、DX9/10/11/12之类，则是替我们和显卡打交道、帮我们写3D应用的——如果你要写程序，那就是A3D/unity之类引擎的天下了：它们不仅帮我们打包了图形图像以及音频动画模型等等方面的支持，还集成了游戏需要用到的其他许多基础功能，比如状态机、地图导航、[碰撞检测](https://www.zhihu.com/search?q=%E7%A2%B0%E6%92%9E%E6%A3%80%E6%B5%8B&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A727835037%7D)等等东西。



学C++的好处是，这类贴近底层、贴近硬件或者性能要求严格的程序，往往只能用C/C++系语言才写的出来——用其他语言倒也不是不能写，但多少都差点意思。



总之，就好像学生管理系统一样，屏幕上的点阵同样需要一套又一套的管理系统；这些系统是写给我们程序员用的。

想要用好它，你最好搞明白它的基本原理；你要知道如此庞大复杂的东西，是如何管理的井井有条的——算法和数据结构只是入门，后面还有专门讲[软件组织结构设计](https://www.zhihu.com/search?q=%E8%BD%AF%E4%BB%B6%E7%BB%84%E7%BB%87%E7%BB%93%E6%9E%84%E8%AE%BE%E8%AE%A1&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A727835037%7D)一般原则的软件工程。



写一个Qt很难，但知道它的设计思路并不难。除了C/C++，极少有哪种语言可以给你提供这个视野。

有了这些知识，那么Qt/GTK之类东西你用起来，就会感觉它非常简单，随便哪种抓起来就能用。这就叫[知其然又知其所以然](https://www.zhihu.com/search?q=%E7%9F%A5%E5%85%B6%E7%84%B6%E5%8F%88%E7%9F%A5%E5%85%B6%E6%89%80%E4%BB%A5%E7%84%B6&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A727835037%7D)。



正因此，其实我是不太建议学C++时着急用各种框架的。因为学框架，你用任何一种语言，从C#到python，全都能学；但写一个Qt/GTK，写一个MySQL，写一个GCC……这类把[计算机体系结构](https://www.zhihu.com/search?q=%E8%AE%A1%E7%AE%97%E6%9C%BA%E4%BD%93%E7%B3%BB%E7%BB%93%E6%9E%84&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A727835037%7D)挖到根子的有趣挑战，只有C/C++系才鼓励你去做、而且也只有C/C++系语言才能提供无穷无尽的开源优质资源供你参考。



换句话说，当别人忙着追随Qt之类框架的新版本、看着它的新特性抓耳挠腮、不知这些新API该如何调用时，你可以借着C/C++这根拐杖，自豪的说“这个新特性，其实我都知道它是怎么实现的”！



别人学用数据库，你写玩具数据库；别人学用hive，你学着写自己的big-table/map-reduce——这类东西的原理性代码往往没多少，但难度往往会高一些。



但这个投入是值得的。

一旦理解了这些酷炫技术背后的原理，你就不会说“哎呀上学时我们居然还学老掉牙的MFC，现在看着Qt两眼一抹黑”，而是“Qt的抽象果然比MFC好，简单，清晰，易用。MVC模式果然是个天才的设计，你看GTK/WPF等等，它们也都是在这个模式的基础上发展起来的”……

换句话说，掌握一门新库，对于彻底理解了原理的你来说，就和吃饭喝水一样简单。因为在已经对它的五脏六腑有了清晰理解的你看来，它们本就该这样设计、它们这个设计是如此精典以至于只是看了它们的接口就让你有[茅塞顿开](https://www.zhihu.com/search?q=%E8%8C%85%E5%A1%9E%E9%A1%BF%E5%BC%80&search_source=Entity&hybrid_search_source=Entity&hybrid_search_extra=%7B%22sourceType%22%3A%22answer%22%2C%22sourceId%22%3A727835037%7D)之感。



总之，如果你想学着做一些面向用户的东西，其实并不建议你用C++。因为用它实现这类东西往往会比较繁琐。但如果你想挖到各种技术的根子，那么C/C++就是最最犀利的武器——没有之一。