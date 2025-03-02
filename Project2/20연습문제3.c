#include <stdio.h> // ����� ����
#include <stdarg.h> // ���� ���� ����
#include <math.h> // ���� ��� ����

float average(int count, ...)
{
	va_list args;
	va_start(args, count);

	float sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(args, int);		
	}
	printf("\n");
	va_end(args);
	return sum / count;
}


int main()
{
	
	float result1 = average(3, 100, 95, 90); // 95.00
	float result2 = average(4, 100, 95, 90, 80); // 91.25
	// ��Ʈ) printf("%.2f, value);�� Ȱ���ϸ� �Ҽ��� 2�ڸ����� ��� ����

	printf("result1 = %.2f\n", result1);
	printf("result2 = %.2f\n", result2);

	return 0;
}