#include "Header.h"
// 예외 클래스를 따로 만들어두면, 프로그램 내에서 특정 오류에 대한 사용처로
// 써먹기 용이합니다.

// 연결에 관련된 예외 상황
class ConnectException
{
public :
	void NormalMessage()
	{
		cout << "서버와의 연결이 실패했습니다." << endl;
	}
	// 메소드(함수) 설계 시 이름이 같지만, 매개변수가 다르면
	// 다른 코드로 취급합니다.(메소드 오버로딩)
	string LoginFailMessage(string id)
	{
		cout << "아이디가 존재하지 않습니다." << endl;
		return id; // throw를 위해 void에서 string으로 변경
	}
	int LoginFailMessage(int pw)
	{
		cout << "비밀번호가 잘못 입력됐습니다." << endl;
		return pw; // throw를 위해 void에서 int로 변경
	}
};

class Server //: public ConnectException
{
private :
	void Login()
	{
		if (onoff == false)
			throw ConnectException();

		// if-esle로 따로 쓰지 않고 if문만 설계해도 됩니다.
		// throw에 의해 끊어지기 때문
		string input_id;
		int input_pw;

		cout << "아이디를 입력해주세요 >> ";
		cin >> input_id;
		cout << "비밀번호를 입력해주세요 >> ";
		cin >> input_pw;

		if (id != input_id)
			throw ConnectException().LoginFailMessage(id);
		if (pw != input_pw)
			throw ConnectException().LoginFailMessage(pw);

		cout << "로그인 성공" << endl;
	}
	void OnOFF()
	{
		if (onoff == false)
		{
			cout << "로그인 상태 오프" << endl;
		}
		else 
		{
			onoff = true;
			cout << "로그인 상태 온" << endl;
		}
	}
public :
	// 개인적으로는 클래스를 만들어 has A로 처리하는 걸 추천
	// 테스트를 위해 고정 값으로 설계, 이후 프로그램처럼 짜려면 계정에 대한 클래스를 따로 설계해주는 것을 추천
	string id = "sample124";
	int pw = 123123;

	string server_name;
	bool onoff;
	Server(string s, bool o) : server_name(s), onoff(0) {}
	void Menu()
	{
		while(true)
		{
			int select;
			cout << "1. 로그인 진행 2. 서버 온 오프 설정 3. 종료 >> ";
			cin >> select;

			switch (select)
			{
			case 1:
				Login(); break;
			case 2:
				Login(); break;
			case 3:
				exit(0);
			}
		}
	}
};
// 1. 로그인 기능 연출하기
// 2. 로그인 실패 상황에 따라 적절한 예외 catch 하기

// 필요하다면 클래스를 추가로 더 만들어도 됩니다.

int main()
{
	Server server("SBS", false);
	try
	{
		server.Menu();
	}
	catch (ConnectException& e) // 클래스에 대한 catch 시에는 클래스명&으로 접근한다.
	{
		e.NormalMessage();
	}
	catch (int i)
	{
		server.Menu();
	}
	catch (string s)
	{
		server.Menu();
	}


	return 0;
}