#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float f,c;
	//float是一种数据类型，是单精度浮点型或单精度实型或小数
	f=64.0;            
	c=(5.0/9)*(f-32);
	printf("f=%f\nc=%f\n",f,c);
	//c语言语法规定可以一句多行也可以多句一行，判断是否为一句看分号
	 
	return 0;
}
/*
1.定义变量    申请内存 
2.输入数据    放入内存 
3.处理数据    处理 
4.输出数据    输出 
*/
