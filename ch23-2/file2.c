// **********************************************************
//   제  목  :  구조체, 공용체, 열거형
//   날  짜  :  2026년 11월 12일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

typedef union {
	int num;
	char c[4];
} UNION;

int main(void) {
	UNION n;

	printf("정수를 입력하시오(16진수): ");
	scanf("%x", &n.num);

	for (int i = 4; i > 0; i--)
		printf("최상위(%d번째) 바이트(16진수): %x \n", i, n.c[i - 1]);

	return 0;
}
