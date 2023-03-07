#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
int a,b,sum;
a=123;                 //等于号为赋值运算符， a=b+c 即为 先算出b+c 然后赋给（放入到）到a的内存当中，只能为变量而不能是常量或者表达式 
b=456;
sum=a+b;
printf("sun is %d\n",sum);    //%d 为格式字符  ,为变量列表 一个，即为2个变量 
	return 0;
}
