
#include <stdio.h> // ����� ����
#include <stdarg.h> // ���� ���� ����
#include <math.h> // ���� ��� ����


void Quadformula(int a, int b, int c)
{
	
	if (a % 2 == 1)
	{
		double result1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
		double result2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

		printf("%.2f, %.2f", result1, result2);
	}
	else printf("�����Դϴ�.\n");
	
	
	//else
	//{
	//	double result1 = (-b + ((b * b) - (4 * a * c))) / (2 * a);
	//	double result2 = (-b + ((b * b) - (4 * a * c))) / (2 * a);

	//	printf("%.2f, %.2f", result1, result2);
	//}
}

int main()
{
	// x�� - 2x = 2�� Ǯ���Ͻÿ�.
	double a = 1;
	double b = 2;
	double c = -2;

	Quadformula(a, b, c);
	// ��Ʈ : 2�� �������� Ǯ�� ���ؼ� ���� ������ �̿��غ��ô�.
	return 0;
}