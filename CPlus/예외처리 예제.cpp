//#include "Header.h"
//
//
//int main()
//{
//	int a, b;
//	
//	// 수정 전 코드 : 나누기를 진행하는 프로그램
//	// 발생할 수 있는 예외 상황 : 0으로 나누는 경우
//	//							a가 0이면, 모든 나누기가 0이라 불필요함.
//	//							b가 0이면, 분모가 0이기 때문에 나누기가 불가능함.
//
//// 1. try문 작성
//	try
//	{
//		cout << "나누기를 진행합니다. 정수 a와 b의 값을 순서대로 입력해주세요. ";
//		cin >> a >> b;
//// 2. throw문 작성(throw문은 강제로 예외를 발생시키는 코드)
//		if (a == 0) throw a; // throw 던질 대상;을 적으면 catch가 인식합니다.
//
//		if (b == 0) throw "[Exception] Divison Zero";
//
//		cout << "계산 결과" << a / b << endl;
//	}
//// 3. catch문 작성
//// catch문은 여러 개를 설계할 수 있습니다.
//	catch (int a)
//	{
//		cout << "a가 0이니 나누지 않겠습니다." << endl;
//	}
//	catch (const char* message) // catch를 잡을 때, throw를 활용하고 있다면 적은 값에 마우스를 가져다 대면
//								// 어떤 데이터인지 확인할 수 있고, 거기에 맞게 넣어주면 됩니다.
//	{
//		cout << message << endl;
//	}
//
//	return 0;
//}