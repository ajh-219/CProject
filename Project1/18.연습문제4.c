#include <stdio.h> // ����� ����
#include <stdarg.h> // ���� ���� ����
#include <math.h> // ���� ��� ����

int isOdd(int a)
{
	int result = a;
	if (a % 2 == 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return result;
}

int main()
{


	int b = isOdd(3); // "YES"
	int c = isOdd(4); // "NO"
	int d = isOdd(5); // "YES"


	return 0;
}
