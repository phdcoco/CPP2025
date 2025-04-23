#pragma once
#include "SavingAccount.h"

/*
	클래스 이름 : Bank
	기능 : SavingAccount.h를 활용하여 여러 고객의 정보를 저장하고 관리함.

	1. 이름, 잔액, 월이자율을 입력받아 고객의 정보를 만든다.
	2. 만든 고객을 크기 10인 AccountList 리스트에 저장한다,
	3. 이름, 잔액, 이자액, 총 고객의 이자액을 반환한다.

	작성 날짜 : 2025/04/02
	작성자 : 유도훈
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
