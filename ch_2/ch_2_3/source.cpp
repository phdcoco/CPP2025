#include <iostream>

using namespace std;

class Person
{
public:
	void walk() {
		cout << "ȣ�� �Ϸ�";
	}
};



void errSwap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void Swap(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main() {
	int num1 = 2000;
	int& num2 = num1; //num2�� num1�� ������, ���ĺ��ʹ� num1���� �ϴ� ������ num2�� ����. ������ ����� ���� num1�� ��Ī�̶�� �����ϸ� ��. ��ǻ� ����.

	num2 = 2047;
	cout << "VAL: " << num1 << endl; //2000���� ����������, �������� num2�� ���� 2047�� ����Ǿ����Ƿ� num1 ���� ����, �Ѹ���.

	cout << "REF: " << num2 << endl;
	//�ʱ�ȭ ���Ŀ� ����Ű�� ��� ���� �Ұ�. ?
	//������ �����ϱ� , �뵵

	int& num99 = num1;
	int& num9999 = num1; //�������� ������ ������ ����.
	num9999 = num2; //�̶�, num9999�����ڰ� num2�� ����Ű���� ����Ǵ°� �ƴ϶�, num1�� ���� num2�� ����ȴٴ� ����. �����Ϳ� �ٸ���.
	// �� ������ �ʱ�ȭ ���Ŀ� ����Ű�� ��� ���� �Ұ���� ��.

	int* pointer = &num1;
	pointer = &num2; //�����ʹ� �����ڿ� �ٸ��� ����Ű�� ��� ������ �����Ӵ�.

	int& same = num1;
	// int& same = num2; ���� ����! �ѹ� ������ ����� ������ �� ����.


	// int& ref = 20; or ; or NULL; ���ڳ� �������ϱ� Ȥ�� NULL�ʱ�ȭ �Ұ���.

	Person person;
	Person* man = &person;
	man->walk(); //�����ʹ� ->�� ��� ����

	Person& woman = person;
	woman.walk(); //�����ڴ� .�� ��� ����



	int num3 = 10;
	int num4 = 20;

	cout << "�ʱⰪ" << num3 << " "<< num4 << endl;
	errSwap(num3, num4);
	cout << "�����͸� �������� ������ ���� �ٲ��� �ʴ´�." << num3 << " " << num4 << endl;
	Swap(&num3, &num4);
	cout << "�����͸� �����ϸ� ���� �ٲ��." << num3 << " " << num4 << endl;

	return 0;
}
//!! ��ȯ�� ���� �κ� ���� pdf 29��
//
//void func(const int &ref) <- const���� ������ �ȹٲ�µ� �� reference�� �̿��ϴ°�
// ���� �ٲ� ���ο� ������ ������ �ʿ䰡 ����. �����ͷ� �����ϱ� ������ �޸𸮸� �Ƴ� �� ����.


/*
Python <call by value>

def change_value(x):
	x = x + 1
	print(x)

x = 5
print(x)
change_value(x)
print(x)

������ ��°��� 5�̴�. �ݿ����� ����. <<int�� immutable ��ü�̹Ƿ�.

def change_list(lst): <call by reference>
	lst.append(4)
	print(lst)

lst = [1, 2, 3]
print(lst)
change_list(lst)
print(lst)

[1, 2, 3, 4] �ݿ���. << ����Ʈ�� Mutable ��ü�̹Ƿ�.

C++�� value vs reference ������ �� �ִ�.

*/