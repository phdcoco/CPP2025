#define _CRT_SECURE_NO_WARNINGS

#include "CheckingAccount.h"
#include <iostream>

using namespace std;

/*
	함수 이름 : CheckingAccount
	기능 : 생성자, 이름과 잔액, 이자액을 입력받아 객체를 생성한다.
	매개변수 : char* name -> 고객 이름, double bal -> 잔액, double Interest -> 이자액
	작성날짜 : 2025/04/16
	작성자 : 유도훈
*/

CheckingAccount::CheckingAccount(char* name, double bal, double Interest) : Account(name, bal), monthlyFixedInterest(Interest) {}

/*
	함수 이름 : getMonthlyFixedInterest
	기능 : 고객의 고정 이자액 반환
	반환값 : 고정 이자액
	작성날짜 : 2025/04/09
	작성자 : 유도훈
*/

double CheckingAccount::getMonthlyFixedInterest() const
{
	return monthlyFixedInterest;
}

/*
	함수 이름 : getMonthlyInterest
	기능 : 고객의 이름 반환
	반환값 : 고객의 이름
	작성날짜 : 2025/04/09
	작성자 : 유도훈
*/

double CheckingAccount::getMonthlyInterest() const
{
	return monthlyFixedInterest;
}

/*
	함수 이름 : showAccountInfo
	기능 : 고객의 모든 정보 반환(이름, 잔액, 고정 이자액)
	작성날짜 : 2025/04/09
	작성자 : 유도훈
*/

void CheckingAccount::showAccountInfo()
{
	cout << "추가된 계좌 정보:" << endl << "이름: " << getOwnerName() << ", 잔액: " << getBalance() << ", 고정 이자액: " << getMonthlyFixedInterest() << endl;
}