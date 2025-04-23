#define _CRT_SECURE_NO_WARNINGS

#include "SavingAccount.h"
#include "CheckingAccount.h"
#include <iostream>

using namespace std;

int main() {
	char name[20]; //고객 성명
	double balance; //고객 잔액
	double fixedInterest; //고정 이자액
	double monthlyInterestRate; //월 이자율

	cout << "추가할 저축계좌 고객의 이름, 잔액, 월 이자율을 입력하시오 :  ";
	cin >> name >> balance >> monthlyInterestRate;
	SavingAccount savingaccount(name, balance, monthlyInterestRate);

	cout << "추가할 당좌계좌 고객의 이름, 잔액, 고정 이자액을 입력하시오 :  ";
	cin >> name >> balance >> fixedInterest;
	CheckingAccount checkingaccount(name, balance, fixedInterest);

	cout << "추가된 계좌 정보:" << endl;
	savingaccount.showAccountInfo();
	checkingaccount.showAccountInfo();

	cout << "총 이자액: " << savingaccount.getMonthlyInterest() + checkingaccount.getMonthlyInterest(); //아직 Bank 클래스를 이용하지 않음.

	return 0;
}