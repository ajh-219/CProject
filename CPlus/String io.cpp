#include <iostream>
#include <string>

int main()
{

	string str;				//string은 c++의 문자열을 사용할 때 쓸 데이터(클래스)
	cin >> str;				// cin은 입력을 위한 객체(도구), >> 로 입력한 값을 저장할 대상을 표현
	cout << str << endl;	// cout은 출력을 위한 객체 << 로 cout이 출력할 대상을 표현
							// 작성 순서대로 처리
							// endl은 버퍼(임시 저장소)를 비우고 enter 작업을 진행하라는 명령

	cin.ignore(); // c언어의 getchar()처럼 문장에 대한 연속 입력 시의 문제를 해결할 때 사용하는 코드
				  // c++의 ignore()를 이용하면, cin의 버퍼를 비워줄 수 있습니다.

	string str2;
	getline(cin, str2);		// getline은 <string>에서 제공해주는 기능입니다.
							// 공백이 포함된 문자열을 입력받을 때 사용합니다.
							// 사용 방법 : genline(cin,문자열);
	cout << str2 << endl;

	return 0;
}