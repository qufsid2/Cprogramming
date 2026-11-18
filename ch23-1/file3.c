// **********************************************************
//   제  목  :  typedef 구조체
//   날  짜  :  2026년 11월 10일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

typedef struct {
	char name[10];
	int score;
} STUDENT;

void get_data(STUDENT* x, int n);
int get_first(STUDENT* x, int n);

int main(void) {
	STUDENT s[3];
	int first;

	get_data(s, sizeof(s) / sizeof(s[0]));
	first = get_first(s, sizeof(s) / sizeof(s[0]));

	printf("제일 앞에 나오는 이름은 %s, 점수는 %d점 \n", (s + first)->name, (s + first)->score);

	return 0;
}

void get_data(STUDENT* x, int n) {
	for (int i = 0; i < n; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", (x + i)->name);

		printf("점수를 입력하시오: ");
		scanf("%d", &(x + i)->score);
	}
}

int get_first(STUDENT* x, int n) {
	int j = 0;

	for (int i = 1; i < n; i++)
		if (strcmp((x + i)->name, (x + j)->name) < 0)
			j = i;

	return j;
}
