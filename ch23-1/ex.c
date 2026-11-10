#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031);

#include <stdio.h>
#include <string.h>

/*
typedef struct {
	int num;
	char name[20];
	char address[100];
} STUDENT;

void get_data(STUDENT* x);
void put_data(STUDENT* x);

int main(void) {
	STUDENT s;

	get_data(&s);
	put_data(&s);

	return 0;
}

void get_data(STUDENT* x) {
	printf("학번을 입력하시오: ");
	scanf("%d", &x->num);

	printf("이름을 입력하시오: ");
	scanf("%s", x->name);
	getchar();

	printf("주소를 입력하시오: ");
	fgets(x->address, strlen(x->address), stdin);
}

void put_data(STUDENT* x) {
	printf("\n1.학번: %d \n", x->num);
	printf("2.이름: %s \n", x->name);
	printf("3.주소: %s \n", x->address);
}
*/

/*
typedef struct {
	char name[10];
	int score;
} STUDENT;

void get_data(STUDENT* x, int n);
int get_best(STUDENT* x, int n);

int main(void) {
	STUDENT s[3];
	int mx;

	get_data(s, sizeof(s) / sizeof(s[0]));
	mx = get_best(s, sizeof(s) / sizeof(s[0]));

	printf("최우수 학생의 이름은 %s, 점수는 %d점 \n", (s + mx)->name, (s + mx)->score);

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

int get_best(STUDENT* x, int n) {
	int j = 0;

	for (int i = 1; i < n; i++)
		if ((x + i)->score > (x + j)->score)
			j = i;

	return j;
}
*/

/**/
typedef struct {
	char name[10];
	int score;
} STUDENT;

void get_data(STUDENT* x, int n);
int get_best(STUDENT* x, int n);

int main(void) {
	STUDENT s[3];
	int mx;

	get_data(s, sizeof(s) / sizeof(s[0]));
	mx = get_best(s, sizeof(s) / sizeof(s[0]));

	printf("최우수 학생의 이름은 %s, 점수는 %d점 \n", (s + mx)->name, (s + mx)->score);

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

int get_best(STUDENT* x, int n) {
	int j = 0;

	for (int i = 1; i < n; i++)
		if ((x + i)->score > (x + j)->score)
			j = i;

	return j;
}


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