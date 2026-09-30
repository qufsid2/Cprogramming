#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	int x1[2][2] = { { 2, 4 }, { 5, -5 } };
	int x2[2][2] = { { -2, 3 }, { 0, -5 } };
	int x3[2][2];

	printf("연산 결과: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			*(*(x3 + i) + j) = *(*(x1 + i) + j) + *(*(x2 + i) + j);
			printf("%d\t", *(*(x3 + i) + j));
		}
		printf("\n");
	}

	return 0;
}