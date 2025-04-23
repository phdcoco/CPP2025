#pragma once
#include "Account.h"

/*
	클래스 이름 : SavingAccount
	기능 : 계좌에 대한 아래 기능들 구현하되, 부모 클래스 Account를 상속받는다.
		1. 생성자
		2. 이름 반환 - 상속받는다.
		3. 잔액 반환 - 상속받는다.
		4. 월 이자율 반환
		5. 월 이자액 반환
		6. 고객 정보 반환
	작성 날짜 : 2025/04/16
	작성자 : 유도훈
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