# Chapter 21-2
## 실습과제 1

* stdin(표준 입력 스트림), stdout(표준 출력 스트림), stderr(표준 에러 스트림) 사용
* gets
* 배열의 크기를 초과하는 것을 체크해주지 않음
* 버퍼에 남아있는 '\n' 값을 종료 문자로 인식함
* 널문자는 문자열의 종료 위치를 판단하는 용도이고, 널포인터는 가리키는 대상이 없음을 나타내거나 포인터의 초기화 및 오류 검사하는 용도임

----------
## 실습과제 2

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
int c;
```
- 정수형 변수 c 선언
```
while (1) {
  printf("문자 입력: ");
  c = getchar();
  getchar();

  if (c == 'q' || c == 'Q')
    break;

  printf("입력된 문자는 ");
  putchar(c);
  printf("\n");
}
```
- 문자 입력 후 문자가 q 또는 Q면 반복 종료
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/f01447f2-dad5-4e6f-8bef-9d652a443957" />

----------
## 실습과제 3

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
char name[20];
```
- 20개의 방을 가진 실수형 변수 name 선언

```
char address[20];
```
- 20개의 방을 가진 실수형 변수 address 선언

```
char num[20];
```
- 20개의 방을 가진 실수형 변수 num 선언
```
printf("이름: ");
fgets(name, sizeof(name), stdin);
```
- 이름 입력
```
printf("주소: ");
fgets(address, sizeof(address), stdin);
```
- 주소 입력
```
printf("자동차 번호: ");
fgets(num, sizeof(num), stdin);
```
- 자동차 번호 입력
```
printf("<결과 출력> \n");
printf("이름: ");
fputs(num, stdout);

printf("주소: ");
fputs(address, stdout);

printf("자동차 번호: ");
fputs(num, stdout);
```
- 이름, 주소, 자동차 번호 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/33f95f95-eaec-4cc7-bca9-4f604b7e171a" />

----------
## 실습과제 4

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
char str[20];
```
- 20개의 방을 가진 문자형 변수 str 선언
```
int i;
```
- 정수형 변수 i 선언
```
printf("문자열 입력: ");
fgets(str, sizeof(str), stdin);
```
- 문자열 입력
```
for (i = 0; str[i] != '\n'; i++);
```
- i의 0 저장 후 str[i]가 '\n'이 아닐 때까지 반복
```
str[i] = '\0';
```
- str[i]에 NULL 저장
```
printf("%s", str);
```
- str 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/fc90cac2-2487-4425-bb71-60b5c3a81c65" />

----------
## 실습과제 5

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
char str[20];
```
- 20개의 방을 가진 문자형 변수 str 선언
```
int i, ct = 0;
```
- 정수형 변수 i, ct 선언 후 ct에 0 저장
```
printf("문자열 입력: ");
fgets(str, sizeof(str), stdin);
```
- 문자열 입력
```
for (i = 0; str[i] != '\0'; i++)
  if (str[i] == ' ' || str[i] == '\n')
    ct++;
```
- i에 0 저장 후 str[i]가 NULL이 아닐 때까지 반복
- str[i]가 공백 또는 '\n'일 경우 ct에 1 더하기
```
printf("단어 수: %d \n", ct);
```
- 단어 수 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/0ee0b197-83ad-45af-8bcd-1551d2a6d5e7" />
