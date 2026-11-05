// **********************************************************
//   제  목  :  구조체 포인터를 이용해 사전 맨앞에 오는 학생 구하기
//   날  짜  :  2026년 11월 5일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031);

#include <stdio.h>
#include <string.h>

struct student {
	int score;
	char name[10];
};

int main(void) {
	struct student s[3];
	struct student* p = &s;

	printf("%p %p \n", (void*)&p, (void*)(&p + 1));
	printf("%p %p \n", (void*)&p->score, (void*)(&p->score + 1));

	int ms;
	char mn[10];

	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", (p + i)->name);

		printf("성적을 입력하시오: ");
		scanf("%d", &(p + i)->score);
	}

	strcpy(mn, p->name);
	ms = p->score;

	for (int i = 1; i < 3; i++) {
		if (strcmp(mn, (p + i)->name) > 0) {
			strcpy(mn, (p + i)->name);
			ms = (p + i)->score;
		}
	}

	printf("\n이름은 %s, 점수는 %d점 \n", mn, ms);
	return 0;
}
