// **********************************************************
//   제  목  :  문자 입출력 스트림
//   날  짜  :  2026년 10월 15일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>

int main(void) {
	char name[20];
	char address[20];
	char num[20];

	printf("이름: ");
	fgets(name, sizeof(name), stdin);

	printf("주소: ");
	fgets(address, sizeof(address), stdin);

	printf("자동차 번호: ");
	fgets(num, sizeof(num), stdin);

	printf("<결과 출력> \n");
	printf("이름: ");
	fputs(num, stdout);

	printf("주소: ");
	fputs(address, stdout);

	printf("자동차 번호: ");
	fputs(num, stdout);

	return 0;
}
