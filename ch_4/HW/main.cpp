/*
	�ۼ���¥ : 2025-03-26
	�ۼ��� : ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "Manage.h"

int main() {
	int changeValue; //������ å�� ���� �����ϴ� ����
	Manage BookManager;
	BookManager.initBook(100); //�ʱ� å�� ���� 100���� ����

	while (1)
	{
		cout << "���� ���� ��ȭ���� �Է��Ͻÿ� : ";
		cin >> changeValue;

		if (changeValue == 0) {
			cout << "���α׷��� �����մϴ�.";
			break;
		}
		BookManager.changeBook(changeValue);
		BookManager.showBook();
	}

	return 0;
}