// **********************************************************
//   제  목  :  이중 포인터를 이용해 문자 출력하기
//   날  짜  :  2026년 10월 6일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

char prn_str(char** pt1, int n);

int main(void) {
	char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);

	return 0;
}

char prn_str(char** pt1, int n) {
	for (int i = 0; i < n; i++)
		printf("%s \n", *(pt1 + i));
}
