#include <stdio.h> // 입출력 제공
#include <stdarg.h> // 가변 인자 제공
#include <math.h> // 수학 기능 제공

float Quadformula(a, b, c)
{
	double result = b / a;

	return result;
}

int main()
{
	printf("root 4 = %.2f\n", sqrt(4));

	// x² - 2x = 2를 풀이하시오.
	double a = 1;
	double b = 2;
	double c = -2;
	float result = Quadformula();

	if (c % 2 == 0)
	{
		float d = math(a, b);
	}



	return 0;
}