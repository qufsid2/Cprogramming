#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031);

#include <stdio.h>
#include <string.h>

/*
typedef struct {
	char name[20];
	int num;
	int k;
	int e;
	int m;
	float avg;
} STUDENT;

int main(void) {
	STUDENT s[3];
	int i, j = 0;

	for (i = 0; i < 3; i++) {
		printf("이름: ");
		scanf("%s", s[i].name);

		printf("학번: ");
		scanf("%d", &s[i].num);

		printf("국어: ");
		scanf("%d", &s[i].k);

		printf("영어: ");
		scanf("%d", &s[i].e);

		printf("수학: ");
		scanf("%d", &s[i].m);

		printf("\n");

		s[i].avg = (s[i].k + s[i].e + s[i].m) / 3;
	}

	for (i = 1; i < 3; i++)
		if (s[i].avg > s[j].avg)
			j = i;

	printf("< 최우수 학생 정보 > \n");
	printf("%s %d %d %d %d %.2f \n", s[j].name, s[j].num, s[j].k, s[j].e, s[j].m, s[j].avg);

	return 0;
}
*/

/*
typedef union {
	int num;
	char c[4];
} UNION;

int main(void) {
	UNION n;

	printf("정수를 입력하시오(16진수): ");
	scanf("%x", &n.num);

	for (int i = 4; i > 0; i--)
		printf("최상위(%d번째) 바이트(16진수): %x \n", i, n.c[i - 1]);

	return 0;
}
*/