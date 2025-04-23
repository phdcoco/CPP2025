#include "Manage.h"

/*
	�Լ� �̸� : initBook
	��� : �� ó���� å�� ��� ����(�ʱ�ȭ)�Ѵ�.
	�Ű����� : int book -> ó�� å�� ���
				bookAmount -> �� å�� ���
	�ۼ���¥ : 2025-03-26
	�ۼ��� : ������
*/

void Manage::initBook(int book)
{
	bookAmount = book;
}

/*
	�Լ� �̸� : changeBook
	��� : å�� ��� �Է� ���� ���� ���� �����Ѵ�.
	�Ű����� : int amount -> ������ ��
	�ۼ���¥ : 2025-03-26
	�ۼ��� : ������
*/

void Manage::changeBook(int amount)
{
	bookAmount += amount;
}

/*
	�Լ� �̸� : showBook
	��� : ���� å�� ��� ��ȯ�Ѵ�. const�� �����Ͽ� ���ʿ��� ������ ���´�.
	�ۼ���¥ : 2025-03-26
	�ۼ��� : ������
*/

void Manage::showBook() const
{
	cout << "���� ���� ���� " << bookAmount << "�� �Դϴ�." << endl;
}