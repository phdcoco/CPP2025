#define _CRT_SECURE_NO_WARNINGS

#include "Account.h"
#include <cstring>

using namespace std;

/*
	함수 이름 : Account
	기능 : 생성자, 이름과 잔액을 입력받아 객체를 생성한다.
	매개변수 : char* username -> 고객 이름, double userBalance -> 잔액
	작성날짜 : 2025/04/16
	작성자 : 유도훈
*/

Account::Account(char* userName, double userBalance)
{
	strcpy(ownerName, userName);
	balance = userBalance;
}

/*
	함수 이름 : getOwnerName
	기능 : 고객의 이름 반환
	반환값 : 이름, ownerName
	작성날짜 : 2025/04/16
	작성자 : 유도훈
*/

const char* Account::getOwnerName() const
{
	return ownerName;
}

/*
	함수 이름 : getBalance
	기능 : 고객의 잔액 반환
	반환값 : 잔액, balance
	작성날짜 : 2025/04/16
	작성자 : 유도훈
*/

const double Account::getBalance() const
{
	return balance;
}