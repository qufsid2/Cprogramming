#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr);

int main(void) {
	int* maxPtr;
	int* minPtr;
	int arr[5];

	for (int i = 0; i < 5; i++) {
		printf("%d번째 정수 입력: ", i + 1);
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);

	printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);
	return 0;
}

void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr) {
	int* max;
	int* min;

	max = min = &arr[0];

	for (int i = 0; i < size; i++) {
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}

	*mxPtr = max;
	*mnPtr = min;
}