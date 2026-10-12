// **********************************************************
//   제  목  :  주사위 결과 출력
//   날  짜  :  2026년 10월 8일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i;
	
	srand((int)time(NULL));

	int x1 = (rand() % 6) + 1;
	int x2 = (rand() % 6) + 1;

	printf("주사위 1의 결과: %d \n", x1);
	printf("주사위 2의 결과: %d \n", x2);

	return 0;
}
