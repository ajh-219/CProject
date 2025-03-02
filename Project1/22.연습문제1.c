
#include <stdio.h> // 입출력 제공
#include <stdarg.h> // 가변 인자 제공
#include <math.h> // 수학 기능 제공


void Quadformula(int a, int b, int c)
{
	
	if (a % 2 == 1)
	{
		double result1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
		double result2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

		printf("%.2f, %.2f", result1, result2);
	}
	else printf("오류입니다.\n");
	
	
	//else
	//{
	//	double result1 = (-b + ((b * b) - (4 * a * c))) / (2 * a);
	//	double result2 = (-b + ((b * b) - (4 * a * c))) / (2 * a);

	//	printf("%.2f, %.2f", result1, result2);
	//}
}

int main()
{
	// x² - 2x = 2를 풀이하시오.
	double a = 1;
	double b = 2;
	double c = -2;

	Quadformula(a, b, c);
	// 힌트 : 2차 방정식을 풀기 위해선 근의 공식을 이용해봅시다.
	return 0;
}