# Chapter 24-1
## 실습과제 1

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
FILE* a = fopen("a.txt", "rt");
```
- a.txt 파일을 읽기 형식으로 오픈
```
FILE* b = fopen("b.txt", "wt);
```
- b.txt 파일을 쓰기 형식으로 오픈
```
char ch;
```
- 문자형 변수 ch 선언
```
while (1) {
  ch = fgetc(a);
  if (ch == EOF)
    break;

  fputc(ch, b);
}
```
- a.txt의 내용을 한 줄씩 복사
```
fclose(a);
fclose(b);
```
- 파일 닫기
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="1900" height="1082" alt="image" src="https://github.com/user-attachments/assets/f7567656-6ec7-45a0-8e58-9bbff0fa1771" />

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
FILE* fp = fopen("test.txt", "rt");
```
- test.txt 파일을 읽기 형식으로 오픈
```
int ch;
```
- 정수형 변수 ch 선언
```
if (fp == NULL) {
  puts("파일 오픈 실패!");
  return -1;
}
```
- 파일 오픈 실패 확인
```
while (1) {
  ch = fgetc(fp);

  if (ch == EOF)
    break;

  if (ch == '.')
    printf(".\n");
  else
    fputc(ch, stdout);
}
```
- 마침표가 나올 때마다 줄바꿈하며 출력
```
fclose(fp);
```
- 파일 닫기
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/af26a57a-1397-4541-bdff-41e9c6139afb" />

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
FILE* fp = fopen("test.txt", "rt");
```
- test.txt 파일을 읽기 형식으로 오픈
```
char ch[100];
```
- 100개의 방을 가진 문자형 변수 ch 선언
```
int i = 0;
```
- 정수형 변수 i 선언 후 0 저장
```
if (fp == NULL) {
  puts("파일 오픈 실패!");
  return -1;
}
```
- 파일 오픈 실패 확인
```
printf("문자열을 입력하시오: ");
fgets(ch, sizeof(ch), stdin);
```
- 문자열 입력
```
while (1) {
  if (ch[i] == '\0')
    break;

  if (ch[i] == ' ')
    fputc('\n', fp);
  else
    fputc(ch[i], fp);

  i++;
}
```
- 공백마다 줄바꿈하며 문자 입력
```
fclose(fp);
```
- 파일 닫기
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="1900" height="1082" alt="image" src="https://github.com/user-attachments/assets/5aaf3e5e-66a5-4220-a390-4b486521cf60" />

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
FILE* tst = fopen("test.txt", "rt");
```
- test.txt 파일을 읽기 형식으로 오픈
```
FILE* res = fopen("result.txt", "wt);
```
- res.txt 파일을 쓰기 형식으로 오픈
```
int ch;
```
- 정수형 변수 ch 선언
```
if (fp == NULL) {
  puts("파일 오픈 실패!");
  return -1;
}
```
- 파일 오픈 실패 확인
```
while (1) {
    ch = fgetc(tst);

    if (ch == EOF)
        break;

    if (ch == '.') {
        fputc('.', res);
        fputc('\n', res);
    }
    else
        fputc(ch, res);
}
```
- 마침표마다 줄바꿈하며 문자 저장
```
fclose(tst);
fclose(res);
```
- 파일 닫기
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="1900" height="1082" alt="image" src="https://github.com/user-attachments/assets/c0e0e713-b988-4624-8869-7f6110659e7d" />
