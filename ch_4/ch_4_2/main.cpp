#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
public:
	char name[20];
	int age;
	Person() {} //기본 생성자
	Person(const char* pname, int page) { //포인터 생성자
		strcpy(name, pname);
		age = page;
	}
};

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n) //이니셜라이저 초기화
	{
		cout << "num=" << num << ", ";
		cout << "address = " << this << endl;
	}

	void ShowSimpleData()
	{
		cout << num << endl;
	}

	SoSimple* GetThisPointer()
	{
		return this; //현재 객체의 주소를 반환한다!
	}
};

//this는 클래스 내부에서 사용 가능한 "자기 자신을 가리키는 포인터"


int main() {
	Person* arr[3]; //객체의 주소 저장용 배열
	arr[0] = new Person("RURU", 24);
	arr[1] = new Person("DIDI", 25);
	arr[2] = new Person("MINU", 99);

	Person arr2[3]; //객체 자체를 배열로 만듦
	Person* parr2 = new Person[3];

	//------------------------------------------------

	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); //sim1의 주소를 ptr1에 저장
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData(); //포인터로 선언된 객체의 내부 함수 호출 시 -> 사용

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	
	//실행 결과, 객체의 주소와 this를 이용한 주소가 동일함을 알 수 있다.

	return 0;
}