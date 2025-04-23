#include <iostream>
#include "CreditCardPayment.h" 

using namespace std;


/*
함수 이름 : main
기능 : 신용카드 결제 금액 및 수수료율을 관리하는 기능을 구현한다.
매개변수 : 없음
반환값 : int -> 0 : 정상 종료, 나머지 : 비정상 종료
작성 날짜 : 2025/03/27
*/
int main(void)
{
    CreditCardPayment payment(1000, 0.03);


    cout << "신용카드 결제 정보 -> ";
    payment.showPaymentInfo();

    return 0;
}