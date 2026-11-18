# Chapter 23-2
## 실습과제 1

* 관련 있는 데이터를 하나로 묶으면 관리가 쉬워지기 때문
* 여러 변수가 메모리 공간을 공유해 메모리를 절약할 수 있기 때문
* 가독성을 높이고 실수를 방지하기 좋기 때문

----------
## 실습과제 2

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
#include <string.h>
```
- strlen, strcpy, strcmp 등의 함수가 들어있는 string.h를 포함해라.
```
typedef struct {
	char name[20];
	int num;
	int k;
	int e;
	int m;
	float avg;
} STUDENT;
```
- 구조체 STUDENT 정의
```
int main(void)
```
- 메인함수 시작
```
STUDENT s[3];
```
- 구조체 배열 s[3] 선언
```
int i, j = 0;
```
- 정수형 변수 i, j 선언 후 j에 0 저장
```
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
```
- 이름, 학번, 국어, 영어, 수학 입력 후 평균 구하기
```
for (i = 1; i < 3; i++)
	if (s[i].avg > s[j].avg)
		j = i;
```
- 최우수 학생 정보 구하기
```
printf("< 최우수 학생 정보 > \n");
printf("%s %d %d %d %d %.2f \n", s[j].name, s[j].num, s[j].k, s[j].e, s[j].m, s[j].avg);
```
- 최우수 학생 정보 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/4c024562-ae8e-45f7-a5d9-93c1fc09680e" />

----------
## 실습과제 3

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
#include <string.h>
```
- strlen, strcpy, strcmp 등의 함수가 들어있는 string.h를 포함해라.
```
typedef union {
  int num;
  char c[4];
} UNION;
```
- 공용체 UNION 정의
```
int main(void)
```
- 메인함수 시작
```
UNION n;
```
- 공용체 UNION 선언
```
printf("정수를 입력하시오(16진수): ");
scanf("%x", &n.num);
```
- 16진수 정수 입력
```
for (int i = 4; i > 0; i--)
  printf("최상위(%d번째) 바이트(16진수): %x \n", i, n.c[i - 1]);
```
- 엔디안 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/d22e11d4-44a3-4613-8a6b-b860698afad9" />

----------
## 실습과제 4

```
typedef enum {
	UP, DOWN, LEFT, RIGHT
} Direction;

int main(void) {
	Direction d;

	switch (d) {
	case UP: puts("현재방향 위"); break;
	case DOWN: puts("현재방향 아래"); break;
	case LEFT: puts("현재방향 왼쪽"); break;
	case RIGHT: puts("현재방향 오른쪽"); break;
	}

	return 0;
}
```
