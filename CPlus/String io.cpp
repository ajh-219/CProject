#include <iostream>
#include <string>

int main()
{

	string str;				//string�� c++�� ���ڿ��� ����� �� �� ������(Ŭ����)
	cin >> str;				// cin�� �Է��� ���� ��ü(����), >> �� �Է��� ���� ������ ����� ǥ��
	cout << str << endl;	// cout�� ����� ���� ��ü << �� cout�� ����� ����� ǥ��
							// �ۼ� ������� ó��
							// endl�� ����(�ӽ� �����)�� ���� enter �۾��� �����϶�� ���

	cin.ignore(); // c����� getchar()ó�� ���忡 ���� ���� �Է� ���� ������ �ذ��� �� ����ϴ� �ڵ�
				  // c++�� ignore()�� �̿��ϸ�, cin�� ���۸� ����� �� �ֽ��ϴ�.

	string str2;
	getline(cin, str2);		// getline�� <string>���� �������ִ� ����Դϴ�.
							// ������ ���Ե� ���ڿ��� �Է¹��� �� ����մϴ�.
							// ��� ��� : genline(cin,���ڿ�);
	cout << str2 << endl;

	return 0;
}