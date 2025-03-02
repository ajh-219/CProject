#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void(*callback)(void);

void setCallback1(callback);
void setCallback2(callback);
void useCallback(void);
void useFunction(void);

callback user_callback1 = NULL;
callback user_callback2 = NULL;


int main()
{
	printf("���̵� �Է����ּ���. >> \n");
	scanf("%c", user_callback1);
	useCallback();

	printf("��й�ȣ�� �Է����ּ���. >> \n");
	scanf("%c", user_callback2);
	useCallback();

	return 0;
}

void setCallback1(callback fp)
{
	user_callback1 = fp;
}

void setCallback2(callback pw)
{
	user_callback2 = pw;
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
