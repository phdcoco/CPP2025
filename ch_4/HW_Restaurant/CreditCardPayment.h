#pragma once
/*
클래스 이름 : CreditCardPayment
기능 : 신용카드 결제 금액에 대한 아래 기능을 구현함

1. 생성자를 통해 초기 결제 금액과 수수료율을 입력받는다.
2. getFee 함수를 통해 수수료 금액을 반환한다.
3. showPaymentInfo 함수를 통해 현재 결제 정보를 출력한다.

작성날짜 : 2025/03/26
작성자 :
*/
class CreditCardPayment
{
private:
    double amountPaid;   // 결제 금액을 소수점까지 지원하기 위해 double로 변경
    double feeRate;  // 수수료율 저장

public:
    CreditCardPayment(double amount, double rate);
    double getAmountPaid() const;
    double getFeeRate() const;
    double getFee() const;
    void showPaymentInfo() const;
};
