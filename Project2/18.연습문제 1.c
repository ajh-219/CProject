#include <stdio.h> // ����� ����
#include <stdarg.h> // ���� ���� ����
#include <math.h> // ���� ��� ����

float Quadformula(a, b, c)
{
	double result = b / a;

	return result;
}

int main()
{
	printf("root 4 = %.2f\n", sqrt(4));

	// x�� - 2x = 2�� Ǯ���Ͻÿ�.
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