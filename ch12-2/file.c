// **********************************************************
//   제  목  :  
//   날  짜  :  2026년 9월 8일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main(void)
{
	int a = 100, b = 200;
	int sum;

	int* c = &a;
	int* d = &b;

	sum = *c + *d;

	printf("두 정수의 합: %d\n", sum);

	return 0;
}