// **********************************************************
//   제  목  :  예제를 참고하여 사전에서 제일 뒤에 나오는 문자열 찾기
//   날  짜  :  2026년 10월 1일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	char str[4][10];
	int i, last = 0;

	for (i = 0; i < 4; i++) {
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}

	for (i = 1; i < 4; i++)
		if (str[i][0] > str[last][0])
			last = i;

	printf("사전에서 제일 뒤에 나오는 문자열: %s \n", &str[last][0]);

	return 0;
}
