#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

int main(void) {
	char str[5][20];
	char max[20], min[20];

	for (int i = 0; i < 5; i++) {
		printf("문자열 입력: ");
		scanf("%s", str[i]);
	}

	strcpy(min, str[0]);
	strcpy(max, str[0]);

	for (int i = 1; i < 5; i++) {
		if (strcmp(str[i], min) < 0)
			strcpy(min, str[i]);
		if (strcmp(str[i], max) > 0)
			strcpy(max, str[i]);
	}

	printf("제일 앞: %s \n", min);
	printf("제일 뒤: %s \n", max);

	return 0;
}