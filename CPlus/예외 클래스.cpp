#include "Header.h"
// ���� Ŭ������ ���� �����θ�, ���α׷� ������ Ư�� ������ ���� ���ó��
// ��Ա� �����մϴ�.

// ���ῡ ���õ� ���� ��Ȳ
class ConnectException
{
public :
	void NormalMessage()
	{
		cout << "�������� ������ �����߽��ϴ�." << endl;
	}
	// �޼ҵ�(�Լ�) ���� �� �̸��� ������, �Ű������� �ٸ���
	// �ٸ� �ڵ�� ����մϴ�.(�޼ҵ� �����ε�)
	string LoginFailMessage(string id)
	{
		cout << "���̵� �������� �ʽ��ϴ�." << endl;
		return id; // throw�� ���� void���� string���� ����
	}
	int LoginFailMessage(int pw)
	{
		cout << "��й�ȣ�� �߸� �Էµƽ��ϴ�." << endl;
		return pw; // throw�� ���� void���� int�� ����
	}
};

class Server //: public ConnectException
{
private :
	void Login()
	{
		if (onoff == false)
			throw ConnectException();

		// if-esle�� ���� ���� �ʰ� if���� �����ص� �˴ϴ�.
		// throw�� ���� �������� ����
		string input_id;
		int input_pw;

		cout << "���̵� �Է����ּ��� >> ";
		cin >> input_id;
		cout << "��й�ȣ�� �Է����ּ��� >> ";
		cin >> input_pw;

		if (id != input_id)
			throw ConnectException().LoginFailMessage(id);
		if (pw != input_pw)
			throw ConnectException().LoginFailMessage(pw);

		cout << "�α��� ����" << endl;
	}
	void OnOFF()
	{
		if (onoff == false)
		{
			cout << "�α��� ���� ����" << endl;
		}
		else 
		{
			onoff = true;
			cout << "�α��� ���� ��" << endl;
		}
	}
public :
	// ���������δ� Ŭ������ ����� has A�� ó���ϴ� �� ��õ
	// �׽�Ʈ�� ���� ���� ������ ����, ���� ���α׷�ó�� ¥���� ������ ���� Ŭ������ ���� �������ִ� ���� ��õ
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
			cout << "1. �α��� ���� 2. ���� �� ���� ���� 3. ���� >> ";
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
// 1. �α��� ��� �����ϱ�
// 2. �α��� ���� ��Ȳ�� ���� ������ ���� catch �ϱ�

// �ʿ��ϴٸ� Ŭ������ �߰��� �� ���� �˴ϴ�.

int main()
{
	Server server("SBS", false);
	try
	{
		server.Menu();
	}
	catch (ConnectException& e) // Ŭ������ ���� catch �ÿ��� Ŭ������&���� �����Ѵ�.
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