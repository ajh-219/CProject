#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
};

void compare(struct student s1, struct student s2);

int main()
{
	struct student s1 = { 1, "kane" };
	struct student s2 = { 1, "kane" };


	compare(s1, s2);
	// 해당 코드를 실행했을 때, s1과 s2가 서로 같은 값이라면 "같은 값입니다." 같은 값이 나오도록 함수 compare를 설계하시오.

	// 힌트
	// int a = function(1); 이런식으로 나오거나 printf(function(1)); 이런 식으로 나오면 return 함수
	// function(1); 이런식으로 함수만 적혀있으면 일반 함수(void)입니다.

	return 0;
}

void compare(struct student s1, struct student s2)
{
	if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0)
	{
		printf("같은 값입니다.");
	}
	else
	{
		printf("다른 값입니다.");
	}
}
