#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Swap(int* pa, int* pb)//ʹ��ָ��������ܵ�ַ
{
	int tem = *pa;
	*pa = *pb;
	*pb = tem;
}						//��������

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\t%d\n", a, b);
	Swap(&a, &b);//���ݵĲ���Ϊa,b�ĵ�ַ
	printf("%d\t%d\n", a, b);
	return 0;
}