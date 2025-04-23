#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage, const char* myname) : age(myage) //age는 myage라고 초기화
	{
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person //Person 클래스를 public 상속한다.
{
private:
	char major[50];
public:
	UnivStudent(const char* myname, int myage, const char* mymajor) : Person(myage, myname)
	{
		strcpy(major, mymajor); //자식 클래스의 생성자는 부모 클래스의 멤버를 초기화해야만 한다.
		// private 멤버는 유도 클래스에서도 접근이 불가능하니 부모클래스 생성자를 직접 호출해서 초기화하는거임.
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou(); //Person 클래스를 상속받았으므로 Person의 멤버함수 사용 가능
		cout << "My major is " << major << endl << endl;
	}
};

int main() {
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	return 0;
}