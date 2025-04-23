#pragma once
#include "Account.h"

/*
	Ŭ���� �̸� : CheckingAccount
	��� : ���¿� ���� �Ʒ� ��ɵ� �����ϵ�, �θ� Ŭ���� Account�� ��ӹ޴´�.
			1. ������
			2. �̸� ��ȯ - ��ӹ޴´�.
			3. �ܾ� ��ȯ - ��ӹ޴´�.
			4. ���� ���ھ� ��ȯ
			5. �� ���ھ� ��ȯ
			6. �� ���� ��ȯ
	�ۼ���¥ : 2025/04/16
	�ۼ��� : ������
*/

class CheckingAccount : public Account
{
private:
	double monthlyFixedInterest;
public:
	CheckingAccount(char* name, double bal, double Interest);
	double getMonthlyFixedInterest() const;
	double getMonthlyInterest() const;
	void showAccountInfo();
};