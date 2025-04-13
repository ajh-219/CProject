//#include "Header.h"
//
//// 순수 가상 함수
//// virtual 반환타입 함수명(매개변수) = 0;
//// 가상 함수 중에서 기능을 구현하지 않고 0을 대입해서, 만들어진 함수
//
//// 추상 클래스(abstract class)
//// 순수 가상 함수를 1개라도 가지고 있는 클래스를 의미합니다.
//// 특징) 해당 클래스를 상속받아 만들어지는 클래스는 반드시
////		 가상 함수에 대한 재정의를 진행해야 사용할 수 있습니다.
//
//// 사용 목적
//// 1. 가상 함수는 기본적으로 재정의를 전제로 설정하는 코드이므로
////	  따로 기능까지 구현해줄 필요가 없기 때문
//
//// 2. 가상 함수에 대한 구현을 강제해 다형성에 대한 보장을 받기 위해서
////	  --> 구현하지 않으면 오류 발생
//
//class Item
//{
//public :
//	virtual void Info() = 0;
//	virtual void sample()
//	{
//		cout << "샘플 기능" << endl;
//	}
//};
//class Potion : public Item
//{
//public :
//	void Info()
//	{
//
//	}
//};
//
//// 순수 가상 함수의 장점
//// 1. 제공자는 다형성을 보장받을 수 있습니다.
//// 2. 개발의 난잡해지지 않고 정형화된 개발로 진행될 수 있음.
//// 3. 개발자는 형태에 대한 설계를 크게 고민하지 않고 전달받은 내용을 기반으로 바로 개발 투입 가능
//
//// 연습 문제) 다음 조건에 맞는 클래스를 구현하시오.
//// [실행 결과]
//// [바나나] 바나나는 매우 단 노란색 과일입니다.
//// ================================================
//// 이 과일의 이름은 바나나 입니다.
//// [사과] 사과는 아침에 먹기 좋은 빨간색 과일입니다.
//// ================================================
//// 이 과일의 이름은 사과입니다.
//// 현재 5개를 가지고 있습니다.
//
//class Fruit
//{
//public :
//	string name;
//	int count;
//	virtual void show() = 0;
//};
//class Banana : public Fruit
//{
//public :
//	Banana(string name, int count)
//	{
//		this->name = name;
//		this->count = count;
//	}
//	void show()
//	{
//		cout << "이 과일의 이름은 " << name << " 입니다." << endl;
//		cout << "현재" << count << "개를 가지고 있습니다." << endl;
//
//	}
//};
//class Apple : public Fruit
//{
//public:
//	Apple(string name, int count)
//	{
//		this->name = name;
//		this->count = count;
//	}
//	void show()
//	{
//		cout << "이 과일의 이름은 " << name <<" 입니다." << endl;
//		cout << "현재" << count << "개를 가지고 있습니다." << endl;
//	}
//};
//
//int main()
//{
//	//Item* item = new Potion();
//
//	Fruit* fruit = new Banana("바나나", 10);
//	fruit->show();
//
//	fruit = new Apple("사과", 5);
//	fruit->show();
//
//	return 0;
//}