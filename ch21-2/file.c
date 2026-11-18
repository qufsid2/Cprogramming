#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>

int main(void) {
	int c;

	while (1) {
		printf("문자 입력: ");
		c = getchar();
		getchar();

		if (c == 'q' || c == 'Q')
			break;

		printf("입력된 문자는 ");
		putchar(c);
		printf("\n");
	}

	return 0;
}