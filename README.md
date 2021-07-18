# 学习笔记-开源硬件实战

## 开源硬件

### 简介
开源反映自由释放详细信息的硬件设计，如电路图、材料清
单和电路板布局数据，通常使用开源软件来驱动硬件。开源
硬件开始考虑对软件以外的领域开源，是开源文化的一部分。其中，Arduino的诞生可谓开源硬件发展史上的一个新的里程碑。
### 协议
开源软件在追求“自由”的同时，不能牺牲程序员的利益，否则将会影响程序员的创造激情，因此世界上现在有 60 多种被开源促进组织（Open Source Initiative）认可的开源许可协议来保证开源工作者的权益。开源协议规定了你在使用开源软件时的权利和责任，也就是规定了你可以做什么，不可以做什么。

常见开源协议：
-  GNU GPL（GNU General Public License，GNU通用公共许可证）
-  BSD（Berkeley Software Distribution，伯克利软件发布版）协议
-  Apache 许可证版本（Apache License Version）协议
-  MIT（Massachusetts Institute of Technology）协议
-  GUN LGPL（GNU Lesser General Public License，GNU 宽通用公共许可证）

## 环境准备

### 工具
- [git](https://git-scm.com/)

Git 是一个开源的分布式版本控制系统,用于敏捷高效地处理任何或小或大的项目。
- [Markdown](https://shd101wyy.github.io/markdown-preview-enhanced/#/)

Markdown是一种轻量级标记语言，它允许人们使用易读易写的纯文本格式编写文档，然后转换成有效的XHTML（或者HTML）文档。

- [github](www.github.com)

GitHub是一个面向开源及私有软件项目的托管平台，因为只支持Git作为唯一的版本库格式进行托管，故名GitHub。

- [vscode](https://code.visualstudio.com/)

据说是宇宙第一编辑器,插件繁多。

### 使用

1. Markdown : [Markdown常用指令](./Markdown指令.txt)
2. Github：
    - 注册，登入，创建仓库
    - 克隆本地仓库：
        `git clone + "address"`
    - 将本地项目更新提交到github
        ```
        git init
        git commit -m "提交信息"
        git push
        ```
## 认识arduino
Arduino是一款便捷灵活、方便上手的开源电子原型平台。包含硬件（各种型号的Arduino板）和软件（ArduinoIDE）。

## 代码示例：流水灯
```cpp
int i=13;
void setup()       
{
  pinMode(13, OUTPUT);      //分配管脚
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop()          //在内置的main函数内循环执行
{
  for(i=13;i>=7;i--)
  {
  	digitalWrite(i, HIGH);  //设为高电平
  	delay(500); //延迟500毫秒
  	digitalWrite(i, LOW);   //设为低电平
  	delay(500); 
  }
}
```
## 连接示例
![error](./pictures/circuit.png)






