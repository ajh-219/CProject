//#include "Header.h"
//
//// friend 기능 사용하기
//// 클래스의 멤버 함수는 아니나, 해당 클래스의 private 값에 접근할 수 있게 해줍니다.
//// friend 처리된 함수는 private를 사용할 수 있는 멤버 함수와 동등한 권한을 가지게 됩니다.
//
//// 유의사항
//// 해당 기능은 비공개에 대한 접근 허용 문법이므로, 남용하지 않는 것을 전제로 사용합니다.
//// 꼭 필요한 경우에만 사용합니다.
//
//// 1. friend 클래스 등록
//// 클래스를 다른 클래스의 friend로써 등록합니다.
//// 이렇게 하면 다른 클래스의 private 멤버에 접근할 수 있게 됩니다.
//class A
//{
//private :
//	int secret_value;
//public :
//	A(int s) : secret_value(s) {}
//	friend class B;
//	// 2. friend 함수
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
//// 3. friend 연산자 오버로딩
//class Complex // 복소수 클래스 : 흔히 a + bi라고 부르는 형태로
//			  // a는 실수(real), b는 허수(imaginary)를 의미합니다.
//			  // 실수 : 흔히 알고 있는 일반적인 실제 숫자
//			  // 허수 : i 기호가 붙은 가상의 숫자(제곱해서 -1이 되는 수)
//			  // 수학에서 실수에 대한 부호 표현을 위해서 사용됩니다.
//{
//public : 
//	double real;
//	double imag;
//
//	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }
//	
//	// 멤버 함수로써의 오버로딩이라면?
//	// >> 클래스 내부에서 직접 구현한다.
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
//	// friend를 이용한 오버로딩이라면?
//	// >> 클래스 내부에서 선언하고 외부에서 구현한다.
//	// 외부에서 진행할 복소수 + 복소수
//	friend Complex operator+(const Complex& a, const Complex& b);
//	// 외부에서 진행할 복소수에 대한 비교(==)
//	friend bool operator==(const Complex& a, const Complex& b);
//};
//
//// 구현할 때 friend 작성 x
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
//	cout << "결과 : " << complex.real << " + " << complex.imag << "i" << endl;
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
//	// 외부에서 편하게 사용 가능
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