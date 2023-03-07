#include <stdio.h>                               //主函数
int main()                                         //定义主函数 
{
	int max(int x,int y);                            //函数的定义                         
	                                               //int 表示整数 ， 即 max 返回一个整数 
	
	int a,b,c; 
	scanf("%d,%d",&a,&b);                        //在键盘输入两个数字，放在a 和 b 上                      
                                                   //scanf 标准输入函数 %和%之前的输入必须是原样输入    如果没有分割符的话用空格或者tap或者回车    &为求地址运算符，&符号不可省略
	
	c=max(a,b);                                      //形式参数和实际参数
	
	
	printf("max=%d\n",c);
	return 0; 
}

int max(int x,int y)
{
	int z;                                           //定义一个中间变量，临时的函数 
    if(x>y) z=x;
	else  z=y;
	return(z);
}



//源代码 f.c
 // 目标代码f.obj
  //可执行代码f.exe
   //主函数可以调用其他函数，其他函数不能调用主函数，其他函数直接可以互相调用*/
    
    
