#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	char* fruits[] = { "apple", "blueberry", "orange", "melon" };
	int i, min = 0;

	for (i = 1; i < 4; i++)
		if (fruits[i][0] < fruits[min][0])
			min = i;

	printf("사전에서 제일 앞에 나오는 문자열: %s \n", fruits[min]);

	return 0;
}