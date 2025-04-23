#include <iostream>

using namespace std;

class SoSimple {
private:
	int n;
public:
	SoSimple(int p) : n(p) {}
};

class SoSimple2 {
private:
	int m;
public:
	explicit SoSimple2(int o) : m(o) {}
};

class CopyCall
{
private:
	int num;
public:
	CopyCall(int n) : num(n)
	{}
	CopyCall(const CopyCall& copy) : num(copy.num)
	// 다른 CopyCall 객체를 참조로 받는 중임, 그 객체의 num 값이 현재 객체의 num과 같다.
	{
		cout << "CopyCall(const CopyCall& copy) 호출됨" << endl;
	}

	CopyCall& Addnum(int n)
	{
		num += n;
		return *this;
	}

	void ShowData()
	{
		cout << "num : " << num << endl;
	}
};

void CallFuncObj(CopyCall ob)
{
	ob.ShowData();
}

CopyCall CopyFuncObj(CopyCall ob) // 역시 값으로 전달되어 복사본 ob
{
	cout << "return 이전" << endl;
	return ob; //이때 ob는 객체지만 return 될 때 값으로 리턴됨!
	// 그 말은 또 copy 메소드가 호출되었다는 소리
	// 그래서 호출됨이 두번 프린트됨을 확인할 수 있음
}

int main() {
	SoSimple sim1 = 1; //sim1은 객체지만, 묵시적으로 int와 같은 취급을 받고 있다.
	// SoSimple2 sim2 = 2; // explicit으로 생성된 객체는 형 변환을 금지한다. 오류 발생


	cout << "아직 함수 호출 x" << endl;
	CopyCall obj(7);
	cout << "이제 호출한다?" << endl;
	CallFuncObj(obj); //이때 매개변수로 obj가 들어갔지만, 값으로!! 받음!!! (pass by value)
	// 그래서 함수 내부에서 가상의 복사 객체를 하나 만들어 CopyCall 복사 생성함수 호출함
	// 그 후 그 객체의 num값을 가져와 보여주는 것.

	cout << "---------------------------" << endl;

	CopyFuncObj(obj).Addnum(30).ShowData();
	obj.ShowData(); //원래 obj값은 그대로 보존되어 있으므로 7


	return 0;
}