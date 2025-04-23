#pragma once
#include "SavingAccount.h"

/*
	Ŭ���� �̸� : Bank
	��� : SavingAccount.h�� Ȱ���Ͽ� ���� ���� ������ �����ϰ� ������.

	1. �̸�, �ܾ�, ���������� �Է¹޾� ���� ������ �����.
	2. ���� ���� ũ�� 10�� AccountList ����Ʈ�� �����Ѵ�,
	3. �̸�, �ܾ�, ���ھ�, �� ���� ���ھ��� ��ȯ�Ѵ�.

	�ۼ� ��¥ : 2025/04/02
	�ۼ��� : ������
*/



class Bank
{
private:
	SavingAccount* AccountList[10];
	int numberOfAccounts;

public:
	Bank();

	void addAccount(SavingAccount* Account);
	void showAllAccountInfo() const;
	double getTotalInterest() const;

	~Bank();
};
