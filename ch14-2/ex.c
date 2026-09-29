#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h>

int get_data(int* array, int n);

int main(void) {
	int i, data[5];

	get_data(data, 5);

	for (i = 0; i < 5; i++)
		printf("%d번째 data: %d \n", i + 1, data[i]);
}

int get_data(int* array, int n) {
	int i, data[5];

	for (i = 0; i < n; i++) {
		printf("%d번째 data를 입력하시오: ", i + 1);
		scanf("%d", &data[i]);

		*(array + i) = data[i];
	}
}