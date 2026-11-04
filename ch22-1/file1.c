#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031);

#include <string.h>
#include <stdio.h>

struct student {
	int num;
	char name[10];
	char address[100];
};

int main(void) {
	struct student s;

	printf("학번을 입력하시오: ");
	scanf("%d", &s.num);

	printf("이름을 입력하시오: ");
	scanf("%s", s.name);
	getchar();

	printf("주소를 입력하시오: ");
	fgets(s.address, strlen(s.address), stdin);

	printf("\n1.학번: %d \n", s.num);
	printf("2.이름: %s \n", s.name);
	printf("3.주소: %s \n", s.address);

	return 0;
}
