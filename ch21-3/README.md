# Chapter 21-3
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
int main(void)
```
- 메인함수 시작
```
char str[1000] = "";
```
- 1000개의 방을 가진 문자형 변수 str 선언 후 공백으로 초기화
```
char ch[100];
```
- 100개의 방을 가진 문자형 변수 ch 선언
```
while (1)
```
- 무한 루프
```
printf("문자열 입력: ");
```
- 문자열 입력 메시지 출력
```
scanf("%s", ch);
```
- 문자열 입력
```
if (!strcmp(ch, "quit"))
```
- ch가 quit일 때
```
break;
```
- 루프 탈출
```
if (str[0] != '\0')
```
- str[0]이 NULL이 아닐 때
```
strcat(str, " ");
```
- 띄어쓰기 덧붙이기
```
strcat(str, ch);
```
- ch 덧붙이기
```
printf("입력된 문자열: %s \n", str);
```
- 입력된 문자열 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2220" height="1226" alt="image" src="https://github.com/user-attachments/assets/077014f2-f664-4063-a7c8-95181b637aca" />

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
int my_strlen(char str[])
```
- 매개변수가 str[]인 함수 my_strlen 선언
```
int x = 0;
```
- 정수형 변수 x 선언 후 0 저장
```
while (str[x] != '\0')
```
- str[x]가 NULL이 아닐 때 반복
```
x++;
```
- x에 1 더하기
```
return x;
```
- x 반환
```
void RemoveBSN(char str[])
```
- 매개변수가 str[]인 함수 RemoveBSN 선언
```
int x = my_strlen(str);
```
- 정수형 변수 x 선언 후 str 값 반환
```
str[x - 1] = '\0';
```
- str[x - 1]에 NULL 저장
```
int main(void)
```
- 메인함수 시작
```
char str[100];
```
- 100개의 방을 가진 문자형 변수 str 선언
```
printf("문자열 입력: ");
```
- 문자열 입력 메시지 출력
```
fgets(str, sizeof(str), stdin);
```
- 문자열 입력
```
printf("길이: %d, 내용: %s \n", my_strlen(str), str);
```
- 문자열 길이와 내용 출력
```
RemoveBSN(str);
```
- RemoveBSN 함수 호출
```
printf("길이: %d, 내용: %s \n", my_strlen(str), str);
```
- 문자열 길이와 내용 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/22167843-9529-493c-a53b-503e418d15ab" />

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
void my_strcpy(char str2[], char str1[])
```
- 매개변수가 str2[], str1[]인 함수 my_strcpy 선언
```
int x = 0;
```
- 정수형 변수 x 선언 후 0 저장
```
while (str1[x] != '\0')
```
- str1[x]가 NULL이 아닐 때 반복
```
str2[x] = str1[x];
```
- str2[x]에 str1[x] 저장
```
x++;
```
- x에 1 더하기
```
str2[x] = '\0';
```
- str2[x]에 NULL 저장
```
int main(void)
```
- 메인함수 시작
```
char str1[20] = "1234567890";
```
- 20개의 방을 가진 문자형 변수 str1 선언 후 1234567890 저장
```
char str2[20];
```
- 20개의 방을 가진 문자형 변수 str2 선언
```
my_strcpy(str2, str1);
```
- my_strcpy 함수 호출
```
puts(str2);
```
str2 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/0d7af4a3-cfa2-465e-a90e-2f29bd676b8e" />

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
void my_strcpy(char str2[], char str1[])
```
- 매개변수가 str1[], str2[]인 함수 my_strcat 선언
```
while (*str1 != '\0')
```
- str1이 가리키는 문자가 NULL이 아닐 때 반복
```
str1++;
```
- str1에 1 더하기
```
while (*str2 != '\0')
```
- str2가 가리키는 문자가 NULL이 아닐 때 반복
```
*str1 = *str2;
```
- str1이 가리키는 문자에 str2가 가리키는 문자 저장
```
str1++;
```
- str1에 1 더하기
```
str2++;
```
- str2에 1 더하기
```
*str1 = '\0';
```
- str1이 가리키는 문자에 NULL 저장
```
int main(void)
```
- 메인함수 시작
```
char str1[20] = "First~";
```
- 20개의 방을 가진 문자형 변수 str1 선언 후 First~ 저장
```
char str2[20] = "Second";
```
- 20개의 방을 가진 문자형 변수 str2 선언 후 Second 저장
```
my_strcat(str1, str2);
```
- my_strcat 함수 호출
```
puts(str1);
```
str1 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/434725ad-682f-4f73-abe8-366f69445419" />

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
int main(void)
```
- 메인함수 시작
```
char str[5][20];
```
- 20x5 사이즈 2차원 배열 str 선언
```
char max[20], min[20];
```
- 20개의 방을 가진 문자형 변수 max, min 선언
```
for (int i = 0; i < 5; i++)
```
- i 선언 및 0 저장 후 5보다 작을 때 반복
```
printf("문자열 입력: ");
```
- 문자열 입력 메시지 출력
```
scanf("%s", str[i]);
```
- 문자열 입력
```
strcpy(min, str[0]);
```
- min에 str[0] 복사
```
strcpy(max, str[0]);
```
- max에 str[0] 복사
```
for (int i = 1; i < 5; i++)
```
- i 선언 및 1 저장 후 5보다 작을 때 반복
```
if (strcmp(str[i], min) < 0)
```
- str[i]이 min보다 작으면
```
strcpy(min, str[i]);
```
- min에 str[i] 복사
```
if (strcmp(str[i], max) > 0)
```
- str[i]가 max보다 크면
```
strcpy(max, str[i]);
```
- max에 str[i] 복사
```
printf("제일 앞: %s \n", min);
```
- 제일 앞문자 출력
```
printf("제일 뒤: %s \n", max);
```
- 제일 뒷문자 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2268" height="1226" alt="image" src="https://github.com/user-attachments/assets/a26acfe8-c820-435f-aec6-8a3710ee47f0" />
