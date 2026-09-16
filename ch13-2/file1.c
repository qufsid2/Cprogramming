// **********************************************************
//   제  목  :  널문자를 이용해 문자열의 각 문자 출력하기
//   날  짜  :  2026년 9월 17일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	int i = 0;
	char a[100];
	char *b = a;

	printf("문자열을 입력하시오: ");
	scanf("%s", a);

	while (*b != '\0') {
		printf("%d번째 문자 %c \n", i + 1, *b);
		b++;
		i++;
	}

	return 0;
}
