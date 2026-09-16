// **********************************************************
//   제  목  :  사전에서 앞에 나오는 문자열 구하기
//   날  짜  :  2026년 9월 17일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	int i = 0;
	char a[100], b[100];

	printf("문자열을 입력하시오: ");
	scanf("%s", a);

	printf("문자열을 입력하시오: ");
	scanf("%s", b);

	if (a[0] < b[0])
		printf("사전에서 앞에 나오는 문자열: %s \n", a);
	else if (a[0] > b[0])
		printf("사전에서 앞에 나오는 문자열: %s \n", b);

	return 0;
}
