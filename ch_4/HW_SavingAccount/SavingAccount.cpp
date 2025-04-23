#include "SavingAccount.h"
#include <iostream>
using namespace std;

/*
	�Լ� �̸� : SavingAccount
	��� : �Է� ���� ���� ���� ��ü�� �����ϰ� �ʱ�ȭ�Ѵ�.
	�Ű����� : char* name -> �̸�, double bal -> �ܾ�, monthIntRate -> �� ������
	�ۼ� ��¥ : 2025/04/16
	�ۼ��� : ������
*/

SavingAccount::SavingAccount(char* name, double bal, double monthIntRate) : Account(name, bal), monthlyInterestRate(monthIntRate) {}

/*
	�Լ� �̸� : getMonthlyInterestRate
	��� : �� �������� ��ȯ��
	�ۼ� ��¥ : 2025/03/31
	�ۼ��� : ������
*/

double SavingAccount::getMonthlyInterestRate() const
{
	return monthlyInterestRate;
}

/*
	�Լ� �̸� : getMonthlyInterest
	��� :
			�� ���ھ��� ��ȯ�Ѵ�.
			�̶� ���ھ��� �ܾ� * �������� ����Ѵ�.
	�ۼ� ��¥ : 2025/03/31
	�ۼ��� : ������
*/

double SavingAccount::getMonthlyInterest() const
{
	return getBalance() * getMonthlyInterestRate();
}

/*
	�Լ� �̸� : showAccountInfo
	��� : �߰��� ���� �̸��� �ܾ�, �� ���ھ��� ����Ѵ�.
	�ۼ� ��¥ : 2025/03/31
	�ۼ��� : ������
*/

void SavingAccount::showAccountInfo()
{
	cout << "�̸� : " << getOwnerName() << ", �ܾ� : " << getBalance() << ", �� ���ھ� : " << getMonthlyInterest() << endl;
}