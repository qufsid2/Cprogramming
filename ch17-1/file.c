#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

//int get_max(int** pt1, int n);
//
//int main(void) {
//	int num1 = 50, num2 = 20, num3 = 30;
//	int* ptrarr[3] = { &num1, &num2, &num3 };
//	int max;
//
//	max = get_max(ptrarr, 3);
//
//	printf("최댓값: %d \n", max);
//	return 0;
//}
//
//int get_max(int** pt1, int n) {
//	int* x1 = *pt1;
//	int i;
//
//	for (i = 1; i < n; i++)
//		if (*(pt1[i]) > x1)
//			x1 = *(pt1[i]);
//
//	return *x1;
//}

char prn_str(char** pt1, int n);

int main(void) {
	char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);

	return 0;
}

char prn_str(char** pt1, int n) {
	for (int i = 0; i < n; i++)
		printf("%s \n", *(pt1 + i));
}