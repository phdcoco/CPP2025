#pragma once
#include "CreditCardPayment.h"


/*
Ŭ���� �̸� : Restaurant
��� : Payment Ÿ���� ������ ������ ���� ���� �Ʒ� ����� ������
       - Payment Ÿ�� ��ü �߰�
       - ���� ����(���� �ݾ� �� ��������) ���
       - �� ������ �ݾ� ���
�ۼ���¥ : 2025/04/01
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