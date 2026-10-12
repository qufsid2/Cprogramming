// **********************************************************
//   제  목  :  난수 출력
//   날  짜  :  2026년 10월 8일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;

	printf("난수의 범위: 0부터 99까지 \n");
	for (i = 0; i < 5; i++)
		printf("난수 출력: %d \n", rand() % 100);

	return 0;
}
