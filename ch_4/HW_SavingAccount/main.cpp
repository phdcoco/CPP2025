#define _CRT_SECURE_NO_WARNINGS

#include "SavingAccount.h"
#include "CheckingAccount.h"
#include <iostream>

using namespace std;

int main() {
	char name[20]; //�� ����
	double balance; //�� �ܾ�
	double fixedInterest; //���� ���ھ�
	double monthlyInterestRate; //�� ������

	cout << "�߰��� ������� ���� �̸�, �ܾ�, �� �������� �Է��Ͻÿ� :  ";
	cin >> name >> balance >> monthlyInterestRate;
	SavingAccount savingaccount(name, balance, monthlyInterestRate);

	cout << "�߰��� ���°��� ���� �̸�, �ܾ�, ���� ���ھ��� �Է��Ͻÿ� :  ";
	cin >> name >> balance >> fixedInterest;
	CheckingAccount checkingaccount(name, balance, fixedInterest);

	cout << "�߰��� ���� ����:" << endl;
	savingaccount.showAccountInfo();
	checkingaccount.showAccountInfo();

	cout << "�� ���ھ�: " << savingaccount.getMonthlyInterest() + checkingaccount.getMonthlyInterest(); //���� Bank Ŭ������ �̿����� ����.

	return 0;
}