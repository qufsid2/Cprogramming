// **********************************************************
//   제  목  :  284페이지 2번 변형 문제
//   날  짜  :  2026년 9월 8일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* temp;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	*ptr1 += 10;
	*ptr2 -= 10;
	*ptr3 *= 2;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;
	ptr3 = temp;

	printf("ptr1이 가리키는 값: %d\n", *ptr1);
	printf("ptr2가 가리키는 값: %d\n", *ptr2);
	printf("ptr3이 가리키는 값: %d\n", *ptr3);

	return 0;
}
