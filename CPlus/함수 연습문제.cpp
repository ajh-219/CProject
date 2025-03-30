#include "Header.h"

// 1. 아래의 실행 결과 1의 출력 결과와 동일하도록, 함수 getCount()를 구현하세요
// 실행 결과 1
// 1 2 3 4 5 6 7 8 9 10

void getCount()
{
	static int count = 1;
	cout << count << " ";
	count++;
}
// 2. 두 개의 정수를 매개변수로 입력받아 두 정수 사이에 있는 모든 정수의 함을 구하여 return하는 함수를 정의하고,
//    main 함수에서 이를 호출하는 프로그램을 작성해보세요.

// 실행 예시) 5와 9 사이의 정수의 총 합은 21입니다.

int sum(int a, int b)
{
	int result = 0;

	if (a < b)
	{
		cout << "a와 b사이의 정수의 총 합은 입니다." << endl;
		for (int i = 0; i < (b - a + 1); i++)
		{
			a++;
			result += a;
		}
	}
	cout << result << endl;

	return result;
}

int getTotal(int x, int y)
{
	int result = 0; // 정수의 합
	for (int i = x + 1; i < y; y++) // x가 5이고, y가 9일때 범위가 6,7,8이 됩니다.
	{
		result += i;
	}
	// 계산 결과에 대한 return
	return result;
}

// 3. 사용자로부터 초(second)를 입력받아 시/분/초의 형태로 출력하는 함수를 구현하세요.
// 실행 예시 ) 몇 초? 3615
//				1시간 0분 15초
void getTime(int time)
{
	int hour = 0;
	int minute = 0;
	int second = 0;

	if (time % 3600 > 0)
	{
		hour++;
		cout << hour << "시간 / ";
		if (time % 60 > 0)
		{
			minute++;
			cout << minute << "분 / ";
			second = time;
			cout << second << "초";
		}
	}

}

// 4. 사용자로부터 키를 cm 단위로 입력받아 m 단위로 환산하여 출력하는 프로그램을 작성합니다.
//    해당 함수는 키를 함수의 인자로 전달받아 m 단뒤의 값으로 return 하는 함수입니다.

// 실행 예시) 키를 cm 단위로 입력해 주세요 >> 181
//				1.81cm
float getM(int cm)
{
	return (float)cm / 100;
}


void getTime1(int time)
{
	int hour = time / 3600;
	time %= 3600;
	int minute = time / 60;
	time %= 60; // 15초를 60으로는 0번 나눠지고 15의 값이 남게 됩니다.
	int second = time;

	cout << hour << "시간 /" << minute << "분 /" << second << "초" << endl;
}

int main()
{
	// 문제 1 풀이
	for (int i = 0; i < 10; i++)
	{
		getCount();
	}
	// 문제 2 풀이
	sum(4, 10);


	//int first = 5;
	//int second = 9;

	//cout << first << "와 " << second << " 상이의 정수의 총 합은 " << getTotal(first, second) << "입니다." << endl;

	// 문제 3)
	int sec;
	cout << "몇 초 ? ";
	cin >> sec;

	getTime(second); // 1시간 / 0분 / 15초
	cout << endl;

	getTime1(second);

	// 문제 4)
	// 힌트 (float)정수는 정수를 실수로 변경해줍니다.(casting)
	int height;
	cout << "키를 cm 단위로 입력해주세요 >> ";
	cout.precision(3);
	cout << getM(height) << endl;

	// cout으로 자리수 표현하기
	// 1. cout.precision(숫자); 정수 + 소수를 포함한 출력 범위를 설정합니다.
	// ex) 18.719를 표현할거면 precision(5)로 처리됩니다.

	// 2. cout << fixed; // 해당 멸령어는 소수점을 고정해서 표현하자는 표현
	// ex) 18.719를 표현한다면
	//		cout << fixed;
	//		cout << precision(3);
	// 유의사항 : 소수점이 버려질 경우에는 반올림 처리됩니다.

	// 3. fixed를 사용했을 경우 설정이 유지되기 때문에 사용이 끝나면 설정을 해제합니다.
	//		cout.setf(ios::fixed);

	return 0;
}