#include "Bank.h"
#include <iostream>

using namespace std;

/*
	�Լ� �̸� : Bank
	��� : ������, ������ ������ 0���� �ʱ�ȭ�Ѵ�.
	�Ű����� :
				numberOfAccounts -> ������ ������ ����
	�ۼ� ��¥ : 2025/004/02
	�ۼ��� : ������
*/

Bank::Bank()
{
	numberOfAccounts = 0;
};

/*
	�Լ� �̸� : addAccount
	��� : SavingAccount ��ü�� �����͸� ���� ��� �迭�� �����Ѵ�.
	�Ű����� :
				numberOfAccounts -> ������ ������ ����
	�ۼ� ��¥ : 2025/04/02
	�ۼ��� : ������
*/

void Bank::addAccount(SavingAccount* account)
{
	if (numberOfAccounts < 10)
		AccountList[numberOfAccounts++] = account;
}

/*
	�Լ� �̸� : showAllAccountInfo
	��� : �迭�� ����� ������ ������ showAccountInfo�� �̿��� ����Ѵ�.
	�ۼ� ��¥ : 2025/04/02
	�ۼ��� : ������
*/

void Bank::showAllAccountInfo() const
{
	cout << "��� ���� ����" << endl;
	for (int i = 0; i < numberOfAccounts; i++)
		AccountList[i]->showAccountInfo();
}

/*
	�Լ� �̸� : getTotalInterest
	��� : ������ �� ���ھ��� getMonthlyInterest() �Լ��� �̿��� ���ϰ� ��� ���� ����Ѵ�.
	�Ű����� : totalInterest -> �� ������ �� ���ھ��� ��
	�ۼ� ��¥ : 2025/04/02
	�ۼ��� : ������
*/

double Bank::getTotalInterest() const
{
	double totalInterest = 0;
	for (int i = 0; i < numberOfAccounts; i++)
		totalInterest += AccountList[i]->getMonthlyInterest();

	return totalInterest;
}

/*
	�Լ� �̸� : ~Bank
	��� :
			AccountList�� ������� ũ�⸸ŭ delete�Ѵ�.
			��ü ������ ���� �� �ڵ����� ȣ���.
	�ۼ� ��¥ : 2025/04/02
	�ۼ��� : ������
*/

Bank::~Bank()
{
	for (int i = 0; i < numberOfAccounts; i++)
		delete AccountList[i];
}