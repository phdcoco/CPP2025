#include <iostream>

using namespace std;

class SoSimple {
private:
	int n;
public:
	SoSimple(int p) : n(p) {}
};

class SoSimple2 {
private:
	int m;
public:
	explicit SoSimple2(int o) : m(o) {}
};

class CopyCall
{
private:
	int num;
public:
	CopyCall(int n) : num(n)
	{}
	CopyCall(const CopyCall& copy) : num(copy.num)
	// �ٸ� CopyCall ��ü�� ������ �޴� ����, �� ��ü�� num ���� ���� ��ü�� num�� ����.
	{
		cout << "CopyCall(const CopyCall& copy) ȣ���" << endl;
	}

	CopyCall& Addnum(int n)
	{
		num += n;
		return *this;
	}

	void ShowData()
	{
		cout << "num : " << num << endl;
	}
};

void CallFuncObj(CopyCall ob)
{
	ob.ShowData();
}

CopyCall CopyFuncObj(CopyCall ob) // ���� ������ ���޵Ǿ� ���纻 ob
{
	cout << "return ����" << endl;
	return ob; //�̶� ob�� ��ü���� return �� �� ������ ���ϵ�!
	// �� ���� �� copy �޼ҵ尡 ȣ��Ǿ��ٴ� �Ҹ�
	// �׷��� ȣ����� �ι� ����Ʈ���� Ȯ���� �� ����
}

int main() {
	SoSimple sim1 = 1; //sim1�� ��ü����, ���������� int�� ���� ����� �ް� �ִ�.
	// SoSimple2 sim2 = 2; // explicit���� ������ ��ü�� �� ��ȯ�� �����Ѵ�. ���� �߻�


	cout << "���� �Լ� ȣ�� x" << endl;
	CopyCall obj(7);
	cout << "���� ȣ���Ѵ�?" << endl;
	CallFuncObj(obj); //�̶� �Ű������� obj�� ������, ������!! ����!!! (pass by value)
	// �׷��� �Լ� ���ο��� ������ ���� ��ü�� �ϳ� ����� CopyCall ���� �����Լ� ȣ����
	// �� �� �� ��ü�� num���� ������ �����ִ� ��.

	cout << "---------------------------" << endl;

	CopyFuncObj(obj).Addnum(30).ShowData();
	obj.ShowData(); //���� obj���� �״�� �����Ǿ� �����Ƿ� 7


	return 0;
}