#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int max(int x,int y);                            //�����Ķ���                         
	                                               //int ��ʾ���� �� �� max ����һ������ 
	
	int a,b,c; 
	scanf("%d,%d",&a,&b);                        //�ڼ��������������֣�����a �� b ��                      
                                                   //scanf ��׼���뺯�� %��%֮ǰ�����������ԭ������    ���û�зָ���Ļ��ÿո����tap���߻س�    &Ϊ���ַ�������&���Ų���ʡ��
	
	c=max(a,b);                                      //��ʽ������ʵ�ʲ���
	
	
	printf("max=%d\n",c);
	return 0;
}
int max(int x,int y)
{
	int z;                                           //����һ���м��������ʱ�ĺ��� 
    if(x>y) z=x;
	else  z=y;
	return(z);
}

