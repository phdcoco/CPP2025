#include <iostream>

using namespace std;

class Point
{
private: //정보 은닉
	int x;
	int y;
public:
	Point(int xpos, int ypos)
	{
		x = xpos;
		y = ypos;
	}
	//bool InitMembers(int xops, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	//bool SetY(int ypos);

	
};

/*
	const 함수 내에서는 동일 클래스에 선언된 멤버변수의 값 변경 불가
	const 함수가 const함수가 아닌 함수를 호출하지 못한다. -> 혹여나 발생할 문제 차단
	const 멤버함수만 const로 상수화 된 객체 접근 가능

	-> const가 아닌 함수를 const 객체로 
*/

bool Point::SetX(int xpos) // 벗어난 범위 값 차단
{
	if (0 > xpos || xpos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}

class Rectangle //좌 상단, 우 하단 바뀌는 것 차단
{
private:
	Point upLeft;
	Point lowRight; //생성자 만들어진거임. 대신 이대로 사용하면 쓰레기값 저장되어 안된다.
	//initmember 통해 제대로 정해주자.
public:
	//Rectangle(const int& x1, const int& y1, const int& x2, const int& y2); //이니셜라이저 기반 초기화
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) : upLeft(x1, y1), lowRight(x2, y2)
	{} //이건 안에서 초기화하는 법.  :를 이용하여 초기화하고, {}안은 빈칸으로 놔도 된다.
	bool InitMembers(const Point& ul, const Point& lr)
	{
		if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
		{
			cout << "잘못된 위치정보 전달" << endl;
			return false;
		}
		upLeft = ul;
		lowRight = lr;
		return true;
	}

	
};
/*
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2)
{
	//빈칸으로 둬도 됨. 이것은 밖에서 이니셜라이저 초기화 하는 법.
}

/*
	우리는 원래 name = n; age = a; 이런 식으로 초기화 했다.
	그런데 이것은 두 번 작업하는 셈이다. name 만들면서 한 번, n 대입하면서 한 번

	이니셜라이저는 생성을 하면서 내가 원하는 값으로 바로 초기화 시켜주는 기술이다.

	특히 const 멤버 변수는 만들자마자 값에 접근하기 까다로우므로 무조건 이니셜라이저를 사용해야 한다.

*/

// ~함수() { delete } 하면 소멸자, 메모리 공간 해제