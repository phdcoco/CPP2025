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
	Person(int myage, const char* myname) : age(myage) //age�� myage��� �ʱ�ȭ
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

class UnivStudent : public Person //Person Ŭ������ public ����Ѵ�.
{
private:
	char major[50];
public:
	UnivStudent(const char* myname, int myage, const char* mymajor) : Person(myage, myname)
	{
		strcpy(major, mymajor); //�ڽ� Ŭ������ �����ڴ� �θ� Ŭ������ ����� �ʱ�ȭ�ؾ߸� �Ѵ�.
		// private ����� ���� Ŭ���������� ������ �Ұ����ϴ� �θ�Ŭ���� �����ڸ� ���� ȣ���ؼ� �ʱ�ȭ�ϴ°���.
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou(); //Person Ŭ������ ��ӹ޾����Ƿ� Person�� ����Լ� ��� ����
		cout << "My major is " << major << endl << endl;
	}
};

int main() {
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	return 0;
}