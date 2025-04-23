#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

/*
���⿡ Car�� ���� �پ��� ����� define �� �� ����
#define ID_LEN 10
#define MAX_SPD 50
�̷�������.

�׷��� �� ������� enum�� �̿��� ������ ���� �� �ִ�.
*/

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 100,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
} //ù ��° ���
//����ü, ���� �ִ� �����͵� ��� ����
struct Car
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 100,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	}; //�� ��° ���

	char gamerID[ID_LEN];
	int fuelGauge;
	int carSpeed;
	char examgpe[CAR_CONST::MAX_SPD];
	// ù ��° ��� �̿�� ��� �̿� ���. :: ���� ��.

	
	

	void ShowCarState()	
	{
		cout << "���� : " << fuelGauge; //���̴ϱ� �׳� ����
	}
};

void ShowCarState(Car& car) //����ü �Լ��� �ۿ��� ����� �̷���.
{
	cout << "���� : " << car.fuelGauge; //���̴ϱ� .���� ����
}

//----------------------------------------------------------------------------------

class classCar //���� struct�� class�� �ٲٱ⸸ �ϸ� �ȴ�. ������ ���̷δ�.
	//�� ����� ������ �� �������� �����Ѵ�. ����, ������ �������� ������ �߰��� �ʿ��ϴ�.
{
private: //���� Ŭ���������� ���� ����
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int carSpeed;
public: //Ŭ���� �� ���� ���� ����
	//protected : ����ϴ� �ڽ� Ŭ���������� ���� ����
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	//void Accel();
	//void Break();
};

void classCar::InitMembers(const char* ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
}

void classCar::ShowCarState()
{
	cout << "andigh";
}
/*
	Ŭ���� ���ο��� �Լ� �� �ᵵ ������, C++������ ����Լ� ���� �ϰ�
	�ۿ��� ::�� �̿��� ���� �����Ѵ�.
	Ŭ������ ������ ������� .h�� �����ϰ�, ��������� �̸��� Ŭ������ �̸��� ���� �Ѵ�.
	����Լ��� ��ü�� �ҽ����� .cpp�� �����ϰ� �ҽ����� �̸� ���� Ŭ������ �̸��� ���� �Ѵ�.
	header_source ������Ʈ�� ������ ���� �� �� �ִ�.
*/



int main() {

	Car basicCar = { "RURU", 100, 0 }; //����ü ���� �ʱ�ȭ ���.
	basicCar.ShowCarState(); //����ü ��
	ShowCarState(basicCar); //����ü ��

	classCar advancedCar;
	advancedCar.InitMembers("DIDI", 100);
	advancedCar.ShowCarState();

	return 0;
}