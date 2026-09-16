// **********************************************************
//   제  목  :  대소문자 바꾸기
//   날  짜  :  2026년 9월 17일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	char a[100];
	char *b = a;

	printf("문자열을 입력하시오: ");
	scanf("%s", a);

	while (*b != '\0') {
		if (*b >= 'A' && *b <= 'Z')
			*b += ('a' - 'A');
		else if (*b >= 'a' && *b <= 'z')
			*b -= ('a' - 'A');

		b++;
	}

	printf("변환 결과: %s \n", a);

	return 0;
}
