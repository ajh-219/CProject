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

// ���� ����ü user�� �̿��� ������ ���� ��� ȭ���� �ϼ��ϼ���.

// ���̵� �Է����ּ��� : sample12@naver.com
// ��й�ȣ�� �Է����ּ��� : koreaedu1384!@
// ������ �Է����ּ���(M,F) : M
// ���̵� �Է����ּ��� : sample12@naver.com
// ��й�ȣ�� �Է����ּ��� : koreaedu1384!@
// ������ �Է����ּ���(M,F) : F
// ���̵� �Է����ּ��� : sample12@naver.com
// ��й�ȣ�� �Է����ּ��� : koreaedu1384!@
// ������ �Է����ּ���(M,F) : M

// = ���� ���̺� =
// ========================================
// 1. sample12@naver.com	koreaedu1384!@
// 2. sample13@naver.com	koreaedu1384!@
// 3. sample14@naver.com	koreaedu1384!@
// ========================================



int main()
{
	// ���� �������� �ݺ� -> + for�� �����ϱ� �ʹ� ����.
	struct user uid[3];

	for (int i = 0; i < 1; i++)
	{
		printf("���̵� �Է����ּ��� : ");
		scanf("%s", uid[i].id);
		getchar();

		printf("��й�ȣ�� �Է����ּ��� : ");
		scanf("%s", uid[i].pw);
		getchar();

		printf("������ �Է����ּ��� : ");
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
