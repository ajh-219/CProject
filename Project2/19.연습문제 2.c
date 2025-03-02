#include <stdio.h> // 입출력 제공
#include <stdarg.h> // 가변 인자 제공
#include <math.h> // 수학 기능 제공

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
	// 2. 다음 조건을 만족하는 printRank를 구현하세요.
	int rank = 1;
	printRank(rank); // 1st
	rank = 2;
	printRank(rank); // 2nd
	rank = 3;
	printRank(rank); // 3rd

	return 0;
}