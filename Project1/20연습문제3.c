#include <stdio.h> // 입출력 제공
#include <stdarg.h> // 가변 인자 제공
#include <math.h> // 수학 기능 제공

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
	// 힌트) printf("%.2f, value);를 활용하면 소수점 2자리까지 출력 가능

	printf("result1 = %.2f\n", result1);
	printf("result2 = %.2f\n", result2);

	return 0;
}