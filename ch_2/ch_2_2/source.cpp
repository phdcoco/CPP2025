#include <iostream>

using namespace std;

/*
* 작성 날짜 : 2025/03/12
* 작성자 : C311211 유도훈
*/

/*
* 함수 이름 : Judge
* 기능 : 입력받은 정수가 주어진 OR조건에 부합하는지 확인한다.
* 매개변수 : int a, b, c -> 확인할 정수 값
* 반환값 : 맞으면 True, 틀리면 False를 반환하는 bool 타입 값
*/
bool Judge(int a, int b, int c)
{
	if (a * b * c >= 5000 || a + b + c >= 100)
		return true;
	else
		return false;
}

/*
* 함수 이름 : TorF
* 기능 : bool타입의 리턴값인 0과 1을 텍스트 True, False로 바꿔주는 함수
* 매개변수 : bool 타입 값
* 반환 값 : True, False 텍스트
*/

void TorF(bool result)
{
	if (result == true)
		cout << "true";
	else
		cout << "false";
}


int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "세 수를 입력하시오 : ";
	cin >> a >> b >> c; //a, b, c를 저장

	cout << "결과 : ";
	TorF(Judge(a, b, c));

	return 0;
}

