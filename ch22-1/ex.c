#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031);

#include <string.h>
#include <stdio.h>

/*
struct student {
	int num;
	char name[10];
	char address[100];
};

int main(void) {
	struct student s;

	printf("학번을 입력하시오: ");
	scanf("%d", &s.num);

	printf("이름을 입력하시오: ");
	scanf("%s", s.name);
	getchar();

	printf("주소를 입력하시오: ");
	fgets(s.address, strlen(s.address), stdin);

	printf("\n1.학번: %d \n", s.num);
	printf("2.이름: %s \n", s.name);
	printf("3.주소: %s \n", s.address);

	return 0;
}
*/

/*
struct model {
	char name[10];
	char number[100];
	int meter;
};

int main(void) {
	struct model m;

	printf("모델을 입력하시오: ");
	scanf("%s", m.name);

	printf("번호판을 입력하시오: ");
	scanf("%s", m.number);

	printf("주행거리를 입력하시오: ");
	scanf("%d", &m.meter);

	printf("\n1.모델: %s \n", m.name);
	printf("2.번호판: %s \n", m.number);
	printf("3.주행거리: %d km \n", m.meter);

	return 0;
}
*/

struct quadrangle {
	int x1, x2;
	int y1, y2;
};

int main(void) {
	struct quadrangle q;
	int xtp, ytp;

	printf("좌측상단의 좌표 입력: ");
	scanf("%d %d", &q.x1, &q.y1);

	printf("우측하단의 좌표 입력: ");
	scanf("%d %d", &q.x2, &q.y2);

	if (q.x1 < q.x2) {
		xtp = q.x1;
		q.x1 = q.x2;
		q.x2 = xtp;
	}
	
	if (q.y1 < q.y2) {
		ytp = q.y1;
		q.y1 = q.y2;
		q.y2 = ytp;
	}

	printf("사각형의 폭: %s")
}