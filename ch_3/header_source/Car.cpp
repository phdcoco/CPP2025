/*Car.cpp������ �Լ� ���� ��, ������ �Ѵ�.
���⼭�� include�� �� "Car.h"�� �ϸ� �ȴ�.
���� cpp�� �� �������Ѵٴ� ��!!
*/

#include "Car.h"


void classCar::InitMembers(const char* ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
}

void classCar::ShowCarState()
{
	cout << "andigh";
}