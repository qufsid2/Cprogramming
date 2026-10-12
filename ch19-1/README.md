<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/06ca34fd-57e7-4271-b6c7-469b3df21ab0" /># Chapter 19-1
## 실습과제 1

* 선언은 함수가 사용할 매개변수와 반환 타입(자료형)을 명시, 정의는 함수가 실제로 수행할 작업을 명시, 호출은 매개변수를 전달하고 함수가 반환하는 결과값을 저장
* 반환형(매개변수 자료형 1, 매개변수 자료형 2, ...)
* 반환형 (*)(매개변수 자료형 1, 매개변수 자료형 2, ...)
* void 포인터는 모든 종류의 주소를 저장할 수 있기 때문에 포인터 변수를 많이 만들 필요가 없어짐
* void 포인터는 가리키는 자료형이 없어 간접참조연산을 할 때 강제 형변환을 해줘야
* 강제 형변환은 자동 형변환을 할 수 없는 경우 프로그래머가 직접 타입을 지정하는 형변환이고, 자동 형변환은 프로그램이 자동으로 값을 다른 타입으로 변환하는 것이다.

----------
## 실습과제 2

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
int add(int a, int b)
```
- 매개변수 a, b를 가지는 add 함수 선언
```
return a + b;
```
- a + b을 반환
```
void executer(int (*fp)(int, int))
```
- 함수 포인터 fp를 매개변수로 가지는 executer 함수 선언
```
printf("%d \n", fp(10, 20));
```
- 매개변수로 함수 호출
```
int main(void)
```
- 메인함수 시작
```
executer(add);
```
- executer를 호출할 때 add 함수의 메모리 주소를 전달
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/cfadff7e-371a-4246-8def-f84142e6b737" />

----------
## 실습과제 3

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
int add(int n1, int n2)
```
- 매개변수 n1, n2를 가지는 add 함수 선언
```
return n1 + n2;
```
- n1 + n2를 반환
```
int sub(int n1, int n2)
```
- 매개변수 n1, n2를 가지는 sub 함수 선언
```
return n1 - n2;
```
- n1 - n2를 반환
```
int mul(int n1, int n2)
```
- 매개변수 n1, n2를 가지는 mul 함수 선언
```
return n1 * n2;
```
- n1 * n2를 반환
```
int div(int n1, int n2)
```
- 매개변수 n1, n2를 가지는 div 함수 선언
```
return n1 / n2;
```
- n1 / n2를 반환
```
int main(void)
```
- 메인함수 시작
```
int ch, x1, x2;
```
- 정수형 변수 ch, x1, x2 선언
```
int (*fp)(int, int);
```
- 정수형 값 두 개를 전달받은 후 정수를 반환하는 함수의 주소를 저장하는 함수 포인터 fp 선언
```
printf("연산을 선택하시오(1:덧셈,2:뺄셈,3:곱셈,4:나눗셈) : ");
```
- 연산 선택 메시지 출력
```
scanf("%d", &ch);
```
- 연산 선택
```
printf("두 개의 정수를 입력하시오: ");
```
- 정수 입력 메시지 출력
```
scanf("%d %d", &x1, &x2);
```
- 정수 입력
```
switch (ch)
```
- ch 스위치
```
case 1:
```
- ch가 1이면
```
fp = add;
```
- fp에 add 저장
```
break;
```
- 탈출
```
case 2:
```
- ch가 2면
```
fp = add;
```
- fp에 sub 저장
```
break;
```
- 탈출
```
case 1:
```
- ch가 3이면
```
fp = add;
```
- fp에 mul 저장
```
break;
```
- 탈출
```
case 1:
```
- ch가 4면
```
fp = add;
```
- fp에 div 저장
```
break;
```
- 탈출
```
default:
```
- 그 외라면
```
printf("잘못된 연산 선택입니다. \n");
```
- 잘못된 연산 선택 메시지 출력
```
return 1;
```
- 1을 반환하고 메인함수 정상 종료
```
printf("결과값: %d \n", fp(x1, x2));
```
- 결과값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/b4de7a47-5eaf-4581-887d-dedde5981b1d" />

----------
## 도전문제 1

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
int arr[4][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
```
- 4x4 사이즈의 2차원 배열 arr 선언 및 1부터 16 저장
```
int temp[4][4];
```
- 4x4 사이즈의 2차원 배열 temp 선언
```
int i, j;
```
- 정수형 변수 i, j 선언
```
for (int k = 1; k <= 3; k++)
```
- k 선언 및 1 저장 후 3보다 작거나 같을 때 반복
```
printf("%d도 회전 \n", 90 * k);
```
- n도 회전 메시지 출력
```
for (i = 0; i < 4; i++)
  for (j = 0; j < 4; j++)
    temp[j][3 - i] = arr[i][j];
```
- i에 0 저장 후 4보다 작을 때 반복
- j에 0 저장 후 4보다 작을 때 반복
- temp[j][3 - i]에 arr[i][j] 저장
```
for (i = 0; i < 4; i++) {
  for (j = 0; j < 4; j++) {
    arr[i][j] = temp[i][j];
    printf("%2d ", arr[i][j]);
  }
  printf("\n");
}
```
- i에 0 저장 후 4보다 작을 때 반복
- j에 0 저장 후 4보다 작을 때 반복
- arr[i][j]에 temp[i][j] 저장
- arr[i][j] 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/d23365a1-f84b-4675-92f0-f903730d33a5" />

----------
## 도전문제 2

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
#include <stdlib.h>
```
- srand, rand, 등 여러가지 함수가 들어있는 stdlib.h를 포함해라.
```
printf("난수의 범위: 0부터 99까지 \n");
```
- 난수 범위 메시지 출력
```
for (int i = 0; i < 5; i++)
  printf("난수 출력: %d \n", rand() % 100);
```
- i 선언 및 0 저장 후 5보다 작을 때 반복
- 난수 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2268" height="1226" alt="image" src="https://github.com/user-attachments/assets/af0e5b55-f5fc-4952-b2b0-2ba13a9c9c63" />

----------
## 도전문제 3

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함수가 들어있는 stdio.h를 포함해라.
```
#include <stdlib.h>
```
- srand, rand, 등 여러가지 함수가 들어있는 stdlib.h를 포함해라.
```
#include <time.h>
```
- time, 등 여러가지 함수가 들어있는 time.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
int i;
```
- 정수형 변수 i 선언
```
srand((int)time(NULL));
```
- 현재 시간을 이용한 씨드 설정
```
int x1 = (rand() % 6) + 1;
```
- 정수형 변수 x1 선언 및 1부터 6까지의 난수 중 랜덤으로 저장
```
int x2 = (rand() % 6) + 1;
```
- 정수형 변수 x2 선언 및 1부터 6까지의 난수 중 랜덤으로 저장
```
printf("주사위 1의 결과: %d \n", x1);
```
- 주사위 1 결과 출력
```
printf("주사위 2의 결과: %d \n", x2);
```
- 주사위 2 결과 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/642d549e-7440-4d3a-861a-05c9a9e1d35a" />
