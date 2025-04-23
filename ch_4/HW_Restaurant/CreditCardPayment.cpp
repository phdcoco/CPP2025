#pragma once
#include <iostream>
#include "CreditCardPayment.h" 

using namespace std;


/*
함수 이름 : CreditCardPayment
기능 : CreditCardPayment 클래스의 생성자로서 인자로 전달된 결제 금액을 멤버변수 amount에 대입하고,
      수수료율을 멤버변수 feeRate에 저장한다.
매개변수 : double amount -> 결제 금액, double rate -> 수수료율
반환값 : 없음
작성 날짜 : 2025/03/26
*/
CreditCardPayment::CreditCardPayment(double amount, double rate)
    : amountPaid(amount), feeRate(rate)
{
}


/*
함수 이름 : getAmountPaid
기능 : 저장된 결제 금액을 반환한다.
매개변수 : 없음
반환값 : double -> 결제 금액
작성 날짜 : 2025/03/26
*/
double CreditCardPayment::getAmountPaid() const
{
    return amountPaid;
}


/*
함수 이름 : getFeeRate
기능 : 저장된 수수료율을 반환한다.
매개변수 : 없음
반환값 : double -> 수수료율
작성 날짜 : 2025/03/26
*/
double CreditCardPayment::getFeeRate() const
{
    return feeRate;
}


/*
함수 이름 : getFee
기능 : 현재 결제 금액에 수수료를 적용한 금액을 반환한다.
매개변수 : 없음
반환값 : double -> 수수료 금액
작성 날짜 : 2025/03/26
*/
double CreditCardPayment::getFee() const
{
    return amountPaid * feeRate;      // 변화량과 수수료를 더함
}

/*
함수 이름 : showPaymentInfo
기능 : 현재 결제 금액, 수수료 금액을 출력한다.
매개변수 : 없음
반환값 : 없음
작성 날짜 : 2025/03/26
*/
void CreditCardPayment::showPaymentInfo() const
{
    cout << "금액: " << amountPaid << ", 수수료: " << getFee() << endl;
}