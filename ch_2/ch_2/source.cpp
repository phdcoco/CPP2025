#include <iostream>

using namespace std;

int main() {
	//bool 은 true와 false를 저장하는 1바이트 변수타입이다. 공간에 있어 더 효율적
	//java는 가비지 컬렉션이 있어 free가 없고 선언에 동적 할당이 있어 malloc이 없음
	//cpp에서는 malloc, free 대신 new, delete 사용

	int* ptr1 = new int; //malloc 대신 new
	int* arr1 = new int[3]; //12바이트 메모리 할당, 입력받은 변수만큼 할당하려면 3 대신 그냥 n 쓰면 됨, C 보다 간단하다.

	delete ptr1;
	delete []arr1; //free 대신 delete, 자바는 안 해도 알아서 dfelete 시켜 줌

	int num = 6; //4바이트
	int* pnum; //주소 값은 8바이트
	pnum = &num; // pnum은 num의 메모리 주소 값을 저장, 32비트 메모리 2^32 = 4GB개수의 주소, 64비트 2^64
	//8기가 메모리를 사용하면 8기가 개수의 메모리 주소 값을 할당받을 수 있다.

	double* pnum2; //역시 8바이트

	cout << pnum << endl;
	cout << "종료" << endl;




	 


	return 0;
}