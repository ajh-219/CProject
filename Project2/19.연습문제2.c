#include <stdio.h> // 입출력 제공
#include <stdarg.h> // 가변 인자 제공
#include <math.h> // 수학 기능 제공

int printRank(rank)
{
	
	if (rank == 1)
	{
		printf("%dst\n", rank);
	}
	else if (rank == 2)
	{
		printf("%dnd\n", rank);
	}
	else if (rank == 3)
	{
		printf("%drd\n", rank);
	}
	else if (rank == 4)
	{
		printf("%dth\n", rank);
	}
	else if (rank == 21)
	{
		printf("%dth\n", rank);
	}
	return rank;
}


int main()
{
	int rank = 1;
	printRank(rank); // 1st
	rank = 2;
	printRank(rank); // 2nd
	rank = 3;
	printRank(rank); // 3rd
	rank = 4;
	printRank(rank); // 4th
	rank = 21;
	printRank(rank); // 21st

	return 0;
}