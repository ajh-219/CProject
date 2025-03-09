#include <stdio.h>

int number1[] = {1,2,3,4};

int Backtracking(int num1, int sum, int count)
{
	count = 2;
	for (int i = 0; i < count; i++)
	{
		number1[i] + number1[i + 1] = sum;
		if (sum >= 6)
		{
			printf("%d %d\n", number1[i], number1[i + 1]);
		}
		else
		{
			continue;
		}
		printf("\n");
		return;
	}
	
	for (int i = 1; i < num1; i++)
	{
		Backtracking(num1, sum, count);
	}
}

int main()
{
	return 0;
}