// **********************************************************
//   제  목  :  구조체를 이용해 가장 급여가 많은 사람 구하기
//   날  짜  :  2026년 11월 5일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>

struct employee {
	char name[20];
	char pid[20];
	int salary;
};

int main(void) {
	struct employee arr[3];
	int i, max, n = 0;

	for (i = 0; i < 3; i++) {
		printf("이름 입력: ");
		scanf("%s", arr[i].name);

		printf("주민번호 입력: ");
		scanf("%s", arr[i].pid);

		printf("급여 입력: ");
		scanf("%d", &arr[i].salary);

		printf("\n");
	}

	max = arr[0].salary;

	for (i = 1; i < 3; i++) {
		if (arr[i].salary > max) {
			max = arr[i].salary;
			n++;
		}
	}

	printf("가장 많은 급여를 받는 사람은 \n");
	printf("이름: %s \n", arr[n].name);
	printf("주민번호: %s \n", arr[n].pid);
	printf("급여: %d \n", max);

	return 0;
}
