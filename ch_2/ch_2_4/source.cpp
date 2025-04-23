#include <iostream>

using namespace std;

class Person {
public:
	int age;

	Person(int age) {
		this->age = age;
	}

	void growOlder() {
		age++;
	}
};

int& RefRetFuncOne(int& ref) //��ȯ���� �����̰� ��ȯ�� ������ �޴� ���
{
	ref++;
	return ref;
}

int RefRetFuncTwo(int& ref) //���� ��ȯ
{
	ref++;
	return ref;
}

int RefRetFuncThree(int ref) //���� ��ȯ
{
	ref++;
	return ref;
}

int& RefRetFuncFour(int ref) //�� �ڵ�� �߸��� �ڵ��̴�. ���������� �Է¹ް� ������ ��ȯ�� �� ����.
{
	ref++;
	return ref;
}

int HappyFunc(const int& ref)
{
	// ref++; const�� ������ ��� ref�� �̿��� ���� ������ ������� �ʴ´�.
	return ref;
}




int main() {
	//Person person(10); //�� ��� ���� �޸𸮿� ����	
	Person* person = new Person(10); //�� �޸𸮿� �������� ����, person�� ��ü�� �ƴ϶�, ���� ������ ��ü�� ����Ű�� ��������
	Person* ptrPerson = person; //�̷��� �ϸ� ptrPerson ���� Person�� ����Ű�� �����Ͱ� ��. ���� Person�� ����Ű�� �� ���� ������ �����Ͱ� ���� ����.

	ptrPerson = new Person(20); //�����ʹ� ������ �ٸ��� ��� ���� ����. �̷��� �ϸ� person�� �ٸ� �����Ͱ� �Ǿ����. 10�� 20.

	//---------------------------------------------------------------------------------------------------------------------------------------------------------

	int num1 = 1;
	int& num2 = RefRetFuncOne(num1); //��ȯ�� ���� num2 ���� ����. ���� num2�� num1�� �Ѹ���. �Լ��� ���� num1�� 1���� -> 1���� 2�� ��. num2�� 2��.
	num1++; //num1�� 1 �����Ͽ� 3�� ��. num2 ���� 3���� ����.
	num2++; //num2�� 2 �����Ͽ� 4�� ��. num1 ���� 4�� ����.

	cout << num1 << " " <<  num2 << endl; //num1, num2 ��� 4�� �Ǵ� ��� ����.

	int num3 = 1;
	int num4 = RefRetFuncOne(num3); //��ȯ�� ���� num4�� ���� Ÿ���� ���. �ϴ� num4�� 2�� ��. �̶�!! �Լ��� ��ȯ���� ��������, �Ϲ� ������ �޾ұ� ������ num4�� �׳� �� 2�� �ް� ��.
	// !! �� �Ϲ� ������ ���� ������ ������ �������� �ǰ�, �׳� ���� ���� �޴� ������ �Ǿ������. !!
	num3 += 1; //2 + 1 �ϴ� 3�� ��.
	num4 += 100; //2 + 100 �ϴ� 102�� ��. �̶�!! num3�� �׷� 102�ΰ�? �̹��� �ƴϴ�. ������ ���������ϱ�!!

	cout << num3 << " " << num4 << endl;

	int num5 = 1;
	int num6 = RefRetFuncTwo(num5); //�� ���� num6�� ������ ����, �׸��� �Լ��� ��ȯ�� ���� �����̴�. �ܼ� �� �����.
	num5 += 1; //2 + 1 = 3
	num6 += 100; //2 + 100 = 102
	cout << num5 << " " << num6 << endl;

	/*
	int num7 = 1;
	int& num8 = RefRetFuncTwo(num7); ����! ��ȯ���� �����ε� ������ ���� �� ����.
	*/

	int num7 = 1;
	int num8 = RefRetFuncThree(num7); //�Լ��� ����� 1+1=2�ϱ� num8�� 2�̴�.
	num7 += 1; // �̶�!! 2 + 1 = 3�ΰ�? �׷��� �ʴ�. �̹� �Լ��� ������ �޴� ���� �ƴ϶� ������ �Ű��� �޾Ҵ�. Call by Value�� ���� num7�� ������ 1�̴�.
	num8 += 100;
	cout << num7 << " " << num8 << endl; //2 102�� �������� �ִ�.

	/*
	���⼭ ! Call by Value�� Call by Reference�� �������� ���� �� �� �ִ�.
	One�� Two�Լ��� �Ű������� ������ �޾Ұ�, �� ���� ���ο��� ������ ������ ���ƴ�.
	�׷��� Three�Լ��� �Ű������� ������ �޾Ұ�, �� ���� ���ο��� ������ ������ ��ġ�� �ʾҴ�.
	*/

	int num9 = 1;
	int& num10 = RefRetFuncFour(num9); //���� �߻�, �����Ⱚ�� ��ȯ�ȴ�.
	num9 += 1; //Call by Value�� ���� 1 + 1 = 2
	num10 += 100; //����

	cout << num9 << " " << num10 << endl; // 2�� �����Ⱚ ��ȯ



	return 0;
}