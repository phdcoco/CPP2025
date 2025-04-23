#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
public:
	char name[20];
	int age;
	Person() {} //�⺻ ������
	Person(const char* pname, int page) { //������ ������
		strcpy(name, pname);
		age = page;
	}
};

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n) //�̴ϼȶ����� �ʱ�ȭ
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
		return this; //���� ��ü�� �ּҸ� ��ȯ�Ѵ�!
	}
};

//this�� Ŭ���� ���ο��� ��� ������ "�ڱ� �ڽ��� ����Ű�� ������"


int main() {
	Person* arr[3]; //��ü�� �ּ� ����� �迭
	arr[0] = new Person("RURU", 24);
	arr[1] = new Person("DIDI", 25);
	arr[2] = new Person("MINU", 99);

	Person arr2[3]; //��ü ��ü�� �迭�� ����
	Person* parr2 = new Person[3];

	//------------------------------------------------

	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); //sim1�� �ּҸ� ptr1�� ����
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData(); //�����ͷ� ����� ��ü�� ���� �Լ� ȣ�� �� -> ���

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	
	//���� ���, ��ü�� �ּҿ� this�� �̿��� �ּҰ� �������� �� �� �ִ�.

	return 0;
}