#include <stdio.h> // ����� ����
#include <stdarg.h> // ���� ���� ����
#include <math.h> // ���� ��� ����

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
			printf("%d�� ���� �Ҽ��Դϴ�.\n", i);
		}
		else
		{
			printf("�� ���� �Ҽ��� �ƴմϴ�.\n", i);
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
//			printf("�� ���� �Ҽ��Դϴ�.\n");
//		}
//		else
//		{
//			printf("�� ���� �Ҽ��� �ƴմϴ�.\n");
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