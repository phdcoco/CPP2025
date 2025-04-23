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
		cout << "빵~" << endl;
		bullet--;
	}
};

// has - a 관계, Police 객체가 Gun 객체를 소유하거나 조종할수 있다.
class Police
{
private:
	int handcuffs;
	Gun* pistol; //경찰이 총이 있는 경우, 없는 경우 모두 다룰 수 있음
public:
	Police(int bnum, int bcuff) : handcuffs(bcuff)
	{
		if (bnum > 0)
			pistol = new Gun(bnum); // 총알 있으면 총 만들어서 소유시킴
		else
			pistol = NULL; //총 없는 경찰
	}
	void PutHandcuff()
	{
		cout << "잡았당~" << endl;
		handcuffs--;
	}
	void Shut()
	{
		if (pistol == NULL)
			cout << "총알이 없어!!!" << endl;
		else
			pistol->Shut();
	}
	~Police()
	{
		if (pistol != NULL)
			delete pistol;
	}
};