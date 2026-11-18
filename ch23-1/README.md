# Chapter 23-1
## 실습과제 1

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
  int num;
  char name[20];
  char address[100];
} STUDENT;
```
- 구조체 STUDENT 정의
```
void get_data(STUDENT* x) {
	printf("학번을 입력하시오: ");
	scanf("%d", &x->num);

	printf("이름을 입력하시오: ");
	scanf("%s", x->name);
	getchar();

	printf("주소를 입력하시오: ");
	fgets(x->address, strlen(x->address), stdin);
}
```
- 학번, 이름, 주소 입력
```
void put_data(STUDENT* x) {
	printf("\n1.학번: %d \n", x->num);
	printf("2.이름: %s \n", x->name);
	printf("3.주소: %s \n", x->address);
}
```
- 학번, 이름, 주소 출력
```
int main(void)
```
- 메인함수 시작
```
STUDENT s;
```
- 구조체 STUDENT 선언
```
get_data(&s);
```
- get_data 호출
```
put_data(&s);
```
- put_data 호출
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/805e8b37-b31c-405e-b211-1addbcbaf6fb" />

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
  char name[10];
  int score;
} STUDENT;
```
- 구조체 STUDENT 정의
```
void get_data(STUDENT* x, int n) {
	for (int i = 0; i < n; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", (x + i)->name);

		printf("점수를 입력하시오: ");
		scanf("%d", &(x + i)->score);
	}
}
```
- n명의 이름, 점수 입력
```
int get_best(STUDENT* x, int n) {
	int j = 0;

	for (int i = 1; i < n; i++)
		if ((x + i)->score > (x + j)->score)
			j = i;

	return j;
}
```
- 최우수 학생 구하기
```
int main(void)
```
- 메인함수 시작
```
STUDENT s[3];
```
- 구조체 배열 s[3] 선언
```
int mx;
```
- 정수형 변수 mx 선언
```
get_data(s, sizeof(s) / sizeof(s[0]));
```
- get_data 호출
```
mx = get_best(s, sizeof(s) / sizeof(s[0]);
```
- get_best 호출 후 mx에 값 반환
```
printf("최우수 학생의 이름은 %s, 점수는 %d점 \n", (s + mx)->name, (s + mx)->score);
```
- 최우수 학생 정보 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/c883dec9-652e-4b3f-ab5a-e4186337f0fc" />

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
typedef struct {
  char name[10];
  int score;
} STUDENT;
```
- 구조체 STUDENT 정의
```
void get_data(STUDENT* x, int n) {
	for (int i = 0; i < n; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", (x + i)->name);

		printf("점수를 입력하시오: ");
		scanf("%d", &(x + i)->score);
	}
}
```
- 이름, 점수 입력
```
int get_first(STUDENT* x, int n) {
	int j = 0;

	for (int i = 1; i < n; i++)
		if (strcmp((x + i)->name, (x + j)->name) < 0)
			j = i;

	return j;
}
```
- 제일 앞에 나오는 학생 정보 구하기
```
int main(void)
```
- 메인함수 시작
```
STUDENT s[3];
```
- 구조체 배열 s[3] 선언
```
int first;
```
- 정수형 변수 first 선언
```
get_data(s, sizeof(s) / sizeof(s[0]));
```
- get_data 호출
```
first = get_first(s, sizeof(s) / sizeof(s[0]));
```
- get_first 호출 후 first에 값 반환
```
printf("제일 앞에 나오는 이름은 %s, 점수는 %d점 \n", (s + first)->name, (s + first)->score);
```
- 제일 앞에 나오는 학생의 정보 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/d2fb0542-48b0-4fbc-9e73-1c543543bdb3" />

----------
## 실습과제 4

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
  int xpos;
  int ypos;
} Point;
```
- 구조체 Point 정의
```
void swap_struct(Point* a, Point* b) {
  Point temp = *a;
  *a = *b;
  *b = temp;
}
```
- 구조체 스왑
```
int main(void)
```
- 메인함수 시작
```
Point pos1 = { 1, 2 };
```
- 구조체 Point 선언 후 1, 2 저장
```
Point pos2 = { 3, 4 };
```
- 구조체 Point 선언 후 3, 4 저장
```
printf("pos1: [%d, %d], pos2: [%d, %d] \n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
```
- 스왑 전 값 출력
```
swap_struct(&pos1, &pos2);
```
- swap_struct 호출
```
printf("pos1: [%d, %d], pos2: [%d, %d] \n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
```
- 스왑 후 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/db959d3c-35c5-4f72-9c30-bcee1c3074c4" />

----------
## 실습과제 5

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
  int xpos;
  int ypos;
} Point;
```
- 구조체 Point 정의
```
void SwapPoint(Point* a, Point* b) {
  Point temp = *a;
  *a = *b;
  *b = temp;
}
```
- 구조체 스왑
```
int main(void)
```
- 메인함수 시작
```
Point pos1 = { 2, 4 };
```
- 구조체 Point 선언 후 2, 4 저장
```
Point pos2 = { 5, 7 };
```
- 구조체 Point 선언 후 5, 7 저장
```
SwapPoint(&pos1, &pos2);
```
- SwapPoint 호출
```
printf("pos1: [%d, %d] \n", pos1.xpos, pos1.ypos);
printf("pos2: [%d, %d] \n", pos2.xpos, pos2.ypos);
```
- 스왑 후 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/d324416c-daea-4ece-882f-c9b3ab6df38f" />
