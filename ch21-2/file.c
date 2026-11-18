#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>

int main(void) {
	char str[20];
	int i;

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	for (i = 0; str[i] != '\n'; i++);

	str[i] = '\0';

	printf("%s", str);

	return 0;
}