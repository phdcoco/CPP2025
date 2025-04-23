#pragma once
#include "CreditCardPayment.h"


/*
클래스 이름 : Restaurant
기능 : Payment 타입의 포인터 변수에 대해 대한 아래 기능을 구현함
       - Payment 타입 객체 추가
       - 결제 정보(결제 금액 및 수수료율) 출력
       - 총 수수료 금액 출력
작성날짜 : 2025/04/01
*/
class Restaurant
{
private:
    CreditCardPayment* payment;

public:
    Restaurant();

    void addPayment(CreditCardPayment* credit_card_payment);
    void showAllPaymentInfo() const;
    void showTotalFee() const;

    ~Restaurant();
};