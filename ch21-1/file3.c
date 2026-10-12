// **********************************************************
//   제  목  :  문자열 입출력
//   날  짜  :  2026년 10월 13일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	char str[20];
	int i = 0;

	printf("문자열을 입력하시오: ");

	while (1) {
		scanf("%c", &str[i]);

		if (str[i] == '\n')
			break;

		i++;
	}

	str[i] = '\0';
	printf("문자열: %s \n", str);

	return 0;
}
