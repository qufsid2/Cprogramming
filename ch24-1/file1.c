// **********************************************************
//   제  목  :  파일 입출
//   날  짜  :  2026년 11월 17일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>

int main(void) {
	FILE* a = fopen("a.txt", "rt");
	FILE* b = fopen("b.txt", "wt");

	char ch;

	while (1) {
		ch = fgetc(a);
		if (ch == EOF)
			break;

		fputc(ch, b);
	}

	fclose(a);
	fclose(b);

	return 0;
}
