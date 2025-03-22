#include <iostream>
#include <random> // c++에서 제공해주는 랜덤

// c언어 방식으로 사용하는 랜덤
// c언어의 rand() 함수를 이용해 랜덤 값을 처리합니다.
#include <cstdlib> // c언어에서 <stdlib.h>
#include <ctime>   // c언어에서 <time.h>

// 차이점 : c++에서 제공해주는 랜덤의 구성 요소(알고리즘)의 품질이
//		   c언어에서 쓰던 랜덤보다 좋습니다.

using namespace std;

int main()
{
	// 1. 랜덤 장치(디바이스)를 생성합니다.
	random_device rd;

	// 2. 장치에 대한 초기화
	mt19937 gen(rd());

	// 3. 1 ~ 5 사이의 랜덤을 뽑겠습니다.
	// uniform_int<int>는 범위 값을 뽑습니다.
	// dis(시작, 끝) 범위 작성 영역
	uniform_int<int> dis(1, 5);

	int result = dis(gen);
	
	cout << "결과 : " << dis(gen) << endl;

	// switch문(조건보다는 값 그 자체를 고르는 경우에 많이 사용됩니다.)
	// switch(변수)
	// {
	//	case 값 :
	//		변수가 해당 값을 가지고 있을 때 실행할 명령문;
	// }

	switch (result)
	{
		case 1 :
			cout << "100포인트" << endl;
			break;
		case 2 :
			cout << "200포인트" << endl;
			break;
		case 3 :
			cout << "300포인트" << endl;
			break;
		case 4 :
			cout << "400포인트" << endl;
			break;
		case 5 :
			cout << "500포인트" << endl;
			break;
	}

	return 0;
}