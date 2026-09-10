#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main() {
	int a[] = { 10, 20, 30 }, i, sum = 0;
	for (i = 0; i < 3; i++)
		sum += *(a + i);

	printf("sum:%d\n", sum);
	return 0;
}