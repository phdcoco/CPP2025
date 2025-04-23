#include "Bank.h"
#include <iostream>

using namespace std;

/*
	함수 이름 : Bank
	기능 : 생성자, 계좌의 개수를 0개로 초기화한다.
	매개변수 :
				numberOfAccounts -> 생성된 계좌의 개수
	작성 날짜 : 2025/004/02
	작성자 : 유도훈
*/

Bank::Bank()
{
	numberOfAccounts = 0;
};

/*
	함수 이름 : addAccount
	기능 : SavingAccount 객체의 포인터를 계좌 목록 배열에 저장한다.
	매개변수 :
				numberOfAccounts -> 생성된 계좌의 개수
	작성 날짜 : 2025/04/02
	작성자 : 유도훈
*/

void Bank::addAccount(SavingAccount* account)
{
	if (numberOfAccounts < 10)
		AccountList[numberOfAccounts++] = account;
}

/*
	함수 이름 : showAllAccountInfo
	기능 : 배열에 저장된 계좌의 정보를 showAccountInfo를 이용해 출력한다.
	작성 날짜 : 2025/04/02
	작성자 : 유도훈
*/

void Bank::showAllAccountInfo() const
{
	cout << "모든 계좌 정보" << endl;
	for (int i = 0; i < numberOfAccounts; i++)
		AccountList[i]->showAccountInfo();
}

/*
	함수 이름 : getTotalInterest
	기능 : 계좌의 월 이자액을 getMonthlyInterest() 함수를 이용해 구하고 모두 더해 출력한다.
	매개변수 : totalInterest -> 각 계좌의 월 이자액의 합
	작성 날짜 : 2025/04/02
	작성자 : 유도훈
*/

double Bank::getTotalInterest() const
{
	double totalInterest = 0;
	for (int i = 0; i < numberOfAccounts; i++)
		totalInterest += AccountList[i]->getMonthlyInterest();

	return totalInterest;
}

/*
	함수 이름 : ~Bank
	기능 :
			AccountList를 만들어진 크기만큼 delete한다.
			객체 생명이 끝날 때 자동으로 호출됨.
	작성 날짜 : 2025/04/02
	작성자 : 유도훈
*/

Bank::~Bank()
{
	for (int i = 0; i < numberOfAccounts; i++)
		delete AccountList[i];
}