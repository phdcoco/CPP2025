#include <iostream>

using namespace std;

class Age
{
private:
	int age;
public:
	Age(int n)
	{
		age = n;
	}
	int oldAge()
	{
		return age += 1;
	}

	void printAge()
	{
		cout << "현재 나이는 " << oldAge() << "살 입니다." << endl;
	}
};

class TwoNumber
{
private:
	int num1;
	int num2;
public:
	TwoNumber(int num11, int num2)
	{
		this->num1 = num11;
		this->num2 = num2;
	}
};

int main() {
	Age manAge(20);
	manAge.printAge();

	TwoNumber one(5, 9);

	return 0;
}


