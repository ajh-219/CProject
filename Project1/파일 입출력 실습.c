#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> // system

// 1. ������ �̿��� ���̺� / �ε� ����� ���� �� �ִ� ���α׷��� �����ϼ���.
// ���̺� : ������ �۾� ���¸� ���Ͽ� �����ϴ� ���� �ǹ��մϴ�.
// �ε� : ���Ͽ� �ִ� �����͸� �ҷ����� ���� �ǹ��մϴ�.

// ex)  1. ���� �� ����� �����ؼ� �÷��̾��� ������ 1 ����߽��ϴ�.
//		2. ���� �÷����� �ɷ�ġ�� ���� 2 �� 5 �� 5 �� 5 �� 5�Դϴ�.
//		3. ���̺� ����� ����� ��� �ش� ������ ����˴ϴ�.
//		4. ���� �ϱ� ����� ���� ��� �÷��̾��� �ɷ�ġ�� reset �˴ϴ�.
//		5. �� ���¿��� �ε带 ���� ��� ���� �����ص� ������ �ٽ� �÷��̾��� �ɷ�ġ�� �����˴ϴ�.

struct charactor
{
	int level;
	int power;
	int speed;
	int mind;
	int luck;
};

void levelup();
void info_read(fp);
void reset(FILE *fpv);
void save(FILE* fpv);
void file_compare();

int main()
{
	struct charactor info = { 2, 5, 5, 5, 5 };

	FILE* fp = NULL;

	fp = fopen("program_data.txt", "w");

	int choice;
	// while(1) �ȿ� �ڵ带 �۾��ϸ� ��� �ݺ��˴ϴ�.
	while (1)
	{
		printf("1. ��� ���� \n"); 
		scanf("%d", &choice); // �Է��� ������ ���, �Է� �������� ��� ���°� �˴ϴ�.
		system("cls"); // �ش� ��ɾ �ۼ��ϸ� �ܼ� â�� �������ϴ�.

		if (choice == 1)
		{
			printf("1. ���� ���� 2. �ʱ�ȭ 3. ����\n");
			scanf("%d", &choice);

			if (choice == 1)
			{
				info_read(fp);
			}
			else if (choice == 2)
			{
				file_compare(reset);
			}
			else if (choice == 3)
			{
				exit(0);
			}
			else
			{
				printf("����!");
			}
		}

	}
	if (choice == 0)
	{
		exit(0); // ���α׷��� �����ϴ� �ڵ�
	}

	return 0;
}

void levelup()
{
	struct charactor info;

	if (info.level++)
	{
		printf("������!!\n");
		info.power++;
		info.speed++;
		info.mind++;
		info.luck++;
	}
}

void info_read(fp)
{
	struct charactor info;

	if (fp == NULL)
	{
		printf("�б� ����\n");
	}
	else 
	{
		//���� 2 �� 5 �� 5 �� 5 �� 5
		printf("����\t�� \t��\t��\n");
		fprintf(fp, "���� : %d\t�� : %d\t�� : %d\t�� : %d\t�� : %d\n", info.level, info.power, info.speed, info.mind, info.luck);
		printf("���� : %d\t�� : %d\t�� : %d\t�� : %d\t�� : %d\n", info.level, info.power, info.speed, info.mind, info.luck);
	}
	
}

void reset(FILE* fpv)
{
	char restart;

	printf("���� �Ͻðڽ��ϱ�?\n");
	scanf("%c", restart);

	if (restart == "��")
	{
		fpv == NULL;
	}
	else
	{
		printf("����Ͽ����ϴ�!");
	}
}
void save(FILE* fpv)
{
	
}

void file_compare(FILE *fpv)
{
	fp = fpv;
}