#include "SavingAccount.h"
#include <iostream>
using namespace std;

/*
	함수 이름 : SavingAccount
	기능 : 입력 받은 값에 의해 객체를 생성하고 초기화한다.
	매개변수 : char* name -> 이름, double bal -> 잔액, monthIntRate -> 월 이자율
	작성 날짜 : 2025/04/16
	작성자 : 유도훈
*/

SavingAccount::SavingAccount(char* name, double bal, double monthIntRate) : Account(name, bal), monthlyInterestRate(monthIntRate) {}

/*
	함수 이름 : getMonthlyInterestRate
	기능 : 월 이자율을 반환함
	작성 날짜 : 2025/03/31
	작성자 : 유도훈
*/

double SavingAccount::getMonthlyInterestRate() const
{
	return monthlyInterestRate;
}

/*
	함수 이름 : getMonthlyInterest
	기능 :
			월 이자액을 반환한다.
			이때 이자액은 잔액 * 이자율로 계산한다.
	작성 날짜 : 2025/03/31
	작성자 : 유도훈
*/

double SavingAccount::getMonthlyInterest() const
{
	return getBalance() * getMonthlyInterestRate();
}

/*
	함수 이름 : showAccountInfo
	기능 : 추가할 고객의 이름과 잔액, 월 이자액을 출력한다.
	작성 날짜 : 2025/03/31
	작성자 : 유도훈
*/

void SavingAccount::showAccountInfo()
{
	cout << "이름 : " << getOwnerName() << ", 잔액 : " << getBalance() << ", 월 이자액 : " << getMonthlyInterest() << endl;
}