#include <iostream>

using namespace std;

class Point
{
private: //���� ����
	int x;
	int y;
public:
	Point(int xpos, int ypos)
	{
		x = xpos;
		y = ypos;
	}
	//bool InitMembers(int xops, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	//bool SetY(int ypos);

	
};

/*
	const �Լ� �������� ���� Ŭ������ ����� ��������� �� ���� �Ұ�
	const �Լ��� const�Լ��� �ƴ� �Լ��� ȣ������ ���Ѵ�. -> Ȥ���� �߻��� ���� ����
	const ����Լ��� const�� ���ȭ �� ��ü ���� ����

	-> const�� �ƴ� �Լ��� const ��ü�� 
*/

bool Point::SetX(int xpos) // ��� ���� �� ����
{
	if (0 > xpos || xpos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}

class Rectangle //�� ���, �� �ϴ� �ٲ�� �� ����
{
private:
	Point upLeft;
	Point lowRight; //������ �����������. ��� �̴�� ����ϸ� �����Ⱚ ����Ǿ� �ȵȴ�.
	//initmember ���� ����� ��������.
public:
	//Rectangle(const int& x1, const int& y1, const int& x2, const int& y2); //�̴ϼȶ����� ��� �ʱ�ȭ
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) : upLeft(x1, y1), lowRight(x2, y2)
	{} //�̰� �ȿ��� �ʱ�ȭ�ϴ� ��.  :�� �̿��Ͽ� �ʱ�ȭ�ϰ�, {}���� ��ĭ���� ���� �ȴ�.
	bool InitMembers(const Point& ul, const Point& lr)
	{
		if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
		{
			cout << "�߸��� ��ġ���� ����" << endl;
			return false;
		}
		upLeft = ul;
		lowRight = lr;
		return true;
	}

	
};
/*
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2)
{
	//��ĭ���� �ֵ� ��. �̰��� �ۿ��� �̴ϼȶ����� �ʱ�ȭ �ϴ� ��.
}

/*
	�츮�� ���� name = n; age = a; �̷� ������ �ʱ�ȭ �ߴ�.
	�׷��� �̰��� �� �� �۾��ϴ� ���̴�. name ����鼭 �� ��, n �����ϸ鼭 �� ��

	�̴ϼȶ������� ������ �ϸ鼭 ���� ���ϴ� ������ �ٷ� �ʱ�ȭ �����ִ� ����̴�.

	Ư�� const ��� ������ �����ڸ��� ���� �����ϱ� ��ٷο�Ƿ� ������ �̴ϼȶ������� ����ؾ� �Ѵ�.

*/

// ~�Լ�() { delete } �ϸ� �Ҹ���, �޸� ���� ����