#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i;
	
	srand((int)time(NULL));

	int x1 = (rand() % 6) + 1;
	int x2 = (rand() % 6) + 1;

	printf("주사위 1의 결과: %d \n", x1);
	printf("주사위 2의 결과: %d \n", x2);

	return 0;
}