// **********************************************************
//   제  목  :  포인터를 사용하여 같은 결과가 나오게 만들기
//   날  짜  :  2026년 9월 8일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main(void)
{
	int a = -100;
	char b = 'A';
	double c = 3.14;

	int* d = &a;
	char* e = &b;
	double* f = &c;

	printf("int형 변수 a의 값은: %d\n", *d);
	printf("char형 변수 b의 값은: %c\n", *e);
	printf("double형 변수 c의 값은: %.2f\n", *f);

	return 0;
}
