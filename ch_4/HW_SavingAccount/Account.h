#pragma once

/*
	Ŭ���� �̸� : Account
	��� : SavingAccount�� CheckingAccount�� �θ� Ŭ������ �Ʒ� ����� ����
			1. ������
			2. �̸� ��ȯ
			3. �ܾ� ��ȯ
	�ۼ���¥ : 2025/04/16
	�ۼ��� : ������
*/

class Account
{
protected:
	char ownerName[20];
	double balance;
public:
	Account(char* userName, double userBalance);
	const char* getOwnerName() const;
	const double getBalance() const;
	~Account() {}
};