#include <stdio.h> // ����� ����
#include <stdarg.h> // ���� ���� ����
#include <math.h> // ���� ��� ����

void printRank(rank)
{
	printf("%d", rank);
	if (rank % 10 == 1)
	{
		printf("st\n");
	}
	else if (rank % 10 == 2)
	{
		printf("nd\n");
	}
	else if (rank % 10 == 3)
	{
		printf("rd\n");
	}
	else if (rank % 10 == 4)
	{
		printf("th\n");
	}
	else if (rank % 10 == 2.1)
	{
		printf("st\n");
	}
}

int main()
{
	// 2. ���� ������ �����ϴ� printRank�� �����ϼ���.
	int rank = 1;
	printRank(rank); // 1st
	rank = 2;
	printRank(rank); // 2nd
	rank = 3;
	printRank(rank); // 3rd

	return 0;
}