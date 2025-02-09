# CProject
 2025-02-08 C

## 목차
[깃허브 데스크톱](#깃허브-데스크톱)

# 깃허브 데스크톱

+ 설치 방법
  > https://desktop.github.com/download/

<hr/>

# 코드 기본 구성
+ 전처리기
+ main

```c
#include <stdio.h>

int main()
{
  printf("c programming");
  return 0;
}
```

# printf
> stdio.h에서 제공해주는 c언어의 대표적인 문장 출력용 기능(함수)입니다.<br>
> 일반적으로는 printf("작성하고 싶은 문장");을 작성해 사용합니다.

예시)
```c
#include <stdio.h>

int main()
{
  printf("Good day to study!");
  return 0;
}
```

# 서식 지정자
|지정자 명칭|설명|
|-----|-----|
|%d|정수에 대한 지정자|
|%f|실수에 대한 지정자|
|%c|문자에 대한 지정자|

# 변수(Variable)
> c언어에서 특정 하나의 데이터를 사용자가 이름지어서 저장하는 방법(공간)<br>
> 변수에 저장되어있는 데이터의 값은 일반적으로 언제든 변경 가능합니다.<br>
> c언어에서의 변수는 각 변수마다 정해진 데이터의 형태(자료형)이 존재하며,
> 각 변수는 할당된 값을 가지고 있습니다.

|이름|표현하는 형태|크기|표현 범위|
|-----|-----|-----|-----|
|int|정수|4 byte|-2147483648 ~ 2147483647|
|float|실수|4 byte|3.4 * 10 -38제곱 ~ 3.4 * 10 +38제곱|
|char|문자|1 byte|-128 ~ 127|

예시)
```c
#include <stdio.h>

int main()
{
  int count;
  count = 5;
  printf("현재의 카운트는 %d 입니다.");

  return 0;
}
```
# 변수를 만들 때 지켜야 할 규칙
> 1. 대소문자를 구분합니다.
> 2. 변수의 이름은 숫자가 맨 앞에 나올 수 없습니다.
> 3. 변수의 이름에 특수문자 사용이 불가능합니다. 예외) _, &
> 4. 변수의 이름으로 키워드(keyword)를 사용할 수 없습니다. ex) int, float etc..

# 그 외 규칙
> 1. 변수의 이름과 초기화를 동시에 진행할 수 있습니다.
ex) float PI = 3.141592f;

> 2. 데이터의 형태가 같다면, 여러 개를 한번에 선언할 수 있습니다.
ex) int a, b, c;

> 3. 선언과 초기화를 동시에 여러 개를 진행할 수 있습니다.
ex) int number3 = 50, number4 = 40;

> 4. c언어에서 10진수 이외의 8진수나 16진수를 지정할 수 있습니다.


4.예시)
```c
#include <stdio.h>

int main()
{
  float PI = 3.141592f;
  int octo = 015; // 숫자 앞에 0이 붙으면 8진수
  int hexa = 0x6; // 숫자 앞에 0x가 붙으면 16진수

  printf("8진수 octo = %o\n", octo);
  printf("16진수 hexa = %x\n", hexa);
  printf("8진수 표기법 출력 octo = %#o\n", octo);
  printf("16진수 표기법 출력 hexa = %#x\n", hexa);
  printf("8진수 표기법 출력(8자리) octo : %0.8o\n", octo);
  printf("16진수 표기법 출력(8자리) hexa : %0.8x\n", hexa);

  return 0;
}
```
# 입력(input)
> 1. 사용자가 직접 값을 입력하고 그 값을 특정 위치에 전달합니다.
> 2. 일반적으로 변수를 만들고, 그 변수에 입력한 값을 적용하는 방식으로 사요합니다.

예시)
```c
#include <stdio.h>

int main()
{
	int number;
	printf("Input the number : ");
	scanf_s("%d", &number);
	// Visual Studio에서 사용하는 경우라면 scanf_s를 통해 오류를 막을 수 있습니다.
	printf("number : %d\n", number);
 return 0;
}
```
# getchar
> getchar();
> 1. 키보드로부터 하느의 문자르 읽어내는 함수
> 2. 이 기능은 버퍼(buffer)를 비우는 용도로 사용됩니다.
> 3. 문자를 다 받기 때문에 enter 같은 기능도 값으로 남게 됩니다.

ex)
```c
char key;
printf("키를 하나 입력해주세요");
key = getchar();
putchar(key);
```

버퍼(buffer) : c언어에서 입력을 진행할 경우 바로 값을 넘기는게 아니라<br>
               임시로 데이터를 저장하는 별도의 공간에 값을 넣고 전달하는 방식입니다.

# gets, puts
> gets(); , puts();
> 1. 문자열에 대한 입력과 출력을 진행할 때 편하게 사용할 수 있습니다.
> 2. 문자열(문장)이란 char 형태의 데이터를 묶음으로 표현한 것을 의미합니다.

# 문자열 만드는 방법
> char 변수명[문자의 개수]

예시)
```c
#define _CRT_SECURE_NO_WARNINGS
// 프로그램에서의 안전 검사를 하지 않도록 설정하는 코드
#include <stdio.h>

int main()
{
  char word[10];
  printf("단어를 입력해주세요 >> ");
  gets(word); // 문자열 입력
  puts(word); // 전달한 문장 출력
  
  // 주의사항 : c언어에서 한글을 입력하는 경우 한글 한 단어에 2칸을 소모합니다.
  //	          현재 word는 10개의 단어를 사용할 수 있습니다.
  //           한글을 기준으로는 5개의 단어까지 입력이 가능합니다.
  //	          단 입력을 진행할 경우 문자의 개수보다 1개정도 적게 작성합니다.
  //           따라서 영단어는 9글자까지, 한글은 4글자까지 가능

  getchar();

  char item[10];
  printf("아이템의 이름을 입력해주세요 >> ");
  scanf("%s", item); // 문자열을 받을 경우에는 item 앞에 &를 붙이지 않아도 됩니다.
  // %s는 문자열을 받는 지정자입니다.
  printf("아이템의 이름 : %s 입니다.\n", item);

  return 0;
}
```



[목차로](#목차)






