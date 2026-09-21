// **********************************************************
//   제  목  :  주소에 의한 호출방식을 이용해 값 출력하기
//   날  짜  :  2026년 9월 22일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

void add2(int* value);

int main(void) {
	int number;

	printf("정수를 입력하세요: ");
	scanf("%d", &number);

	add2(&number);

	printf("2만큼 증가한 값: %d \n", number);

	return 0;
}

void add2(int* value) {
	*value += 2;
}
