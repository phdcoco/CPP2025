#pragma once
#include "Account.h"

/*
	Ŭ���� �̸� : SavingAccount
	��� : ���¿� ���� �Ʒ� ��ɵ� �����ϵ�, �θ� Ŭ���� Account�� ��ӹ޴´�.
		1. ������
		2. �̸� ��ȯ - ��ӹ޴´�.
		3. �ܾ� ��ȯ - ��ӹ޴´�.
		4. �� ������ ��ȯ
		5. �� ���ھ� ��ȯ
		6. �� ���� ��ȯ
	�ۼ� ��¥ : 2025/04/16
	�ۼ��� : ������
*/

class SavingAccount : public Account
{
private:
	double monthlyInterestRate;
public:
	SavingAccount(char* name, double bal, double monthIntRate);
	double getMonthlyInterestRate() const;
	double getMonthlyInterest() const;
	void showAccountInfo();
};