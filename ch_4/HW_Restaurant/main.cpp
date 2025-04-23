#include <iostream>
#include "Restaurant.h" 

using namespace std;


/*
�Լ� �̸� : main
��� : CreditCardPayment ��ü�� �̿��ؼ� ������� �ſ�ī�� ���� ������ �����Ḧ ����ϴ� ����� �����Ѵ�.
�Ű����� : ����
��ȯ�� : int -> 0 : ���� ����, ������ : ������ ����
�ۼ� ��¥ : 2025/04/01
*/
int main(void)
{
    Restaurant* restaurant = new Restaurant;
    double amountPaid, feeRate;

    // CreditCardPayment ��ü ����
    cout << "�ſ�ī�� ���� �ݾ� �� ���������� �Է��Ͻÿ� :  "; 
    cin >> amountPaid >> feeRate;
    CreditCardPayment* payment = new CreditCardPayment(amountPaid, feeRate);

    // restaurant ������ �߰�, ���� ���� ���, �� ������ �ݾ� ���
    restaurant->addPayment(payment);
    restaurant->showAllPaymentInfo();
    restaurant->showTotalFee();


    delete restaurant;

    return 0;
}