// **********************************************************
//   제  목  :  typedef 구조체
//   날  짜  :  2026년 11월 10일
//   작성자  :  2600060 김혁중
// **********************************************************

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
