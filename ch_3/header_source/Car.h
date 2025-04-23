/*
	��� ���Ͽ����� Ŭ������ �Լ����� �����Ѵ�.
	���⼭ include�ϸ� �ٸ������� �� �ٽ� include �� �ʿ䰡 ����.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

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
}

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