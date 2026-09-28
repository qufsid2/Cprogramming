#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int get_max(int* array, int n);

int main(void) {
	int grade[5];
	int i, max;
	
	printf("정수 5개를 입력하시오. \n");
	for (i = 0; i < 5; i++)
		scanf("%d", &grade[i]);

	max = get_max(grade, 5);

	printf("최댓값은 %d입니다. \n", max);
	return 0;
}

int get_max(int* array, int n) {
	int i, max;
	max = *array;

	for (i = 1; i < n; i++)
		if (*array > max)
			max = *array;

	return max;
}