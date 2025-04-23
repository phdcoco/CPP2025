#include <iostream>

using namespace std;

class Person
{
public:
	void walk() {
		cout << "호출 완료";
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
	int& num2 = num1; //num2는 num1의 참조자, 이후부터는 num1으로 하는 연산은 num2와 같다. 기존에 선언된 변수 num1의 별칭이라고 생각하면 됨. 사실상 같다.

	num2 = 2047;
	cout << "VAL: " << num1 << endl; //2000으로 선언했으나, 참조자인 num2의 값이 2047로 변경되었으므로 num1 역시 변경, 한몸임.

	cout << "REF: " << num2 << endl;
	//초기화 이후에 가리키는 대상 변경 불가. ?
	//차이점 공부하기 , 용도

	int& num99 = num1;
	int& num9999 = num1; //참조자의 수에는 제한이 없음.
	num9999 = num2; //이때, num9999참조자가 num2를 가리키도록 변경되는게 아니라, num1의 값이 num2로 변경된다는 뜻임. 포인터와 다르다.
	// 이 내용이 초기화 이후에 가리키는 대상 변경 불가라는 뜻.

	int* pointer = &num1;
	pointer = &num2; //포인터는 참조자와 다르게 가리키는 대상 변경이 자유롭다.

	int& same = num1;
	// int& same = num2; 역시 에러! 한번 참조된 대상을 변경할 수 없다.


	// int& ref = 20; or ; or NULL; 숫자나 생성만하기 혹은 NULL초기화 불가능.

	Person person;
	Person* man = &person;
	man->walk(); //포인터는 ->로 멤버 접근

	Person& woman = person;
	woman.walk(); //참조자는 .로 멤버 접근



	int num3 = 10;
	int num4 = 20;

	cout << "초기값" << num3 << " "<< num4 << endl;
	errSwap(num3, num4);
	cout << "포인터를 참조하지 않으면 값이 바뀌지 않는다." << num3 << " " << num4 << endl;
	Swap(&num3, &num4);
	cout << "포인터를 참조하면 값이 바뀐다." << num3 << " " << num4 << endl;

	return 0;
}
//!! 반환형 참조 부분 복습 pdf 29쪽
//
//void func(const int &ref) <- const쓰면 어차피 안바뀌는데 왜 reference로 이용하는가
// 값을 바꿀 새로운 변수를 선언할 필요가 없다. 포인터로 접근하기 떄문에 메모리를 아낄 수 있음.


/*
Python <call by value>

def change_value(x):
	x = x + 1
	print(x)

x = 5
print(x)
change_value(x)
print(x)

여전히 출력값은 5이다. 반영되지 않음. <<int는 immutable 객체이므로.

def change_list(lst): <call by reference>
	lst.append(4)
	print(lst)

lst = [1, 2, 3]
print(lst)
change_list(lst)
print(lst)

[1, 2, 3, 4] 반영됨. << 리스트는 Mutable 객체이므로.

C++은 value vs reference 지정할 수 있다.

*/