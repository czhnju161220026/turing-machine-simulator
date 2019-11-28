# 计算理论初步课程实验报告

姓名：崔子寒

学号：161220026

[TOC]

## 实验概述

<table>
  <tr>
    <th>项目</th>
  	<th>内容</th>
  </tr>
  <tr>
    <td width="100px">完成情况</td>
    <td> <ul>
      <li>使用C++编写了多纸带图灵机程序解析器，可以根据给定的.tm图灵机描述文件，生成一个与之对应的图灵机模拟器。并且可以读如输入文件input.txt的内容，将运行过程和运行结果输出至文件中。</li><li>实现了识别判定语言{0^k | k是斐波那契数}和{ww | w是01串}的多纸带图灵机，并编写了测试用例进行测试。</li> <li>项目使用Makefile构建，使用git进行管理。</li>
      </ul></td>
  </tr>
  <tr>
    <td>操作系统</td>
    <td>Ubuntu 18.04.1 LTS 64bit</td>
  </tr>
  <tr>
    <td>编译器</td>
    <td>g++ (Ubuntu 5.5.0-12ubuntu1) 5.5.0 20171010</td>
  </tr>
  <tr>
    <td>提交说明</td>
    <td>按照实验说明给定的方式设定提交文件的结构，my-project文件夹下是完整的代码。
    </td>
  </tr></table>

## 编译运行说明

### 编译运行

项目使用**Makefile**进行构建。编译过程比较简单。执行<code>make</code>后，会生成可执行文件<code>turing</code>,通过运行<code>./turing path/to/case</code>进行测试。程序将读入**case**目录下的**test.tm**和**input.txt**，并在同一目录下生成**console.txt**和**result.txt**。

例子:

``` shell
user: ~/my-project/$ make
g++ -c ./main.cpp ./Tape.cpp ./utils.cpp ./Transition.cpp ./TuringMachine.cpp 
g++ -std=c++11 ./main.o ./Tape.o ./utils.o ./Transition.o ./TuringMachine.o -o turing
user: ~/my-project/$ ./turing ../case1

```

### Make选项

Makefile也提供了其他的Makefile目标，可以通过执行<code>make case1</code>或<code>make case2</code>自动编译生成可执行文件，并进行测试。（要求：case1和case2应该位于Makefile的上一层目录）

##设计思路

### 模块设计



### 算法设计

#### 判定语言{0^k | k是一个斐波那契数}

#### {ww | w in {0,1}*}



## 运行展示

## 总结感想





