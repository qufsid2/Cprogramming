// **********************************************************
//   제  목  :  2차원 배열을 이용해 최우수 학생의 성적 출력하기
//   날  짜  :  2026년 10월 1일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	int score[3][3];
	int ave[3];
	int i, max, first;

	for (i = 0; i < 3; i++) {
		printf("%d번째 학생의 국어, 영어, 수학 성적을 입력: ", i + 1);
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);

		ave[i] = (score[i][0] + score[i][1] + score[i][2]) / 3;
	}

	max = ave[0];
	first = 0;

	for (i = 1; i < 3; i++)
		if (ave[i] > max) {
			max = ave[i];
			first = i;
		}

	printf("최우수 학생은 %d번째 학생이고 평균점수는 %d점이다. \n", first + 1, max);

	return 0;
}
