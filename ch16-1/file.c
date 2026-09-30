#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	char str[4][10];
	int i, j;

	for (i = 0; i < 4; i++) {
		j = 0;

		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);

		while (str[i][j] != '\0')
			j += 1;

		printf("%d번째 문자열 길이: %d \n", i + 1, j);
	}

	return 0;
}