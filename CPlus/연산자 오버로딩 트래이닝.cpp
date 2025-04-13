//#include "Header.h"
//
//// ������ ������ �����ε��� ���� ����
//// �������� ���� �����غ���, �������� ���� ���� �����غ� ��
//
//// 1. ���� ������ ++, --
//class Dot
//{
//private :
//	int x;
//	int y;
//public :
//	// �Ű������� x = 0 ó�� ���� �����Ǿ��ִ� ��츦 ����Ʈ �Ű�������� �θ���
//	// x�� y�� ���� ���� �ʾ��� ��쿡 ���� �⺻ �� ���� �뵵
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
//	// ���� ++ ����
//	// ++a, --a
//	// a�� ���� +1�� -1�� ���� �����ϰ�, �� �Ŀ� ���� ������ ó���մϴ�.
//	// ex) a = 7
//	// ++a - 3 = 5, a = 8
//	Dot &operator++(void)
//	{
//		// ++ ������ �����Ѵ�.
//		x++;
//		y++;
//		// �� �����(�ڱ��ڽ�)�� return�Ѵ�.
//		return (*this);
//	}
//	// ���� ++ ����
//	// a++, a--
//	// ������ ���� ó���ϰ�, a�� ���� +1 �Ǵ� -1�� �����մϴ�.
//	// ex) a = 7
//	// a++ - 3 = 4, a = 8
//	const Dot operator++(int)
//	{
//		// ���� ������ �������� ������ ����(�� ���� �������� �ʽ��ϴ�.)
//		const Dot temp(*this);
//		// x, y�� ���� ����� ó���Ѵ�.
//		x++;
//		y++;
//		// ������(������ ������ ������)�� return �Ѵ�.
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
//	// 1. ������ �����ε��� ���� ���� �����ڿ� ���� �۾��� �����ϴ� ���(���� ����)
//	// ���� ���� : ���纻�� ������ ���� ������ �����ϴ� ���, �� ���� ���� ����Ű�� �ּ� ���� �����ϴ� ����
//	// Ư¡ : �ν��Ͻ�(Ŭ������ ������ �����)�� �޸𸮿� ���� �������� �ʰ�, �ּ� ���� ������ ���� ��ġ�� ����Ű�� ��.
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
//// 2. ������ �����ε��� ���� ���� �����ڿ� ���� �۾��� �����ϴ� ���(���� ����)
//// ���� ���� : ��ü�� ���� ����, ��ü�� ���� ��� ������ ���� �����ϴ� ����
//// Ư¡ : ���Ӱ� ���� �Ҵ��� �ް�, ������ �����͸� �����մϴ�.
//// �ַ� ���ڿ��� ���� �۾����� ���� ���
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
//		// 1. �ڱ� �ڽſ��� ���� ó��
//		if (this == &ref)
//			return *this;
//
//		name = ref.name;
//		return *this;
//	}
//
//	// C++ ������ Ǫ�µ� �־, ������ C��� ������ Ǯ�̹�(char* )�� ���� ��찡 ���� ����
//	// ������ string�� ������ char* ��ĺ��� �� �����ϰ�, �ڵ����� �������ָ�, �������� ���� ���� �������
//	// string�� ���� ���� �����մϴ�.
//
//	// ���࿡ name�� string�� �ƴ� char* ���ٸ�?
//	//Sample& operator=(const Sample& ref)
//	//{
//	//	if (this == &ref)
//	//		return *this;
//
//	//	// ������ �ִ� �ڿ��� ���� ����
//	//	delete[] name;
//	//	// ���ڿ��� ���� ���� ����
//	//	// strlen(���ڿ�) : ������ ����
//	//	int length = strlen(ref.name) + 1;
//	//	name = new char[length];
//	//	// ���ڿ� ����
//	//	// strcpy_s(�⺻��,����,���氪);
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
//	Point2& operator-() // a - b�� �ƴ� �׳� a��ü�� -�� ���̴� �����̱� ������, ����� ���� ���� 
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
//	Point pos2 = pos1; // ����
//
//	Point pos3(3, 4);
//	pos3 = pos1; // ����
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