// **********************************************************
//   제  목  :  이름과 혈액형 입출력
//   날  짜  :  2026년 10월 13일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	int x;
	char name[10];
	char blood_type;

	printf("이름을 입력하시오: ");
	scanf("%s", name);

	printf("혈액형을 입력하시오: ");
	scanf(" %c", &blood_type);

	printf("이름: %s \n", name);
	printf("혈액형: %c \n", blood_type);

	return 0;
}
