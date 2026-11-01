#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

int my_strlen(char str[]) {
	int x = 0;

	while (str[x] != '\0')
		x++;

	return x;
}

void RemoveBSN(char str[]) {
	int x = my_strlen(str);

	str[x - 1] = '\0';
}

int main(void) {
	char str[100];
	
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	printf("길이: %d, 내용: %s \n", my_strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);

	return 0;
}