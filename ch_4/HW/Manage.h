#pragma once
#include <iostream>

using namespace std;

/*
	Ŭ���� �̸� : Manage
	��� : å�� ��� ��ȭ�� ���� ����
	�ۼ���¥ : 2025-03-26
	�ۼ��� : C311211 ������
*/

class Manage
{
private:
	int bookAmount;
public:
	void initBook(int book);
	void changeBook(int amount);
	void showBook() const;
};
