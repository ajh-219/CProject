//#include <iostream>
//using namespace std;
//// 해당 코드에서는 std 네임스페이스를 사용하겠습니다.
//// 이 코드를 사용할 경우 std::cout 대신 cout만 써도 작동됩니다.
//
//// using을 통해 코드 내에서 해당 네임스페이스를 포함시키는게 가능합니다.
//
//// namespace 만들기
//
////namespace 네임스페이트명
////{
////	변수;
////	함수;
////	구조체;
////	클래스;
////}
////완성된 값을 기준으로 네임스페이스명::변수;, 네임스페이스명::함수();처럼 사용할 수 있습니다.
//// ex) std::string, std::cout
//
//namespace Server
//{
//	void run()
//	{
//		cout << "서버와의 연결을 진행합니다." << endl;
//	}
//}
//namespace Client
//{
//	void run()
//	{
//		cout << "클라이언트의 연결을 진행합니다." << endl;
//	}
//}
//
//int main()
//{
//	cout << "아우 편하다." << endl;
//	std::cout << "그대로 써도 상관은 없다." << std::endl;
//	
//	// 네임스페이스::함수명();
//	Server::run();
//	Client::run();
//
//	// main에서 네임스페이스 접근 허용
//	using namespace Server;
//
//	run(); // 이 때의 run()은 Server의 run이다.
//
//	return 0;
//}