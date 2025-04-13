//#include "Header.h"
//
//// friend ��� ����ϱ�
//// Ŭ������ ��� �Լ��� �ƴϳ�, �ش� Ŭ������ private ���� ������ �� �ְ� ���ݴϴ�.
//// friend ó���� �Լ��� private�� ����� �� �ִ� ��� �Լ��� ������ ������ ������ �˴ϴ�.
//
//// ���ǻ���
//// �ش� ����� ������� ���� ���� ��� �����̹Ƿ�, �������� �ʴ� ���� ������ ����մϴ�.
//// �� �ʿ��� ��쿡�� ����մϴ�.
//
//// 1. friend Ŭ���� ���
//// Ŭ������ �ٸ� Ŭ������ friend�ν� ����մϴ�.
//// �̷��� �ϸ� �ٸ� Ŭ������ private ����� ������ �� �ְ� �˴ϴ�.
//class A
//{
//private :
//	int secret_value;
//public :
//	A(int s) : secret_value(s) {}
//	friend class B;
//	// 2. friend �Լ�
//	friend void F_Function(A a)
//	{
//		cout << a.secret_value << endl;
//	}
//};
//
//class B
//{
//public :
//	void View(A a)
//	{
//		cout << a.secret_value << endl;
//	}
//};
//
//// 3. friend ������ �����ε�
//class Complex // ���Ҽ� Ŭ���� : ���� a + bi��� �θ��� ���·�
//			  // a�� �Ǽ�(real), b�� ���(imaginary)�� �ǹ��մϴ�.
//			  // �Ǽ� : ���� �˰� �ִ� �Ϲ����� ���� ����
//			  // ��� : i ��ȣ�� ���� ������ ����(�����ؼ� -1�� �Ǵ� ��)
//			  // ���п��� �Ǽ��� ���� ��ȣ ǥ���� ���ؼ� ���˴ϴ�.
//{
//public : 
//	double real;
//	double imag;
//
//	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }
//	
//	// ��� �Լ��ν��� �����ε��̶��?
//	// >> Ŭ���� ���ο��� ���� �����Ѵ�.
//	//friend Complex operator+(const Complex& other);
//	// {
//	//	return Complex(real + other.real, imag + other.imag);
//	// }
//
//	// bool operator==(const Complex& other) const
//	//{
//	//	return real == other.real && imag == other.imag;
//	//}
//
//	// friend�� �̿��� �����ε��̶��?
//	// >> Ŭ���� ���ο��� �����ϰ� �ܺο��� �����Ѵ�.
//	// �ܺο��� ������ ���Ҽ� + ���Ҽ�
//	friend Complex operator+(const Complex& a, const Complex& b);
//	// �ܺο��� ������ ���Ҽ��� ���� ��(==)
//	friend bool operator==(const Complex& a, const Complex& b);
//};
//
//// ������ �� friend �ۼ� x
//Complex operator+(const Complex& a, const Complex& b)
//{
//	return Complex(a.real + b.real, a.imag + b.imag);
//}
//bool operator==(const Complex& a, const Complex& b)
//{
//	return a.real == b.real && a.imag == b.imag;
//}
//
//void ComplexView(Complex& complex)
//{
//	cout << "��� : " << complex.real << " + " << complex.imag << "i" << endl;
//}
//void ComplexEqual(const Complex& c1, const Complex& c2)
//{
//	if (c1 == c2)
//	{
//		cout << "eqaul" << endl;
//	}
//	else
//	{
//		cout << "not eqaul" << endl;
//	}
//}
//
//int main()
//{
//	A a(10);
//	B b;
//	b.View(a);
//	// �ܺο��� ���ϰ� ��� ����
//	F_Function(a);
//
//	Complex c1(1.0, 2.0);
//	Complex c2(2.0, 3.0);
//
//	Complex c3 = c1 + c2;
//	ComplexView(c3);
//	ComplexEqual(c1, c2);
//
//
//	return 0;
//}