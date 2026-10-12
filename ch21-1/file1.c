// **********************************************************
//   제  목  :  문자 입출력 프로그램 만들기
//   날  짜  :  2026년 10월 13일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	char ch;

	while (1) {
		printf("문자 입력: ");
		scanf(" %c", &ch);

		printf("입력된 문자는 %c \n", ch);
	
		if (ch == 'q' || ch == 'Q')
			break;
	}

	return 0;
}
