// **********************************************************
//   제  목  :  typedef 구조체
//   날  짜  :  2026년 11월 10일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

typedef struct {
	int num;
	char name[20];
	char address[100];
} STUDENT;

void get_data(STUDENT* x);
void put_data(STUDENT* x);

int main(void) {
	STUDENT s;

	get_data(&s);
	put_data(&s);

	return 0;
}

void get_data(STUDENT* x) {
	printf("학번을 입력하시오: ");
	scanf("%d", &x->num);

	printf("이름을 입력하시오: ");
	scanf("%s", x->name);
	getchar();

	printf("주소를 입력하시오: ");
	fgets(x->address, strlen(x->address), stdin);
}

void put_data(STUDENT* x) {
	printf("\n1.학번: %d \n", x->num);
	printf("2.이름: %s \n", x->name);
	printf("3.주소: %s \n", x->address);
}
