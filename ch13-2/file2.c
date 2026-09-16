// **********************************************************
//   제  목  :  대소문자 바꾸기
//   날  짜  :  2026년 9월 17일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	int i = 0;
	char a[100];

	printf("문자열을 입력하시오: ");
	scanf("%s", a);

	while (a[i] != '\0') {
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += ('a' - 'A');
		else if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= ('a' - 'A');

		i++;
	}

	printf("변환 결과: %s \n", a);

	return 0;
}
