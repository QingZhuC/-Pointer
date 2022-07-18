#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Swap(int* pa, int* pb)//使用指针变量接受地址
{
	int tem = *pa;
	*pa = *pb;
	*pb = tem;
}						//交换过程

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\t%d\n", a, b);
	Swap(&a, &b);//传递的参数为a,b的地址
	printf("%d\t%d\n", a, b);
	return 0;
}