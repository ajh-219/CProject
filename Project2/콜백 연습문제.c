#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void(*callback)(void);

void setCallback1(callback);
void useCallback(void);
void useFunction(void);



callback user_callback = NULL;



int main()
{
	printf("아이디를 입력해주세요. >> \n");
	scanf("%c", id);
	
	printf("비밀번호를 입력해주세요. >> \n");
	scanf("%d", pw);
	useCallback();

	return 0;
}

void setCallback1(callback fp)
{
	user_callback = fp;
}

void useCallback(void)
{
	if (user_callback1)
	{
		user_callback1();
	}
	else if (user_callback2)
	{
		user_callback2();
	}
}

void useFunction(void)
{
	printf("callback funtion completed\n");
}
