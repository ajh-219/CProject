#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void(*connection_network)(void);
void network_connected();
void network_disconnected();
void Login();
void connected(char* id, int* pw);

char id = "dkswndgus";
int pw = 91607523;

int main()
{
	Login();



	return 0;
}

void network_connected()
{
	printf("connected");
}
void network_disconnected()
{
	printf("disconnected");
}
void Login()
{
	printf("���̵� �Է��ϼ��� >> ");
	scanf("%s", id);
	printf("��й�ȣ�� �Է��ϼ��� >> ");
	scanf("%d ", pw);

}
void connected(char* id, int* pw)
{
	if (id == "dkswndgus" && pw == 91607523)
	{
		printf("success");
	}
	else
	{
		printf("fail");
	}
}