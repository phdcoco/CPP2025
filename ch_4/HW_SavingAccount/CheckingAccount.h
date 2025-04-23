#pragma once
#include "Account.h"

/*
	클래스 이름 : CheckingAccount
	기능 : 계좌에 대한 아래 기능들 구현하되, 부모 클래스 Account를 상속받는다.
			1. 생성자
			2. 이름 반환 - 상속받는다.
			3. 잔액 반환 - 상속받는다.
			4. 고정 이자액 반환
			5. 월 이자액 반환
			6. 고객 정보 반환
	작성날짜 : 2025/04/16
	작성자 : 유도훈
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