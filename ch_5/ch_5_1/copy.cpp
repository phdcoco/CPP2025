#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{}
	//따로 복사 생성자를 정의하지 않는 경우 프로그램에서 아래와 같은 디폴트 복사 생성자
	//자동 삽입
	SoSimple(const SoSimple& copy) : num1(copy.num1), num2(copy.num2)
	{}
};

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	/*
	Person(const Person& copy) : age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	깊은 복사를 위한 정의
	이 정의를 이용하면 오류 발생 X
	*/

	const char* showName() const
	{
		return name;
	}

	int showAge() const
	{
		return age;
	}

	void ShowPersonInfo() const
	{
		cout << "이름 : " << showName() << "나이 : " << showAge() << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	Person man1("LEE dong woo", 24);
	Person man2 = man1;

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	/*
		오류 발생 : 디폴트 복사는 얕은 복사, 포인터 값도 단순 복사한다.
		따라서 객체 소멸 시 문제가 된다.
		이 상황에서는 man2가 소멸되고 그 다음에 man1이 소멸되는데
		같은 메모리 주소를 또 delete하는 상황이므로 HEAP 오류가 생긴다.

		결론 : 깊은 복사를 위해 복사 생성자를 따로 정의해야 한다.
	*/

	return 0;
}

//call by reference가 더 유리하다.

// 12~13쪽 정리 필요