/*Car.cpp에서는 함수 정의 즉, 구현을 한다.
여기서는 include할 때 "Car.h"만 하면 된다.
메인 cpp도 또 만들어야한다는 점!!
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