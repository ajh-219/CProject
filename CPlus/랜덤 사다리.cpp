#include <iostream>
#include <random> // c++���� �������ִ� ����

// c��� ������� ����ϴ� ����
// c����� rand() �Լ��� �̿��� ���� ���� ó���մϴ�.
#include <cstdlib> // c���� <stdlib.h>
#include <ctime>   // c���� <time.h>

// ������ : c++���� �������ִ� ������ ���� ���(�˰���)�� ǰ����
//		   c���� ���� �������� �����ϴ�.

using namespace std;

int main()
{
	// 1. ���� ��ġ(����̽�)�� �����մϴ�.
	random_device rd;

	// 2. ��ġ�� ���� �ʱ�ȭ
	mt19937 gen(rd());

	// 3. 1 ~ 5 ������ ������ �̰ڽ��ϴ�.
	// uniform_int<int>�� ���� ���� �̽��ϴ�.
	// dis(����, ��) ���� �ۼ� ����
	uniform_int<int> dis(1, 5);

	int result = dis(gen);
	
	cout << "��� : " << dis(gen) << endl;

	// switch��(���Ǻ��ٴ� �� �� ��ü�� ���� ��쿡 ���� ���˴ϴ�.)
	// switch(����)
	// {
	//	case �� :
	//		������ �ش� ���� ������ ���� �� ������ ��ɹ�;
	// }

	switch (result)
	{
		case 1 :
			cout << "100����Ʈ" << endl;
			break;
		case 2 :
			cout << "200����Ʈ" << endl;
			break;
		case 3 :
			cout << "300����Ʈ" << endl;
			break;
		case 4 :
			cout << "400����Ʈ" << endl;
			break;
		case 5 :
			cout << "500����Ʈ" << endl;
			break;
	}

	return 0;
}