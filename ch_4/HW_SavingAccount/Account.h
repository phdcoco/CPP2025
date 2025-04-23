#pragma once

/*
	클래스 이름 : Account
	기능 : SavingAccount와 CheckingAccount의 부모 클래스로 아래 기능을 구현
			1. 생성자
			2. 이름 반환
			3. 잔액 반환
	작성날짜 : 2025/04/16
	작성자 : 유도훈
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