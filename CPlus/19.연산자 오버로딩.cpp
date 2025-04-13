//#include <iostream>
//using namespace std;
//
//// C++�� Ŭ���� ����� ���Ǽ��� ���ؼ� �����ڿ� ���� �����Ǹ� ������ �� �ֽ��ϴ�.
//// C++�� ���� �Լ�, Ŭ������ ���� ������ �����ε��� �����մϴ�.
//
//// ���ǻ���
//// 1. �������� ��� �� ��ü�� �����¢�� �ʴ´�.
//// 2. C++���� �������� �ʴ� �����ڸ� ������� ������ �� ����.
//
//class Product
//{
//public :
//	int count;
//	Product(int count) : count(count) {}
//	// �Լ� �ڿ� �ٴ� const�� �� �Լ� ������ �ع��� ���� ������ �� �� ������ �����մϴ�.
//	// Product �ڿ� ���� &�� ������(reference)��, call by reference
//	Product operator+(Product& other) const
//	{
//		//count = 5; // ���� ���� ������ �� �� ���⿡ ����� ������ ������ �� �ֽ��ϴ�.
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
//// ���� �Լ��ν��� ������ �����ε�
//
//void operator+(Product& product)
//{
//	product.count++;
//	cout << "+�� �����մϴ�." << endl;
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