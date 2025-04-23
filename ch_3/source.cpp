#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

/*
여기에 Car를 위해 다양한 상수를 define 할 수 있음
#define ID_LEN 10
#define MAX_SPD 50
이런식으로.

그런데 이 상수들을 enum을 이용해 별도로 묶을 수 있다.
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
} //첫 번째 방법
//구조체, 연관 있는 데이터들 묶어서 관리
struct Car
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 100,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	}; //두 번째 방법

	char gamerID[ID_LEN];
	int fuelGauge;
	int carSpeed;
	char examgpe[CAR_CONST::MAX_SPD];
	// 첫 번째 방법 이용시 상수 이용 방법. :: 쓰면 됨.

	
	

	void ShowCarState()	
	{
		cout << "연료 : " << fuelGauge; //안이니까 그냥 접근
	}
};

void ShowCarState(Car& car) //구조체 함수를 밖에서 만들면 이렇게.
{
	cout << "연료 : " << car.fuelGauge; //밖이니까 .으로 접근
}

//----------------------------------------------------------------------------------

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
	클래스 내부에서 함수 다 써도 되지만, C++에서는 멤버함수 선언만 하고
	밖에서 ::를 이용해 마저 설명한다.
	클래스의 선언은 헤더파일 .h에 삽입하고, 헤더파일의 이름은 클래스의 이름과 같게 한다.
	멤버함수의 몸체는 소스파일 .cpp에 정의하고 소스파일 이름 역시 클래스의 이름과 같게 한다.
	header_source 프로젝트를 가보면 쉽게 알 수 있다.
*/



int main() {

	Car basicCar = { "RURU", 100, 0 }; //구조체 변수 초기화 방법.
	basicCar.ShowCarState(); //구조체 안
	ShowCarState(basicCar); //구조체 밖

	classCar advancedCar;
	advancedCar.InitMembers("DIDI", 100);
	advancedCar.ShowCarState();

	return 0;
}