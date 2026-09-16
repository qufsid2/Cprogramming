#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	int i = 0;
	char a[100];

	printf("문자열을 입력하시오: ");
	scanf("%s", a);

	while (a[i] != '\0') {
		printf("%d번째 문자 %c \n", i + 1, a[i]);
		i++;
	}

	return 0;
}