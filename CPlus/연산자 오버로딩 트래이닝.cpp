//#include "Header.h"
//
//// 유형별 연산자 오버로딩에 대한 연습
//// 수업때는 같이 진행해보고, 집에서는 유형 별로 연습해볼 것
//
//// 1. 단항 연산자 ++, --
//class Dot
//{
//private :
//	int x;
//	int y;
//public :
//	// 매개변수가 x = 0 처럼 값이 설정되어있는 경우를 디폴트 매개변수라고 부르며
//	// x와 y에 값을 넣지 않았을 경우에 대한 기본 값 설정 용도
//	// ex) Dot d(1,5); --> [1,5]
//	// ex) Dot d(1);   --> [1,0]
//	// ex) Dot d;     --> [0,0]
//	Dot(int x = 0, int y = 0) : x(x), y(y) {}
//
//	void Info()
//	{
//		cout << "[" << x << "," << y << "]" << endl;
//		//[2,4]
//	}
//
//	// 전위 ++ 연산
//	// ++a, --a
//	// a에 대한 +1과 -1을 먼저 진행하고, 그 후에 남은 연산을 처리합니다.
//	// ex) a = 7
//	// ++a - 3 = 5, a = 8
//	Dot &operator++(void)
//	{
//		// ++ 연산을 진행한다.
//		x++;
//		y++;
//		// 그 결과물(자기자신)을 return한다.
//		return (*this);
//	}
//	// 후위 ++ 연산
//	// a++, a--
//	// 연산을 먼저 처리하고, a에 대한 +1 또는 -1을 진행합니다.
//	// ex) a = 7
//	// a++ - 3 = 4, a = 8
//	const Dot operator++(int)
//	{
//		// 현재 정보를 기준으로 데이터 생성(이 값은 변질되지 않습니다.)
//		const Dot temp(*this);
//		// x, y에 대한 계산을 처리한다.
//		x++;
//		y++;
//		// 복제본(연산이 끝났던 데이터)를 return 한다.
//		return temp;
//	}
//};
//
//class Point
//{
//private :
//	int value1;
//	int value2;
//public :
//	Point (int value1 = 0, int value2 = 0) : value1(value1), value2(value2) {}
//	void Info() { cout << value1 << " " << value2 << endl; }
//
//	// 1. 연산자 오버로딩을 통해 대입 연산자에 대한 작업을 진행하는 경우(얕은 복사)
//	// 얕은 복사 : 복사본이 원본과 같은 참조를 공유하는 방식, 즉 같은 값을 가리키는 주소 값을 복사하는 행위
//	// 특징 : 인스턴스(클래스를 생성한 결과물)가 메모리에 새로 생성되지 않고, 주소 값만 복사해 같은 위치를 가리키는 것.
//	Point& operator=(const Point& ref)
//	{
//		value1 = ref.value1;
//		value2 = ref.value2;
//		return *this;
//	}
//
//
//
//};
//
//// 2. 연산자 오버로딩을 통해 대입 연산자에 대한 작업을 진행하는 경우(깊은 복사)
//// 깊은 복사 : 전체에 대한 복사, 객체가 가진 모든 정보에 대한 복사하는 행위
//// 특징 : 새롭게 동적 할당을 받고, 원본의 데이터를 복사합니다.
//// 주로 문자열에 대한 작업에서 자주 사용
//class Sample
//{
//private :
//	string name;
//public :
//	Sample(const string& name) : name(name)
//	{
//
//	}
//	Sample& operator=(const Sample& ref)
//	{
//		// 1. 자기 자신에게 대입 처리
//		if (this == &ref)
//			return *this;
//
//		name = ref.name;
//		return *this;
//	}
//
//	// C++ 문제를 푸는데 있어서, 기존의 C언어 형태의 풀이법(char* )를 쓰는 경우가 자주 보임
//	// 하지만 string은 기존의 char* 방식보다 더 간결하고, 자동으로 관리해주며, 안전성이 높은 설계 방식으로
//	// string을 쓰는 것을 권장합니다.
//
//	// 만약에 name이 string이 아닌 char* 였다면?
//	//Sample& operator=(const Sample& ref)
//	//{
//	//	if (this == &ref)
//	//		return *this;
//
//	//	// 기존에 있던 자원에 대한 해제
//	//	delete[] name;
//	//	// 문자열에 대한 길이 측정
//	//	// strlen(문자열) : 문자의 길이
//	//	int length = strlen(ref.name) + 1;
//	//	name = new char[length];
//	//	// 문자열 복사
//	//	// strcpy_s(기본값,길이,변경값);
//	//	strcpy_s(name, len, ref.name);
//	//	return *this;
//	//}
//
//};
//
//class Point2
//{
//private :
//	int x;
//	int y;
//public :
//	Point2 (int x = 0, int y = 0) : x(x), y(y) {}
//
//	void Info()
//	{
//		cout << "[" << x << "," << y << "]" << endl;
//	}
//
//	Point2& operator-() // a - b가 아닌 그냥 a자체에 -를 붙이는 행위이기 때문에, 대상이 없는 상태 
//	{
//		Point2 result(-x, -y);
//		return result;
//	}
//	Point2& operator~()
//	{
//		Point2 result(y, x);
//		return result;
//	}
//};
//
//int main()
//{
//	Point pos1(1, 2);
//	Point pos2 = pos1; // 복사
//
//	Point pos3(3, 4);
//	pos3 = pos1; // 대입
//
//	pos1.Info();
//	pos2.Info();
//	pos3.Info();
//
//	Point2 p1(1, 2);
//	Point2 p2 = -p1;
//	
//	p2.Info(); //[-1,-2]
//
//	Point2 p3 = ~p2;
//	p3.Info(); // [-2, -1]
//
//	return 0;
//}