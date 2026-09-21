// **********************************************************
//   제  목  :  swap 함수를 이용해 정수 교환하기
//   날  짜  :  2026년 9월 22일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

void swap(int* px, int* py, int* pz);

int main(void) {
	int x, y, z;

	printf("정수 x를 입력하시오: ");
	scanf("%d", &x);

	printf("정수 y를 입력하시오: ");
	scanf("%d", &y);

	printf("정수 z를 입력하시오: ");
	scanf("%d", &z);

	printf("swap함수 호출 전 x=%d y=%d z=%d \n", x, y, z);
	swap(&x, &y, &z);
	printf("swap함수 호출 후 x=%d y=%d z=%d \n", x, y, z);

	return 0;
}

void swap(int* px, int* py, int* pz) {
	int tmp;

	tmp = *px;
	*px = *py;
	*py = *pz;
	*pz = tmp;
}
