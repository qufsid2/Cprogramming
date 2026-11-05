// **********************************************************
//   제  목  :  구조체 배열을 이용해 최우수 학생 구하기
//   날  짜  :  2026년 11월 5일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031);

#include <stdio.h>
#include <string.h>

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
