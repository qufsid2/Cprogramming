# Chapter 14-2
## 실습과제 1

* 1. 다른 함수에서 선언된 지역 변수의 값을 변경하고 싶은 경우
  2. 배열을 함수의 인자에 전달하는 경우
  3. 함수의 리턴 값이 2개 이상인 경우
* 리스트의 첫 번째 값을 최댓값으로 저장 후 두 번째 값과 첫 번째 값을 비교해 더 큰 값을 최댓값으로 저장한다. 이후 마지막 값까지 반복하여 최댓값을 찾는다.
* 변수에 저장된 값이 변경되는 오류를 막아 코드의 안정성이 높아지기 때문

----------
## 실습과제 2

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int get_max(int* array, int n);
```
- array의 주소를 전달받고, n을 받아서 처리한 후, n을 반환하는 get_max 함수 선언
```
int main(void)
```
- 메인함수 시작
```
int grade[5];
```
- 5개의 방을 가진 정수형 grade 배열 선언
```
int i, max;
```
- 정수형 변수 i, max 선언
```
printf("정수 5개를 입력하시오. \n");
```
- 정수 5개 입력 메시지 출력
```
for (i = 0; i < 5; i++)
  scanf("%d", &grade[i]);
```
- 정수 5개 입력
```
max = get_max(grade, 5);
```
- grade, 5 값을 get_max에 전달 후, 함수가 반환한 값을 다시 max에 저장
```
printf("최댓값은 %d입니다. \n", max);
```
- 최댓값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
```
int get_max(int* array, int n)
```
- array의 주소를 전달받고, n을 받아서 처리한 후, n을 반환하는 get_max 함수 선언
```
int i, max;
```
- 정수형 변수 i, max 선언
```
max = *array;
```
- max에 array가 가리키는 변수의 값 넣기
```
for (i = 1; i < n; i++)
  if (*(array + i) > max)
    max = *(array + i);
```
- n번 반복
- array + i가 가리키는 변수의 값이 max 보다 크면
- max에 array + i가 가리키는 변수의 값 넣기
```
return max;
```
- max를 반환

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/a094adb9-9c5f-454c-80fa-59a507ebf229" />
