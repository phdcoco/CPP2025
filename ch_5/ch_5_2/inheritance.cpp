#include <iostream>

using namespace std;

class SoBase
{
private:
	int baseNum;
public:
	SoBase() : baseNum(20) //�⺻ ������
	{
		cout << "SoBase()" << endl;
	}
	SoBase(int n) : baseNum(n) //�Ű����� ������
	{
		cout << "SoBase(int n)" << endl;
	}
	void ShowBaseData() //baseNum�� ����ϴ� �޼ҵ�
	{
		cout << baseNum << endl;
	}

	~SoBase()
	{
		cout << "~SoBase() : " << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;
public:
	SoDerived() : derivNum(30) //����Ʈ������ -> ����Ŭ������ ������ ���� ȣ��
	{ //�θ� Ŭ������ �����ڸ� �ʱ�ȭ�� �ǹ��� �ִ� �ߴµ� ����. void ������ ȣ��
		cout << "SoDerived()" << endl;
	}
	SoDerived(int n) : derivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}
	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2) //�����ڸ� ���� ���� -> ����Ŭ���� ������ ȣ�� ����
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}
	void ShowDerivDate()
	{
		ShowBaseData(); //SoBase Ŭ������ ���
		cout << derivNum << endl;
	}
	~SoDerived()
	{
		cout << "~SoDerived() : " << derivNum << endl;
	} // �Ҹ������ ���������� �ݴ��̴�. �Ҹ��� �ڽ� Ŭ��������
		// ������ ������ �̿��ϹǷ� �󸶸�������
};

int main() {
	SoDerived dr1;
	dr1.ShowDerivDate(); //�θ� ���� �ʱ�ȭ x, �θ� �⺻ ������ 20, �ڽ� 30 ���
	
	SoDerived dr2(12);
	dr2.ShowDerivDate();

	SoDerived dr3(23, 24);
	dr3.ShowDerivDate();

	return 0;
}