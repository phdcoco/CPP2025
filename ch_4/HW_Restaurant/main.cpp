#include <iostream>
#include "Restaurant.h" 

using namespace std;


/*
함수 이름 : main
기능 : CreditCardPayment 객체를 이용해서 레스토랑 신용카드 결제 정보와 수수료를 출력하는 기능을 구현한다.
매개변수 : 없음
반환값 : int -> 0 : 정상 종료, 나머지 : 비정상 종료
작성 날짜 : 2025/04/01
*/
int main(void)
{
    Restaurant* restaurant = new Restaurant;
    double amountPaid, feeRate;

    // CreditCardPayment 객체 생성
    cout << "신용카드 결제 금액 및 수수료율을 입력하시오 :  "; 
    cin >> amountPaid >> feeRate;
    CreditCardPayment* payment = new CreditCardPayment(amountPaid, feeRate);

    // restaurant 결제에 추가, 결제 정보 출력, 총 수수료 금액 출력
    restaurant->addPayment(payment);
    restaurant->showAllPaymentInfo();
    restaurant->showTotalFee();


    delete restaurant;

    return 0;
}