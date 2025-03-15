#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> // system

// 1. 파일을 이요해 세이브 / 로드 기능을 보일 수 있는 프로그램을 구현하세요.
// 세이브 : 현재의 작업 상태를 파일에 저장하는 것을 의미합니다.
// 로드 : 파일에 있는 데이터를 불러오는 것을 의미합니다.

// ex)  1. 레벨 업 기능을 구현해서 플래이어의 레벨이 1 상승했습니다.
//		2. 현재 플레이의 능력치는 레벨 2 힘 5 민 5 지 5 행 5입니다.
//		3. 세이브 기능을 사용할 경우 해당 정보가 저장됩니다.
//		4. 새로 하기 기능을 누를 경우 플레이어의 능력치가 reset 됩니다.
//		5. 이 상태에서 로드를 누를 경우 위에 저장해둔 정보가 다시 플레이어의 능력치로 설정됩니다.

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
	// while(1) 안에 코드를 작업하면 계속 반복됩니다.
	while (1)
	{
		printf("1. 기능 선택 \n"); 
		scanf("%d", &choice); // 입력을 진행할 경우, 입력 전까지는 대기 상태가 됩니다.
		system("cls"); // 해당 명령어를 작성하면 콘솔 창이 지워집니다.

		if (choice == 1)
		{
			printf("1. 유저 정보 2. 초기화 3. 종료\n");
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
				printf("오류!");
			}
		}

	}
	if (choice == 0)
	{
		exit(0); // 프로그램을 종료하는 코드
	}

	return 0;
}

void levelup()
{
	struct charactor info;

	if (info.level++)
	{
		printf("레벨업!!\n");
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
		printf("읽기 실패\n");
	}
	else 
	{
		//레벨 2 힘 5 민 5 지 5 행 5
		printf("레벨\t힘 \t지\t행\n");
		fprintf(fp, "레벨 : %d\t힘 : %d\t민 : %d\t지 : %d\t행 : %d\n", info.level, info.power, info.speed, info.mind, info.luck);
		printf("레벨 : %d\t힘 : %d\t민 : %d\t지 : %d\t행 : %d\n", info.level, info.power, info.speed, info.mind, info.luck);
	}
	
}

void reset(FILE* fpv)
{
	char restart;

	printf("새로 하시겠습니까?\n");
	scanf("%c", restart);

	if (restart == "네")
	{
		fpv == NULL;
	}
	else
	{
		printf("취소하였습니다!");
	}
}
void save(FILE* fpv)
{
	
}

void file_compare(FILE *fpv)
{
	fp = fpv;
}