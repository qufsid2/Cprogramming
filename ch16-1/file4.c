// **********************************************************
//   제  목  :  예제를 참고하여 문자열 길이 구하기
//   날  짜  :  2026년 10월 1일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	char str[4][10];
	int i, j;
	int x1[4];

	for (i = 0; i < 4; i++) {
		j = 0;

		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);

		while (str[i][j] != '\0')
			j += 1;

		x1[i] = j;
	}

	for (i = 0; i < 4; i++)
		printf("%d번째 문자열 길이: %d \n", i + 1, x1[i]);

	return 0;
}
