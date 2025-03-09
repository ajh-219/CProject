#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// N과 M
// 자연수 N과 M이 주어졌을 때, 아래의 조건을 만족하게 됩니다.
// 1부터 N까지의 자연수 중에서 중복없이 M개를 고른 수열

// 1 <= M < N <= 8 범위에 해당하는 값만 입력으로 넣습니다.

// N과 M에 대한 입력을 순서대로 진행합니다.
// 예시)					출력결과
// 3 1					1
//						2
//						3
// 예시2)				출력결과
// 4 2					1 2
//						1 3
//						1 4
//						2 1
//						2 3
//						2 4
//						3 1
//						3 2
//						3 4
//						4 1
//						4 2
//						4 3



int main()
{
	int M[8];
	int N[8];

	for (int i = 0; i <= 8; i++)
	{
		
		for (int j = 0; j < i; j++)
		{
			if (i == j)
			{
				continue;
			}
			else printf("%d %d", N[i], M[j]);
		}
	}

	return 0;
}