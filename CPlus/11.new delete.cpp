//#include <iostream>
//using namespace std;
//
//// new와 delete는 코드 내에서 데이터를 만들고, 삭제할 수 있는 동적 할당을 의한 코드
//// 일반적으로는 사용자가 데이터를 만들어 프로그램에 포함되지만(정적 할당)
//// 동적 할당으로 코드를 짜면, 실행 과정에서 만들어지기에 프로그램 용량이 포함이 안되고,
//// 반남을 통해 필요없을 때 용량을 비울 수 있게 되면서 유연하게 프로그램을 구현할 수 있습니다.
//
//// c언어데서의 동적 할당 방법
//// 1. #include <stdlib.h>
//// 2. 자료형* 변수명 = malloc(sizeof(자료형) * 크기); <-를 통해 변수 동적 할당(new)
//// 3. free(변수명); <-를 통해 변수 할당 해제(delete)
//
//// c++에서의 동적 할당 방법
//// 1. 자료형* 변수명 = new 자료형;
//// 2. delete(변수명);
//
//// 동적할당은 기본적으로, 포인터 변수에 메모리를 할당해주는 행위입니다.
//
//int main()
//{
//	// 1. 생성 후 값 설정까지
//	int* pValue = new int;
//	*pValue = 1;
//	cout << *pValue << endl;
//	delete pValue;
//	// delete의 경우, 따로 제거하지 않으면 프로그램에 해당 데이터가 삭제되지 않고 남게 되면서
//	// 누적되면 데이터 누수 현상 발생
//
//	// 2. 생성 및 초기화
//	// 자료형* 변수명 = new int(값);
//	// 해당 값을 가진 변수가 동적 할달됩니다.
//	int* pValue2 = new int(5);
//	cout << *pValue2 << endl;
//	delete pValue2;
//
//	// 3. 배열에 대한 동적 할당
//	// 자료형* 배열명 = new 자료형[배열의 크기];
//	int* array_Value = new int[5];
//
//	// 반복문을 이용해 배열 내의 값 넣기
//	for (int i = 0; i < 5; i++)
//	{
//		array_Value[i] = i + 1;
//	}
//	cout << "-- array_Value -- " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << array_Value[i] << " ";
//	}
//	cout << endl;
//
//	// 배열 제거
//	// delete[] 배열명;
//	delete[] array_Value;
//
//
//	// 4. 배열 생성 및 초기화 동적할당
//	// 자료형* 배열명 = new 자료형[배열의 크기] {요소1, 요소2, 요소3...}
//	string* array_Value2 = new string[5]{ "딸기", "바나나", "복숭아", "레몬", "포도" };
//
//	cout << "-- array_Value2 -- " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << array_Value2[i] << " ";
//	}
//	cout << endl;
//
//	delete[] array_Value2;
//
//	return 0;
//}