## 第2章 C语言概述
主要讲了C程序的主要结构，函数是C程序的基本模块。函数（function）由函数头，和函数体构成。
```c
#include<stdio.h>
int main(void)        //函数头
{                     //函数体
	int num;          //声明
	num = 1;          //语句
	printf("my favorite number is %d because it is first number.\n",num);
	return 0;
}
```
其他一些关键词：
- 函数 fuction
- 变量 variable
- 声明 declaration
- 语句 statement
- 预处理 prepocessing
- 头文件 header
- 关键字 keyword 关键字是C语言的词汇
- 标识符 identifier
---
### 2.11复习题
1. **C语言的基本模块是什么？**
- 函数是C语言的基本模块。
2. **什么是语法错误？写出一个英语例子和C语言例子。**
- 语法错误是违反了C语言的编写规则。常见的语法错误：未添加头文件、使用变量未提前声明、语句后面的缺少分号或使用全角字符。
3. **什么是语义错误？写出一个英语例子和C语言例子。**
- 语义错误是难以发现的错误，一般符合C语言的语法，能够编译运行，但是会给出错误的结果或者程序崩溃。
4. **重新修改示例程序。**
```c
#include<stdio.h>
int main(void){
    int s;
    s =56;
    printf("a year has %d weeks.\n", s);
    return 0;
}
```
5. **假设下面的4个例子都是完整程序中的一部分，它们都输出什么结果？**
- a:`Baa Baa Black Sheep.Have you any wool?`
- b:`Begone!`

    `0 creature of lard!`
- c:`What?`

    `No/nfish`
- d:`2 + 2 = 4`
6. **在main 、int 、function 、char 、= 中，哪些是C语言的关键字？**
- 关键字有`int`、`char`.
7. **如何以下面的格式输出变量words和lines的值（这里，3020 和350 代表两个变量的值）？**
```c
#include<stdio.h>
int main(void){
    int words,lines;
    words = 3020;
    lines = 350;
    printf("There were %d words in %d lines.\n", words, lines);
    return 0;
}
```
8. **考虑以下程序....，程序的状态是什么？**
- 第7行：`a=5,b=2`。第8行：`a=5,b=5`。第9行：`a=5,b=5`。
9. **考虑以下程序....，程序的状态是什么？**
- 第7行：`x=10,y=5`。第8行：`x=10,y=15`。第9行：`x=150,y=15`。


