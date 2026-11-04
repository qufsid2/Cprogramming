// **********************************************************
//   제  목  :  구조체를 이용해 자동차 정보 입력받기
//   날  짜  :  2026년 11월 3일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

struct model {
	char name[10];
	char number[100];
	int meter;
};

int main(void) {
	struct model m;

	printf("모델을 입력하시오: ");
	scanf("%s", m.name);

	printf("번호판을 입력하시오: ");
	scanf("%s", m.number);

	printf("주행거리를 입력하시오: ");
	scanf("%d", &m.meter);

	printf("\n1.모델: %s \n", m.name);
	printf("2.번호판: %s \n", m.number);
	printf("3.주행거리: %d km \n", m.meter);

	return 0;
}
