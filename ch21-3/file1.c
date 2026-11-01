// **********************************************************
//   제  목  :  문자열 덧붙이기
//   날  짜  :  2026년 10월 30일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1000] = "";
	char ch[100];
	
	while (1) {
		printf("문자열 입력: ");
		scanf("%s", ch);

		if (!strcmp(ch, "quit"))
			break;

		if (str[0] != '\0')
			strcat(str, " ");

		strcat(str, ch);

		printf("입력된 문자열: %s \n", str);
	}

	return 0;
}
