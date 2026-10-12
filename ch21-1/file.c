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