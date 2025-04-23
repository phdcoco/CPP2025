/*
	헤더 파일에서는 클래스와 함수들을 선언한다.
	여기서 include하면 다른데서는 또 다시 include 할 필요가 없다.
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

class classCar //위의 struct를 class로 바꾸기만 하면 된다. 외형적 차이로는.
	//단 멤버를 접근할 때 차이점이 존재한다. 또한, 별도의 접근제어 선언이 추가로 필요하다.
{
private: //깉은 클래스에서는 접근 가능
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int carSpeed;
public: //클래스 밖 어디든 접근 가능
	//protected : 상속하는 자식 클래스까지만 접근 가능
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	//void Accel();
	//void Break();
};