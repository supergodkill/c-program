#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	

	char c='?';
//定义c位字符型变量并使初始值为字符'？'  '？'的ASCII代码是63，系统吧整数63给变量c  
	printf("%c,%d",c,c);
//%c 输出原样  %d输出63  
	return 0;
}
/*
实数（实型）小数浮点型
有效数据    阶码 
0.31415     10e1
 由于用二进制形式表示一个实数以及存储单元的长度是有限的，因此不可能得到完全精确的值，只能存储成有限的精确度。
 小数部分占的位(bit)数愈多,数的有效数字愈多，精度也就愈高。
 指数部分占的位数愈多，则能表示的数值范围愈大。
\0 空字符 

 
*/
