#include <iostream>
#include "CreditCardPayment.h" 

using namespace std;


/*
�Լ� �̸� : main
��� : �ſ�ī�� ���� �ݾ� �� ���������� �����ϴ� ����� �����Ѵ�.
�Ű����� : ����
��ȯ�� : int -> 0 : ���� ����, ������ : ������ ����
�ۼ� ��¥ : 2025/03/27
*/
int main(void)
{
    CreditCardPayment payment(1000, 0.03);


    cout << "�ſ�ī�� ���� ���� -> ";
    payment.showPaymentInfo();

    return 0;
}