#include <iostream> //cpp�� stdio.h

int MyFunc(int num)
{
	num++;
	return num;
}

int MyFunc(int a, int b)
{
	return a + b;
} //�ڹٿ� ���� �����ε� �� �Ű������� �ٸ��ٸ� �Լ� �̸��� ���Ƶ� �ȴ�.
// �ڷ����� �ٸ��ų�, �Ű������� ���� �ٸ��� �����ε� �����ϳ�, ��ȯ���� ���̴� ���� X
//ex) void, int

int Partial_Func(int num1, int num2, int num3=2)
{
	int result = num1 + num2 + num3;
	std::cout << "result : " << result << std::endl;
	return 0;
}

namespace Ruru
{
	void Func(int n) {
		std::cout << ' ' << n << std::endl;
	}
}

namespace Minu {
	void Func(int n) {
		std::cout << ' ' << n << std::endl;
	}
} //�ڹٿ��� ���� ���, namespace�� ����ϸ� ������� �Լ��� ������ �� �ְ� �̸� �ߺ��� �����ϴ�.

using namespace std; //���� std���� ����.
namespace abc = std; //Ȥ�� ��Ī�� ������ �� �ִ�.

int MyFunc2(int num = 7, int num2 = 8)
{
	return num + num2;
}

int main() {
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << ' ' << 3.14 << std::endl; //%d %s�� ���� ���� ������ �ʿ� ����.

	int val1;
	std::cout << "Insert : ";
	std::cin >> val1;
	int val2; //���� ������ ��ġ�� �����Ӵ�.
	std::cout << "Insert2 : ";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "result : " << result << std::endl;

	MyFunc(20);
	MyFunc(20, 30); //��� ����

	Partial_Func(2, 5, 3); //����Ʈ ���� ���ʺ��� ä�����Ƿ� �μ��� ��� �Է��ϸ� ������Ʈ��

	Ruru::Func(2);
	Minu::Func(2); //namespace�� ������ �Լ��� ����, ���� namespace�� �ִ� �Լ� ��� �� Minu:: ���� ����

	//�� ������ namespace�� ��� ���� �����ϴ�. using namespace std;

	int number = 20;
	cout << number << ' ' << 'A'; //���� std::�� ������ �� �ִ�. Ȥ��
	abc::cout << number << abc::endl; //��Ī���� �ۼ� ����
	
	cout << MyFunc2(10) << endl;

	



	

	return 0;
}