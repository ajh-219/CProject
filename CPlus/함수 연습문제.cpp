#include "Header.h"

// 1. �Ʒ��� ���� ��� 1�� ��� ����� �����ϵ���, �Լ� getCount()�� �����ϼ���
// ���� ��� 1
// 1 2 3 4 5 6 7 8 9 10

void getCount()
{
	static int count = 1;
	cout << count << " ";
	count++;
}
// 2. �� ���� ������ �Ű������� �Է¹޾� �� ���� ���̿� �ִ� ��� ������ ���� ���Ͽ� return�ϴ� �Լ��� �����ϰ�,
//    main �Լ����� �̸� ȣ���ϴ� ���α׷��� �ۼ��غ�����.

// ���� ����) 5�� 9 ������ ������ �� ���� 21�Դϴ�.

int sum(int a, int b)
{
	int result = 0;

	if (a < b)
	{
		cout << "a�� b������ ������ �� ���� �Դϴ�." << endl;
		for (int i = 0; i < (b - a + 1); i++)
		{
			a++;
			result += a;
		}
	}
	cout << result << endl;

	return result;
}

int getTotal(int x, int y)
{
	int result = 0; // ������ ��
	for (int i = x + 1; i < y; y++) // x�� 5�̰�, y�� 9�϶� ������ 6,7,8�� �˴ϴ�.
	{
		result += i;
	}
	// ��� ����� ���� return
	return result;
}

// 3. ����ڷκ��� ��(second)�� �Է¹޾� ��/��/���� ���·� ����ϴ� �Լ��� �����ϼ���.
// ���� ���� ) �� ��? 3615
//				1�ð� 0�� 15��
void getTime(int time)
{
	int hour = 0;
	int minute = 0;
	int second = 0;

	if (time % 3600 > 0)
	{
		hour++;
		cout << hour << "�ð� / ";
		if (time % 60 > 0)
		{
			minute++;
			cout << minute << "�� / ";
			second = time;
			cout << second << "��";
		}
	}

}

// 4. ����ڷκ��� Ű�� cm ������ �Է¹޾� m ������ ȯ���Ͽ� ����ϴ� ���α׷��� �ۼ��մϴ�.
//    �ش� �Լ��� Ű�� �Լ��� ���ڷ� ���޹޾� m �ܵ��� ������ return �ϴ� �Լ��Դϴ�.

// ���� ����) Ű�� cm ������ �Է��� �ּ��� >> 181
//				1.81cm
float getM(int cm)
{
	return (float)cm / 100;
}


void getTime1(int time)
{
	int hour = time / 3600;
	time %= 3600;
	int minute = time / 60;
	time %= 60; // 15�ʸ� 60���δ� 0�� �������� 15�� ���� ���� �˴ϴ�.
	int second = time;

	cout << hour << "�ð� /" << minute << "�� /" << second << "��" << endl;
}

int main()
{
	// ���� 1 Ǯ��
	for (int i = 0; i < 10; i++)
	{
		getCount();
	}
	// ���� 2 Ǯ��
	sum(4, 10);


	//int first = 5;
	//int second = 9;

	//cout << first << "�� " << second << " ������ ������ �� ���� " << getTotal(first, second) << "�Դϴ�." << endl;

	// ���� 3)
	int sec;
	cout << "�� �� ? ";
	cin >> sec;

	getTime(second); // 1�ð� / 0�� / 15��
	cout << endl;

	getTime1(second);

	// ���� 4)
	// ��Ʈ (float)������ ������ �Ǽ��� �������ݴϴ�.(casting)
	int height;
	cout << "Ű�� cm ������ �Է����ּ��� >> ";
	cout.precision(3);
	cout << getM(height) << endl;

	// cout���� �ڸ��� ǥ���ϱ�
	// 1. cout.precision(����); ���� + �Ҽ��� ������ ��� ������ �����մϴ�.
	// ex) 18.719�� ǥ���ҰŸ� precision(5)�� ó���˴ϴ�.

	// 2. cout << fixed; // �ش� ��ɾ�� �Ҽ����� �����ؼ� ǥ�����ڴ� ǥ��
	// ex) 18.719�� ǥ���Ѵٸ�
	//		cout << fixed;
	//		cout << precision(3);
	// ���ǻ��� : �Ҽ����� ������ ��쿡�� �ݿø� ó���˴ϴ�.

	// 3. fixed�� ������� ��� ������ �����Ǳ� ������ ����� ������ ������ �����մϴ�.
	//		cout.setf(ios::fixed);

	return 0;
}