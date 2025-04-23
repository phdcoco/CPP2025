#include <iostream>

using namespace std;

/*
* �ۼ� ��¥ : 2025/03/12
* �ۼ��� : C311211 ������
*/

/*
* �Լ� �̸� : Judge
* ��� : �Է¹��� ������ �־��� OR���ǿ� �����ϴ��� Ȯ���Ѵ�.
* �Ű����� : int a, b, c -> Ȯ���� ���� ��
* ��ȯ�� : ������ True, Ʋ���� False�� ��ȯ�ϴ� bool Ÿ�� ��
*/
bool Judge(int a, int b, int c)
{
	if (a * b * c >= 5000 || a + b + c >= 100)
		return true;
	else
		return false;
}

/*
* �Լ� �̸� : TorF
* ��� : boolŸ���� ���ϰ��� 0�� 1�� �ؽ�Ʈ True, False�� �ٲ��ִ� �Լ�
* �Ű����� : bool Ÿ�� ��
* ��ȯ �� : True, False �ؽ�Ʈ
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

	cout << "�� ���� �Է��Ͻÿ� : ";
	cin >> a >> b >> c; //a, b, c�� ����

	cout << "��� : ";
	TorF(Judge(a, b, c));

	return 0;
}

