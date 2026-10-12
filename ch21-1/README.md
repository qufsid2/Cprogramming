# chapter 21-1
## 실습과제 1

* 스트림은 입출력 장치 사이의 데이터의 이동을 위한 소프트웨어적인 경로 역할을 하며, 버퍼는 입출력 장치와 프로그램 사이에 존재하여 데이터를 임시로 저장하는 메모리 공간 역할을 한다.
* 버퍼는 데이터를 한 번에 전송해 시간이 적게 걸려 성능이 향상되는 장점이 있지만, 데이터가 즉시 전달되어야 하는 상황에서 쓰지 못하는 단점이 있다.
* scanf가 버퍼에 저장된 데이터를 가져와 메모리에 저장 후 버퍼에서는 삭제
* 버퍼가 가득차거나, 문장입력이 완료될 때
* printf는 출력 버퍼에 데이터를 출력하고 scanf는 입력 버퍼에서 데이터를 읽어 오기 때문에 입력 버퍼가 비어 있으면 키보드 입력을 무한히 기다리며, 입력 버퍼에 저장된 문자가 있다면 버퍼의 문자를 리턴함

----------
## 실습과제 2

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
char ch;
```
- 문자형 변수 ch 선언
```
while (1)
```
- 무한 루프
```
printf("문자 입력: ");
```
- 문자 입력 메시지 출력
```
scanf(" %c", &ch);
```
- 문자 입력(%c 앞에 공백을 넣지 않으면 버퍼에 \n이 들어감)
```
printf("입력된 문자는 %c \n", ch);
```
- 문자 출력
```
if (ch == 'q' || ch == 'Q')
  break;
```
- ch가 q 또는 Q 일 때
- 루프 탈출
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2268" height="1226" alt="image" src="https://github.com/user-attachments/assets/060970a0-7065-43db-a35e-881f0ead1969" />

----------
## 실습과제 3

* scanf("%c", &blood_type)에서 %c 앞에 공백을 넣는 것으로 버퍼에 남아있는 '\n'문자를 무시하고 출력할 수 있다.

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
int x;
```
- 정수형 변수 x 선언
```
char name[10];
```
- 10개의 방을 가진 문자형 변수 name 선언
```
char blood_type;
```
- 문자형 변수 blood_type 선언
```
printf("이름을 입력하시오: ");
```
- 이름 입력 메시지 출력
```
scanf("%s", name);
```
- 이름 입력
```
printf("혈액형을 입력하시오: ");
```
- 혈액형 입력 메시지 출력
```
scanf(" %c", &blood_type);
```
- 혈액형 입력
```
printf("이름: %s \n", name);
```
- 이름 출력
```
printf("혈액형: %c \n", blood_type);
```
- 혈액형 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/02222080-2116-4d4e-9daf-81bdd1081c32" />

----------
## 실습과제 4

1. ch에 abcde 입력
2. 문자: a 메시지가 출력됨
3. scanf("%c", &ch); 문장이 실행되기 전에 \n을 읽어 버퍼에서 제거됨
4. 문자: b 메시지가 출력됨
5. 3, 4번이 반복됨

----------
## 실습과제 5

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 함가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
char str[20];
```
- 20개의 방을 가진 문자형 변수 str 선언
```
int i = 0;
```
- 정수형 변수 i 선언 및 0 저장
```
printf("문자열을 입력하시오: ");
```
- 문자열 입력 메시지 출력
```
while (1) {
  scanf("%c", &str[i]);
  if (str[i] == '\n')
    break;
  i++;
}
```
- 무한 루프
- 문자열 입력
- str[i]가 \n일 때
- 루프 탈출
- i에 1 더하기
```
str[i] = '\0';
```
- str[i]에 널문자 저장(이거 안하면 출력 오류남)
```
printf("문자열: %s \n", str);
```
- 문자열 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/c703230d-dfb9-427e-9688-ef3e8ad1cb57" />
