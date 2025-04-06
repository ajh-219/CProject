//#include "Header.h"
//
//// 클래스 : 정보 은닉
//// 객체의 내부 구현을 외부로부터 숨기는 것을 의미합니다.(private)
//
//// 캡슐화(Encapsulation)
//// 객체의 상태와 동작을 하나로 묶어서 그 기능을 통해 상호 작용하도록 합니다.
//
//// --> 가려줄 정보를 private로 설정, 그 데이터에 대한 설정, 접근을 할 수 있는
////	   기능(메소드)을 public으로 제공합니다.
//
//class Student
//{
//private :
//// 학번과 학생의 이름은 외부에서 함부로 수정되면 안되는 값
//	int sid;
//	string sname;
//public :
//// set 함수 : void 형태의 함수이면서, 설정하려는 데이터의 형태를 매개변수로 가지고 있습니다.
////			  전달받은 값으로, 객체의 상태를 초기화하는 기능을 가지고 있습니다.
////			  set + 변수명으로 이름을 만들어주며, 보통 변수의 앞글자를 대문자로 작성합니다.
//
//// get 함수 : 데이터의 형태를 변환 타입으로 가지는 형태의 함수입니다.
////			  매개변수를 따로 가지지 않습니다.
////			  해당 데이터 값을 그대로 return하는 기능을 가지고 있습니다.
////			  get + 변수명으로 이름을 만들어주며, 보통 변수의 앞글자를 대문자로 작성합니다.
//
//// == 개발자들 간에 사용되는 코드 표기법 ==
//// >> 반드시 지키는 규칙보다는 암묵적인 약속
//// 
//// 1. 카멜 표기법(Camel Case) : 주로 JS, Python
//// >> 변수, 메소드,클래스,파일 이름을 작성할 때 사용
//// 
//// 	규칙)
//// 	1. 단어의 첫 글자는 소문자
//// 	2. 두번째 단어부터는 첫 글자를 대문자
////	3. 단어 사이에 공백, 특수 문자 x, 단어는 연결해서 사용
//// 	ex) myValue, userName...
//// 
//// 파스칼 표기법(Pascal Case) : 주로 Java, C#
//// 
//// 규칙)
//// 1. 모든 단어의 첫 글자를 대문자
//// 2. 단어 사이에 공백, 특수 문자 x, 단어는 연결해서 사용
//// ex) UserDeviceService, UserProfile...
//// 
//// 3. 스네이크 표기법(Snake case) : 주로 데이터베이스
//// 
//// 규칙)
//// 1. 단어와 단어 사이를 밑줄(_)로 구분합니다.
//// 2. 각 단어는 소문자로 작성되고, 밑줄을 통해 연결합니다.
//// ex) first_name, phone_number...
//
//	void setSID(int id)
//	{
//		sid = id;
//	}
//	int getSID()
//	{
//		return sid;
//	}
//	void setSname(string name)
//	{
//		sname = name;
//	}
//	string getSname()
//	{
//		return sname;
//	}
//};
//
//
//// 다음 조건에 맞는 클래스 Point를 설계하시오.
//// 1. Point 클래스는 좌표를 표현하기 위한 클래스입니다.
//// 2. 좌표는 x축과 y축
//// 3. x축과 y축에 대한 set/get 함수를 구현합니다.
//// 4. Point 클ㄹ래스에는 현재의 좌표를 출력하는 함수 show()를 가지고 있습니다.
////    좌표의 기준에 따라 몊 사분면인지도 같이 출력합니다.
////    사분면이란? 좌표의 위치에 따라 제 1,2,3,4 사분면으로 부릅니다.
//// 출력 예시) 좌표가 10,5일 경우
////			 좌표 : (10, 5) 제 1사분면 
//// 5. main 코드에서 Point 객체 p1을 선언합니다.
//// 6. p1의 축을 설정합니다.
//// 7. show()를 통해 해당 좌표를 출력합니다.
//
//
//// 1. x,y에 대한 선언, x,y에 대한 s/g 구현 --> 1점
//// 2. show() 구현
////		1. public 영역에 대한 구현 -- 1점
////		2. 좌표에 대한 출력 -- 1점
////		3. 사분면에 대한 출력 -- 3점
//// 3. main에서 객체 p1 선언 -- 1점
//// 4. 실행 시 콘솔 창에 정상적으로 출력 4점
//class Point 
//{
//private :
//	int xPoint;
//	int yPoint;
//public :
//	void setxPoint(int x)
//	{
//		x = xPoint;
//	}
//	void setyPoint(int y)
//	{
//		y = yPoint;
//	}
//	int getxPoint()
//	{
//		return xPoint;
//	}
//	int getyPoint()
//	{
//		return yPoint;
//	}
//	void show()
//	{
//		int quad = 0;
//		// 사분명에 대한 설명
//		if (xPoint > 0 && yPoint > 0)
//		{
//			quad = 1;
//			//cout << "(" << xPoint << "," << yPoint << ")" << "제 1 사분면" << endl;
//		}
//		else if (xPoint < 0 && yPoint > 0)
//		{
//			quad = 2;
//			//cout << "(" << xPoint << "," << yPoint << ")" << "제 2 사분면" << endl;
//		}
//		else if (xPoint < 0 && yPoint < 0)
//		{
//			quad = 3;
//			//cout << "(" << xPoint << "," << yPoint << ")" << "제 3 사분면" << endl;
//		}
//		else if (xPoint > 0 && yPoint < 0)
//		{
//			quad = 4;
//			//cout << "(" << xPoint << "," << yPoint << ")" << "제 4 사분면" << endl;
//		}
//
//		// 좌표 출력
//		if (quad == 0)
//		{
//			cout << "원점" << endl;
//		}
//		else
//		{
//			cout << "제" << quad << "사분면" << endl;
//		}
//		
//	}
//
//};
//
//int main()
//{
//	// student01 객체 선언
//	Student student01;
//
//	// student01 객체의 데이터 초기화
//	student01.setSID(2025451); // 2025년 4월 5일에 등록되 1번째 학생
//	student01.setSname("이희민"); // 학생 이름
//
//	// student01 객체의 정보 출력
//	cout << "학번 : " << student01.getSID() << " 이름 : " << student01.getSname() << endl;
//
//	Point p1;
//	p1.setxPoint(10);
//	p1.setyPoint(5);
//	p1.show();
//
//	return 0;
//}