# Chapter 22-2
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
struct student {
  char name[10];
  int score;
};
```
- 구조체 student 정의
```
int main(void)
```
- 메인함수 시작
```
struct student s[3];
```
- 구조체 배열 s[3] 선언
```
int ms;
```
- 정수형 변수 ms 선언
```
char mn[10];
```
- 10개의 방을 가진 문자형 변수 mn 선언
```
for (int i = 0; i < 3; i++) {
  printf("이름을 입력하시오: ");
  scanf("%s", s[i].name);

  printf("성적을 입력하시오: ");
  scanf("%d", &s[i].score);
}
```
- 이름, 성적 입력 3번 반복
```
ms = s[0].score;
```
- ms에 s[0].score 저장
```
for (int i = 1; i < 3; i++) {
  if (s[i].score > ms) {
    ms = s[i].score);
    strcpy(mn, s[i].name);
  }
}
```
- 최우수 학생 정보 구하기
```
printf("\n최우수 학생의 이름은 %s, 점수는 %d점 \n", mn, ms);
```
- 최우수 학생 정보 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/ba99ac9c-51f0-4fc5-bcaa-56344811b335" />

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
struct student {
  char name[10];
  int score;
};
```
- 구조체 student 정의
```
int main(void)
```
- 메인함수 시작
```
struct student s[3];
```
- 구조체 배열 s[3] 선언
```
int ms;
```
- 정수형 변수 ms 선언
```
char mn[10];
```
- 10개의 방을 가진 문자형 변수 mn 선언
```
for (int i = 0; i < 3; i++) {
  printf("이름을 입력하시오: ");
  scanf("%s", s[i].name);

  printf("성적을 입력하시오: ");
  scanf("%d", &s[i].score);
}
```
- 이름, 성적 입력 3번 반복
```
strcpy(mn, s[0].name);
```
- mn에 s[0].name 복사
```
ms = s[0].score;
```
- ms에 s[0].score 저장
```
for (int i = 1; i < 3; i++) {
  if (strcmp(mn, s[i].name) > 0) {
    ms = s[i].score);
    strcpy(mn, s[i].name);
  }
}
```
- 사전 맨앞에 오는 학생 정보 구하기
```
printf("\n이름은 %s, 점수는 %d점 \n", mn, ms);
```
- 사전 맨앞에 오는 학생 정보 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2268" height="1226" alt="image" src="https://github.com/user-attachments/assets/f5746f64-b800-4071-a32c-6492068d7c4d" />

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
struct student {
  char name[10];
  int score;
};
```
- 구조체 student 정의
```
int main(void)
```
- 메인함수 시작
```
struct student s[3];
```
- 구조체 배열 s[3] 선언
```
struct student* p = &s;
```
- 구조체 포인터 p 선언 및 s 주소 저장
```
int ms;
```
- 정수형 변수 ms 선언
```
char mn[10];
```
- 10개의 방을 가진 문자형 변수 mn 선언
```
for (int i = 0; i < 3; i++) {
  printf("이름을 입력하시오: ");
  scanf("%s", (p + i)->name);

  printf("성적을 입력하시오: ");
  scanf("%d", &(p + i)->score);
}
```
- 이름, 성적 입력 3번 반복
```
strcpy(mn, p->name);
```
- mn에 p->name 복사
```
ms = p->score;
```
- ms에 p->score 저장
```
for (int i = 1; i < 3; i++) {
  if (strcmp(mn, (p + i)->name) > 0) {
    ms = (p + i)->score;
    strcpy(mn, (p + i)->name);
  }
}
```
- 사전 맨앞에 오는 학생 정보 구하기
```
printf("\n이름은 %s, 점수는 %d점 \n", mn, ms);
```
- 사전 맨앞에 오는 학생 정보 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2268" height="1226" alt="image" src="https://github.com/user-attachments/assets/2ee004da-190b-42b2-ae84-5d16839bf5b3" />

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
#include <math.h>
```
- sqrt, pow 등의 함수가 들어있는 math.h를 포함해라.
```
struct point {
  int x;
  int y;
};
```
- 구조체 point 정의
```
struct triangle {
  struct point p1;
  struct point p2;
  struct point p3;
};
```
- 구조체 point를 멤버변수로 갖는 triangle 정의
```
int main(void)
```
- 메인함수 시작
```
struct triangle t;
```
- 구조체 triangle 선언
```
int a, b, c;
```
- 정수형 변수 a, b, c 선언
```
printf("1번째 점(x, y) 입력: ");
scanf("%d %d", &t.p1.x, &t.p1.y);
```
- 1번 점 좌표 입력
```
printf("2번째 점(x, y) 입력: ");
scanf("%d %d", &t.p2.x, &t.p2.y);
```
- 2번 점 좌표 입력
```
printf("3번째 점(x, y) 입력: ");
scanf("%d %d", &t.p3.x, &t.p3.y);
```
- 3번 점 좌표 입력
```
a = pow(t.p1.x - t.p2.x, 2) + pow(t.p1.y - t.p2.y, 2);
```
- 선분 ab 길이 구하기
```
b = pow(t.p2.x - t.p3.x, 2) + pow(t.p2.y - t.p3.y, 2);
```
- 선분 bc 길이 구하기
```
c = pow(t.p3.x - t.p1.x, 2) + pow(t.p3.y - t.p1.y, 2);
```
- 선분 ac 길이 구하기
```
if (a + b == c || a + c == b || b + c == a)
  printf("삼각형은 직각삼각형임 \n");
else
  printf("삼각형은 직각삼각형이 아님 \n");
```
- 직각삼각형 판별
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/f56a2d6f-9e2a-49a7-8cc1-346ee210fa6e" />

----------
## 실습과제 5

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
struct employee {
  char name[20];
  char pid[20];
  int salary;
};
```
- 구조체 employee 정의
```
int main(void)
```
- 메인함수 시작
```
struct employee arr[3];
```
- 구조체 배열 arr[3] 선언
```
int i, max, n = 0;
```
- 정수형 변수 i, max, n 선언 후 n에 0 저장
```
for (i = 0; i < 3; i++) {
	printf("이름 입력: ");
	scanf("%s", arr[i].name);

	printf("주민번호 입력: ");
	scanf("%s", arr[i].pid);

  printf("급여 입력: ");
  scanf("%d", &arr[i].salary);

  printf("\n");
}
```
- 이름, 주민번호, 급여 입력 3번 반복
```
max = arr[0].salary;
```
- max에 arr[0].salary 저장
```
for (i = 1; i < 3; i++) {
  if (arr[i].salary > max) {
    max = arr[i].salary;
    n++;
  }
}
```
- 가장 많은 급여 받는 사람 정보 구하기
```
printf("가장 많은 급여를 받는 사람은 \n");
printf("이름: %s \n", arr[n].name);
printf("주민번호: %s \n", arr[n].pid);
printf("급여: %d \n", max);
```
- 가장 많은 급여 받는 사람 정보 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/36163bf9-56f4-44df-844a-a4d759a3419c" />
