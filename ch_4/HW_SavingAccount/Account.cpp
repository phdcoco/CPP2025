#define _CRT_SECURE_NO_WARNINGS

#include "Account.h"
#include <cstring>

using namespace std;

/*
	�Լ� �̸� : Account
	��� : ������, �̸��� �ܾ��� �Է¹޾� ��ü�� �����Ѵ�.
	�Ű����� : char* username -> �� �̸�, double userBalance -> �ܾ�
	�ۼ���¥ : 2025/04/16
	�ۼ��� : ������
*/

Account::Account(char* userName, double userBalance)
{
	strcpy(ownerName, userName);
	balance = userBalance;
}

/*
	�Լ� �̸� : getOwnerName
	��� : ���� �̸� ��ȯ
	��ȯ�� : �̸�, ownerName
	�ۼ���¥ : 2025/04/16
	�ۼ��� : ������
*/

const char* Account::getOwnerName() const
{
	return ownerName;
}

/*
	�Լ� �̸� : getBalance
	��� : ���� �ܾ� ��ȯ
	��ȯ�� : �ܾ�, balance
	�ۼ���¥ : 2025/04/16
	�ۼ��� : ������
*/

const double Account::getBalance() const
{
	return balance;
}