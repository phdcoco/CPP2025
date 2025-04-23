#define _CRT_SECURE_NO_WARNINGS

#include "CheckingAccount.h"
#include <iostream>

using namespace std;

/*
	�Լ� �̸� : CheckingAccount
	��� : ������, �̸��� �ܾ�, ���ھ��� �Է¹޾� ��ü�� �����Ѵ�.
	�Ű����� : char* name -> �� �̸�, double bal -> �ܾ�, double Interest -> ���ھ�
	�ۼ���¥ : 2025/04/16
	�ۼ��� : ������
*/

CheckingAccount::CheckingAccount(char* name, double bal, double Interest) : Account(name, bal), monthlyFixedInterest(Interest) {}

/*
	�Լ� �̸� : getMonthlyFixedInterest
	��� : ���� ���� ���ھ� ��ȯ
	��ȯ�� : ���� ���ھ�
	�ۼ���¥ : 2025/04/09
	�ۼ��� : ������
*/

double CheckingAccount::getMonthlyFixedInterest() const
{
	return monthlyFixedInterest;
}

/*
	�Լ� �̸� : getMonthlyInterest
	��� : ���� �̸� ��ȯ
	��ȯ�� : ���� �̸�
	�ۼ���¥ : 2025/04/09
	�ۼ��� : ������
*/

double CheckingAccount::getMonthlyInterest() const
{
	return monthlyFixedInterest;
}

/*
	�Լ� �̸� : showAccountInfo
	��� : ���� ��� ���� ��ȯ(�̸�, �ܾ�, ���� ���ھ�)
	�ۼ���¥ : 2025/04/09
	�ۼ��� : ������
*/

void CheckingAccount::showAccountInfo()
{
	cout << "�߰��� ���� ����:" << endl << "�̸�: " << getOwnerName() << ", �ܾ�: " << getBalance() << ", ���� ���ھ�: " << getMonthlyFixedInterest() << endl;
}