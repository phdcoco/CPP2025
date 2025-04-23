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
	//���� ���� �����ڸ� �������� �ʴ� ��� ���α׷����� �Ʒ��� ���� ����Ʈ ���� ������
	//�ڵ� ����
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

	���� ���縦 ���� ����
	�� ���Ǹ� �̿��ϸ� ���� �߻� X
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
		cout << "�̸� : " << showName() << "���� : " << showAge() << endl;
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
		���� �߻� : ����Ʈ ����� ���� ����, ������ ���� �ܼ� �����Ѵ�.
		���� ��ü �Ҹ� �� ������ �ȴ�.
		�� ��Ȳ������ man2�� �Ҹ�ǰ� �� ������ man1�� �Ҹ�Ǵµ�
		���� �޸� �ּҸ� �� delete�ϴ� ��Ȳ�̹Ƿ� HEAP ������ �����.

		��� : ���� ���縦 ���� ���� �����ڸ� ���� �����ؾ� �Ѵ�.
	*/

	return 0;
}

//call by reference�� �� �����ϴ�.

// 12~13�� ���� �ʿ�