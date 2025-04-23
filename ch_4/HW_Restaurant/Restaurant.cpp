#pragma once
#include <iostream>
#include "Restaurant.h" 

using namespace std;


/*
함수 이름 Restaurant
기능: Restaurant 클래스의 생성자이다.
매개변수: 없음
반환값: 없음
작성날짜: 2025/04/01
*/
Restaurant::Restaurant()
{
}


/*
함수 이름 addPayment
기능: CreditCardPayment 포인터 타입 값을 인자로 받아서 payment에 저장한다.
매개변수: CreditCardPayment* payment -> 신용카드 결제 객체의 포인터
반환값: 없음
작성날짜: 2025/04/01
*/
void Restaurant::addPayment(CreditCardPayment* credit_card_payment)
{
    payment = credit_card_payment;
}


/*
함수 이름 showAllPaymentInfo
기능: payment 포인터 변수에 저장된 객체의 정보를 출력하기 위해 CreditCardPayment 객체의 showPaymentInfo() 함수를 호출한다.
매개변수: 없음
반환값: 없음
작성날짜: 2025/04/01
*/
void Restaurant::showAllPaymentInfo() const
{
    payment->showPaymentInfo();
}


/*
함수 이름 showTotalFee
기능: payment 객체 포인터 변수의 수수료 금액을 출력하기 위해 CreditCardPayment 객체의 getFee() 함수를 호출한다.
매개변수: 없음
반환값: 없음
작성날짜: 2025/04/01
*/
void Restaurant::showTotalFee() const
{
    cout << "총 수수료: " << payment->getFee() << endl;
}


/*
함수 이름 ~Restaurant
기능: Restaurant 클래스의 소멸자로 기능한다.
매개변수: 없음
반환값: 없음
작성날짜: 2025/04/01
*/
Restaurant::~Restaurant()
{
    delete payment;
}
