#include <iostream>

using namespace std;

int main() {
	//bool �� true�� false�� �����ϴ� 1����Ʈ ����Ÿ���̴�. ������ �־� �� ȿ����
	//java�� ������ �÷����� �־� free�� ���� ���� ���� �Ҵ��� �־� malloc�� ����
	//cpp������ malloc, free ��� new, delete ���

	int* ptr1 = new int; //malloc ��� new
	int* arr1 = new int[3]; //12����Ʈ �޸� �Ҵ�, �Է¹��� ������ŭ �Ҵ��Ϸ��� 3 ��� �׳� n ���� ��, C ���� �����ϴ�.

	delete ptr1;
	delete []arr1; //free ��� delete, �ڹٴ� �� �ص� �˾Ƽ� dfelete ���� ��

	int num = 6; //4����Ʈ
	int* pnum; //�ּ� ���� 8����Ʈ
	pnum = &num; // pnum�� num�� �޸� �ּ� ���� ����, 32��Ʈ �޸� 2^32 = 4GB������ �ּ�, 64��Ʈ 2^64
	//8�Ⱑ �޸𸮸� ����ϸ� 8�Ⱑ ������ �޸� �ּ� ���� �Ҵ���� �� �ִ�.

	double* pnum2; //���� 8����Ʈ

	cout << pnum << endl;
	cout << "����" << endl;




	 


	return 0;
}