// **********************************************************
//   제  목  :  문자 이어 붙이기
//   날  짜  :  2026년 10월 30일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

void my_strcat(char str1[], char str2[]) {
	while (*str1 != '\0')
		str1++;

	while (*str2 != '\0') {
		*str1 = *str2;
		str1++;
		str2++;
	}

	*str1 = '\0';
}

int main(void) {
	char str1[20] = "First~";
	char str2[20] = "Second";
	
	my_strcat(str1, str2);
	puts(str1);

	return 0;
}
