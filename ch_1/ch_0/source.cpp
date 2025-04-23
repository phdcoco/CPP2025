#include <iostream> //cpp의 stdio.h

int MyFunc(int num)
{
	num++;
	return num;
}

int MyFunc(int a, int b)
{
	return a + b;
} //자바와 같이 오버로딩 시 매개변수가 다르다면 함수 이름은 같아도 된다.
// 자료형이 다르거나, 매개변수의 수가 다르면 오버로딩 성립하나, 반환형의 차이는 만족 X
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
} //자바에는 없는 기능, namespace를 사용하면 사용자의 함수를 저장할 수 있고 이름 중복이 가능하다.

using namespace std; //이제 std생략 가능.
namespace abc = std; //혹은 별칭을 설정할 수 있다.

int MyFunc2(int num = 7, int num2 = 8)
{
	return num + num2;
}

int main() {
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << ' ' << 3.14 << std::endl; //%d %s와 같은 서식 지정이 필요 없다.

	int val1;
	std::cout << "Insert : ";
	std::cin >> val1;
	int val2; //변수 선언의 위치가 자유롭다.
	std::cout << "Insert2 : ";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "result : " << result << std::endl;

	MyFunc(20);
	MyFunc(20, 30); //모두 가능

	Partial_Func(2, 5, 3); //디폴트 값은 왼쪽부터 채워지므로 인수를 모두 입력하면 업데이트됨

	Ruru::Func(2);
	Minu::Func(2); //namespace로 생성된 함수의 사용법, 같은 namespace에 있는 함수 사용 시 Minu:: 생략 가능

	//쓸 때마다 namespace를 계속 쓰면 불편하다. using namespace std;

	int number = 20;
	cout << number << ' ' << 'A'; //이제 std::를 생략할 수 있다. 혹은
	abc::cout << number << abc::endl; //별칭으로 작성 가능
	
	cout << MyFunc2(10) << endl;

	



	

	return 0;
}