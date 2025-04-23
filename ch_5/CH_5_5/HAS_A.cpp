#include <iostream>

using namespace std;

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shut()
	{
		cout << "��~" << endl;
		bullet--;
	}
};

// has - a ����, Police ��ü�� Gun ��ü�� �����ϰų� �����Ҽ� �ִ�.
class Police
{
private:
	int handcuffs;
	Gun* pistol; //������ ���� �ִ� ���, ���� ��� ��� �ٷ� �� ����
public:
	Police(int bnum, int bcuff) : handcuffs(bcuff)
	{
		if (bnum > 0)
			pistol = new Gun(bnum); // �Ѿ� ������ �� ���� ������Ŵ
		else
			pistol = NULL; //�� ���� ����
	}
	void PutHandcuff()
	{
		cout << "��Ҵ�~" << endl;
		handcuffs--;
	}
	void Shut()
	{
		if (pistol == NULL)
			cout << "�Ѿ��� ����!!!" << endl;
		else
			pistol->Shut();
	}
	~Police()
	{
		if (pistol != NULL)
			delete pistol;
	}
};