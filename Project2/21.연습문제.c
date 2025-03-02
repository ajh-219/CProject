#include <stdio.h> // 입출력 제공
#include <stdarg.h> // 가변 인자 제공
#include <math.h> // 수학 기능 제공

//int getPrime(int a)
//{
//	if (a <= 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= 10; i++)
//	{
//		if (a % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

int getPrime(int num)
{
	if (num <= 1)
	{
		return 0;
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int numbers()
{
	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("%d이 값은 소수입니다.\n", i);
		}
		else
		{
			printf("이 값은 소수가 아닙니다.\n", i);
		}
	}
	return 0;
}

//void numbers(int count, ...)
//{
//	va_list args;
//	va_start(args, count);
//
//	int prime = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		prime += va_arg(args, int);
//		if (getPrime(i) == 1)
//		{
//			printf("이 값은 소수입니다.\n");
//		}
//		else
//		{
//			printf("이 값은 소수가 아닙니다.\n");
//		}
//	}
//	printf("\n");
//	va_end(args);
//	
//}


int main()
{
	
	numbers();

	return 0;
}