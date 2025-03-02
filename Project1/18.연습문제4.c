#include <stdio.h> // 입출력 제공
#include <stdarg.h> // 가변 인자 제공
#include <math.h> // 수학 기능 제공

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
