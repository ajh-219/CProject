//#include <iostream>
//using namespace std;
//
//// C++는 클래스 사용의 편의성을 위해서 연산자에 대한 재정의를 진행할 수 있습니다.
//// C++는 전역 함수, 클래스에 대한 연산자 오버로딩이 가능합니다.
//
//// 유의사항
//// 1. 연산자의 기능 그 자체가 변경되짖는 않는다.
//// 2. C++에서 제공하지 않는 연산자를 대상으로 진행할 수 없다.
//
//class Product
//{
//public :
//	int count;
//	Product(int count) : count(count) {}
//	// 함수 뒤에 붙는 const는 이 함수 내에서 멈버에 대한 변경을 할 수 없도록 설정합니다.
//	// Product 뒤에 붙은 &는 참조자(reference)로, call by reference
//	Product operator+(Product& other) const
//	{
//		//count = 5; // 값에 대한 변경을 할 수 없기에 계산의 변질을 막아줄 수 있습니다.
//		Product result(count + other.count);
//		return result;
//	}
//	Product operator-(Product& other) const
//	{
//		Product result(count - other.count);
//		return result;
//	}
//
//	void Info()
//	{
//		cout << count << endl;
//	}
//};
//
//// 전역 함수로써의 연산자 오버로딩
//
//void operator+(Product& product)
//{
//	product.count++;
//	cout << "+를 진행합니다." << endl;
//}
//
//int main()
//{
//	Product A(10);
//	Product B(5);
//
//	Product C = A + B;
//	Product D = A - B;
//
//	A.Info();
//	B.Info();
//	C.Info();
//	D.Info();
//
//	+A;
//	A.Info();
//
//	return 0;
//}