#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

void my_strcpy(char str2[], char str1[]) {
	int x = 0;

	while (str1[x] != '\0') {
		str2[x] = str1[x];
		x++;
	}

	str2[x] = '\0';
}

int main(void) {
	char str1[20] = "1234567890";
	char str2[20];
	
	my_strcpy(str2, str1);
	puts(str2);

	return 0;
}