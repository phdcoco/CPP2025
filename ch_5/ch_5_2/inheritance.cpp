#include <iostream>

using namespace std;

class SoBase
{
private:
	int baseNum;
public:
	SoBase() : baseNum(20) //기본 생성자
	{
		cout << "SoBase()" << endl;
	}
	SoBase(int n) : baseNum(n) //매개변수 생성자
	{
		cout << "SoBase(int n)" << endl;
	}
	void ShowBaseData() //baseNum을 출력하는 메소드
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
	SoDerived() : derivNum(30) //디폴트생성자 -> 수퍼클래스의 생성자 먼저 호출
	{ //부모 클래스의 생성자를 초기화할 의무가 있다 했는데 없음. void 생성자 호출
		cout << "SoDerived()" << endl;
	}
	SoDerived(int n) : derivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}
	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2) //생성자를 새로 정의 -> 수퍼클래스 생성자 호출 안함
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}
	void ShowDerivDate()
	{
		ShowBaseData(); //SoBase 클래스의 멤버
		cout << derivNum << endl;
	}
	~SoDerived()
	{
		cout << "~SoDerived() : " << derivNum << endl;
	} // 소멸순서는 생성순서와 반대이다. 소멸은 자식 클래스부터
		// 스택의 원리를 이용하므로 몬마린지알지
};

int main() {
	SoDerived dr1;
	dr1.ShowDerivDate(); //부모 생성 초기화 x, 부모 기본 생성값 20, 자식 30 출력
	
	SoDerived dr2(12);
	dr2.ShowDerivDate();

	SoDerived dr3(23, 24);
	dr3.ShowDerivDate();

	return 0;
}