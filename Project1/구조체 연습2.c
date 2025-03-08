#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void Login();

struct user
{
	char id[40];
	char pw[50]; 
	char gender; // 'M', 'F'
};

// 위의 구조체 user을 이용해 다음과 같은 출력 화면을 완성하세요.

// 아이디를 입력해주세요 : sample12@naver.com
// 비밀번호를 입력해주세요 : koreaedu1384!@
// 성별을 입력해주세요(M,F) : M
// 아이디를 입력해주세요 : sample12@naver.com
// 비밀번호를 입력해주세요 : koreaedu1384!@
// 성별을 입력해주세요(M,F) : F
// 아이디를 입력해주세요 : sample12@naver.com
// 비밀번호를 입력해주세요 : koreaedu1384!@
// 성별을 입력해주세요(M,F) : M

// = 유저 테이블 =
// ========================================
// 1. sample12@naver.com	koreaedu1384!@
// 2. sample13@naver.com	koreaedu1384!@
// 3. sample14@naver.com	koreaedu1384!@
// ========================================



int main()
{
	// 같은 데이터의 반복 -> + for문 접근하기 너무 좋다.
	struct user uid[3];

	for (int i = 0; i < 1; i++)
	{
		printf("아이디를 입력해주세요 : ");
		scanf("%s", uid[i].id);
		getchar();

		printf("비밀번호를 입력해주세요 : ");
		scanf("%s", uid[i].pw);
		getchar();

		printf("성별을 입력해주세요 : ");
		scanf("%c", &uid[i].gender);
		getchar();
	}
	
	printf("===============================\n");
	for (int i = 0; i < 1; i++)
	{
		printf("%d. %s  %s  %c \n", i+1, uid[i].id, uid[i].pw, uid[i].gender);
	}
	printf("===============================\n");

	return 0;
}
