# Chapter 22-1
## 실습과제 1

* 관련된 데이터를 하나로 묶으면 관리하기 더 편리하기 때문
* 둘 다 여러 데이터를 하나로 묶어 관리하기 편리하다는 공통점이 있지만, 배열은 같은 자료형만 묶을 수 있는 반면, 구조체는 자료형이 달라도 묶을 수 있다는 차이점이 있다
* 기본자료형은 이미 C언어에서 지정되어 있어 자료명을 바꿀 수 없지만, 구조체는 사용자가 직접 만드는 자료형이기 때문에 자료명을 바꿀 수 있다.
* 구조체 정의의 의미는 struct를 이용해 새로운 사용자 정의 자료형을 만드는 것이, 구조체 변수 선언의 의미는 구조체 안에 있던 멤버변수의 메모리 공간을 할당한다는 것이다.

----------
## 실습과제 2

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
struct student {
  int num;
  char name[10];
  char address[100];
};
```
- 구조체 student 정의
```
int main(void)
```
- 메인함수 시작
```
struct student s;
```
- 구조체 student 선언
```
printf("학번을 입력하시오: ");
scanf("%d", &s.num);
```
- 학번 입력
```
printf("이름을 입력하시오: ");
scanf("%s", s.name);
```
- 이름 입력
```
getchar();
```
- 버퍼 안 '\n' 제거
```
printf("주소를 입력하시오: ");
fgets(s.address, strlen(s.address), stdin);
```
- 주소 입력(fgets: 문자만 입력받는 함수)
```
printf("\n1.학번: %d \n", s.num);
printf("2.이름: %s \n", s.name);
printf("3.주소: %s \n", s.address);
```
- 학번, 이름, 주소 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/b7e16fd1-27d6-4265-a9b4-839bb2555446" />

----------
## 실습과제 3

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
struct model {
  char name[10];
  char number[100];
  int meter;
};
```
- 구조체 model 정의
```
int main(void)
```
- 메인함수 시작
```
struct model m;
```
- 구조체 model 선언
```
printf("모델을 입력하시오: ");
scanf("%s", m.name);
```
- 모델 입력
```
printf("번호판을 입력하시오: ");
scanf("%s", m.number);
```
- 번호판 입력
```
printf("주행거리를 입력하시오: ");
scanf("%d", &m.meter);
```
- 주행거리 입력
```
printf("\n1.모델: %s \n", m.name);
printf("2.번호판: %s \n", m.number);
printf("3.주행거리: %d km \n", m.meter);
```
- 모델, 번호판, 주행거리 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2268" height="1226" alt="image" src="https://github.com/user-attachments/assets/cf82b8ed-5b80-42a7-aec2-fd14a61fe3f0" />

----------
## 실습과제 4

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
struct quadrangle {
  int x1, x2;
  int y1, y2;
  int w, h;
};
```
- 구조체 quadrangle 정의
```
int main(void)
```
- 메인함수 시작
```
struct quadrangle q;
```
- 구조체 quadrangle 선언
```
int xtp, ytp;
```
- 정수형 변수 xtp, ytp 선언
```
printf("좌측상단의 좌표 입력: ");
scanf("%d %d", &q.x1, &q.y1);
```
- 좌측상단 좌표 입력
```
printf("우측하단의 좌표 입력: ");
scanf("%d %d", &q.x2, &q.y2);
```
- 우측하단 좌표 입력
```
if (q.x1 < q.x2) {
  xtp = q.x1;
  q.x1 = q.x2;
  q.x2 = xtp;
}
```
- x좌표 큰 값, 작은 값 교환
```
if (q.y1 < q.y2) {
  ytp = q.y1;
  q.y1 = q.y2;
  q.y2 = ytp;
}
```
- y좌표 큰 값, 작은 값 교환
```
q.w = q.x1 - q.x2;
q.h = q.y1 - q.y2;
```
- 사각형 폭, 높이 계산
```
printf("사각형의 폭: %d \n", q.w);
printf("사각형의 높이: %d \n", q.h);
```
- 사각형 폭, 높이 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/a406c775-2ca4-4fad-bad2-76c753cf4907" />

----------
## 실습과제 5

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
struct point {
  int x;
  int y;
};
```
- 구조체 point 정의
```
int main(void)
```
- 메인함수 시작
```
struct point p1 = { 10, 10 }, p2 = { 20, 20 };
```
- 구조체 point 선언
```
int xtp, ytp;
```
- 정수형 변수 xtp, ytp 선언
```
printf("교환 전 P1의 좌표: (%d, %d) \n", p1.x, p1.y);
printf("교환 전 P2의 좌표: (%d, %d) \n", p2.x, p2.y);
```
- 교환 전 좌표 출력
```
xtp = p1.x;
p1.x = p2.x;
p2.x = xtp;
```
- x좌표 교환
```
ytp = p1.y;
p1.y = p2.y;
p2.y = p1.y;
```
- y좌표 교환
```
printf("교환 후 P1의 좌표: (%d, %d) \n", p1.x, p1.y);
printf("교환 후 P2의 좌표: (%d, %d) \n", p2.x, p2.y);
```
- 교환 후 좌표 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/73a05848-dff6-4eb0-afba-7099a64cde40" />
