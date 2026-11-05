#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031);

#include <stdio.h>
#include <string.h>

/*
struct student {
	char name[10];
	int score;
};

int main(void) {
	struct student s[3];
	int ms;
	char mn[10];

	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", s[i].name);

		printf("성적을 입력하시오: ");
		scanf("%d", &s[i].score);
	}

	ms = s[0].score;

	for (int i = 1; i < 3; i++) {
		if (s[i].score > ms) {
			ms = s[i].score;
			strcpy(mn, s[i].name);
		}
	}

	printf("\n최우수 학생의 이름은 %s, 점수는 %d점 \n", mn, ms);
	return 0;
}
*/

/*
struct student {
	char name[10];
	int score;
};

int main(void) {
	struct student s[3];
	int ms;
	char mn[10];

	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", s[i].name);

		printf("성적을 입력하시오: ");
		scanf("%d", &s[i].score);
	}

	strcpy(mn, s[0].name);
	ms = s[0].score;

	for (int i = 1; i < 3; i++) {
		if (strcmp(mn, s[i].name) > 0) {
			strcpy(mn, s[i].name);
			ms = s[i].score;
		}
	}

	printf("\n이름은 %s, 점수는 %d점 \n", mn, ms);
	return 0;
}
*/

/*
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
*/

/*
struct point {
	int x;
	int y;
};

struct triangle {
	struct point p1;
	struct point p2;
	struct point p3;
};

int main(void) {
	struct triangle t;

	for (int i = 0; i < 3; i++){
		printf("%d번째 점(x, y) 입력: ");
		scanf("%d %d", &t.p1.x, &t.p1.y);
}
*/

struct student {
	int score;
	char name[10];
};

int main(void) {
	struct student s[3];
	struct student* p = &s;

	printf("%p %p \n", (void*)&p, (void*)(&p + 1));
	printf("%p %p \n", (void*)&p->score, (void*)(&p->score + 1));

	return 0;
}