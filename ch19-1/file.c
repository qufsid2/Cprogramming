#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	int arr[4][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
	int temp[4][4];
	int i, j;

	for (int k = 1; k <= 3; k++) {
		printf("%d도 회전 \n", 90 * k);

		for (i = 0; i < 4; i++)
			for (j = 0; j < 4; j++)
				temp[j][3 - i] = arr[i][j];

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 4; j++) {
				arr[i][j] = temp[i][j];
				printf("%2d ", arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}