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

int& RefRetFuncOne(int& ref) //반환형이 참조이고 반환도 참조로 받는 경우
{
	ref++;
	return ref;
}

int RefRetFuncTwo(int& ref) //값을 반환
{
	ref++;
	return ref;
}

int RefRetFuncThree(int ref) //값을 반환
{
	ref++;
	return ref;
}

int& RefRetFuncFour(int ref) //이 코드는 잘못된 코드이다. 지역변수를 입력받고 참조를 반환할 수 없다.
{
	ref++;
	return ref;
}

int HappyFunc(const int& ref)
{
	// ref++; const로 선언할 경우 ref를 이용한 값의 변경은 허용하지 않는다.
	return ref;
}




int main() {
	//Person person(10); //이 경우 스택 메모리에 생성	
	Person* person = new Person(10); //힙 메모리에 동적으로 생성, person은 객체가 아니라, 힙에 생성된 객체를 가리키는 포인터임
	Person* ptrPerson = person; //이렇게 하면 ptrPerson 또한 Person을 가리키는 포인터가 됨. 이제 Person을 가리키는 두 개의 동일한 포인터가 생긴 것임.

	ptrPerson = new Person(20); //포인터는 참조와 다르게 대상 변경 가능. 이렇게 하면 person과 다른 포인터가 되어버림. 10과 20.

	//---------------------------------------------------------------------------------------------------------------------------------------------------------

	int num1 = 1;
	int& num2 = RefRetFuncOne(num1); //반환할 곳인 num2 역시 참조. 이제 num2와 num1은 한몸임. 함수에 따라 num1이 1증가 -> 1에서 2가 됨. num2도 2임.
	num1++; //num1이 1 증가하여 3이 됨. num2 역시 3으로 변경.
	num2++; //num2가 2 증가하여 4가 됨. num1 역시 4로 변경.

	cout << num1 << " " <<  num2 << endl; //num1, num2 모두 4가 되는 결과 도출.

	int num3 = 1;
	int num4 = RefRetFuncOne(num3); //반환할 곳인 num4가 변수 타입인 경우. 일단 num4는 2가 됨. 이때!! 함수의 반환형이 참조지만, 일반 변수로 받았기 때문에 num4는 그냥 값 2를 받게 됨.
	// !! 즉 일반 변수로 값을 받으면 참조는 끊어지게 되고, 그냥 정수 값을 받는 변수가 되어버린다. !!
	num3 += 1; //2 + 1 하니 3이 됨.
	num4 += 100; //2 + 100 하니 102가 됨. 이때!! num3도 그럼 102인가? 이번엔 아니다. 참조가 끊어졌으니까!!

	cout << num3 << " " << num4 << endl;

	int num5 = 1;
	int num6 = RefRetFuncTwo(num5); //이 경우는 num6이 변수인 상태, 그리고 함수의 반환값 역시 변수이다. 단순 값 복사다.
	num5 += 1; //2 + 1 = 3
	num6 += 100; //2 + 100 = 102
	cout << num5 << " " << num6 << endl;

	/*
	int num7 = 1;
	int& num8 = RefRetFuncTwo(num7); 오류! 반환값이 변수인데 참조로 받을 수 없음.
	*/

	int num7 = 1;
	int num8 = RefRetFuncThree(num7); //함수의 결과는 1+1=2니까 num8은 2이다.
	num7 += 1; // 이때!! 2 + 1 = 3인가? 그렇지 않다. 이번 함수는 참조를 받는 것이 아니라 변수를 매개로 받았다. Call by Value에 따라 num7은 여전히 1이다.
	num8 += 100;
	cout << num7 << " " << num8 << endl; //2 102로 차이점이 있다.

	/*
	여기서 ! Call by Value와 Call by Reference의 차이점에 대해 알 수 있다.
	One과 Two함수는 매개변수로 참조를 받았고, 이 값은 메인에서 변수에 영향을 미쳤다.
	그러나 Three함수는 매개변수로 변수를 받았고, 이 값은 메인에서 변수에 영향을 미치지 않았다.
	*/

	int num9 = 1;
	int& num10 = RefRetFuncFour(num9); //오류 발생, 쓰레기값이 반환된다.
	num9 += 1; //Call by Value에 따라 1 + 1 = 2
	num10 += 100; //오류

	cout << num9 << " " << num10 << endl; // 2와 쓰레기값 반환



	return 0;
}