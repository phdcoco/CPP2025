#pragma once
#include <iostream>
#include "Restaurant.h" 

using namespace std;


/*
�Լ� �̸� Restaurant
���: Restaurant Ŭ������ �������̴�.
�Ű�����: ����
��ȯ��: ����
�ۼ���¥: 2025/04/01
*/
Restaurant::Restaurant()
{
}


/*
�Լ� �̸� addPayment
���: CreditCardPayment ������ Ÿ�� ���� ���ڷ� �޾Ƽ� payment�� �����Ѵ�.
�Ű�����: CreditCardPayment* payment -> �ſ�ī�� ���� ��ü�� ������
��ȯ��: ����
�ۼ���¥: 2025/04/01
*/
void Restaurant::addPayment(CreditCardPayment* credit_card_payment)
{
    payment = credit_card_payment;
}


/*
�Լ� �̸� showAllPaymentInfo
���: payment ������ ������ ����� ��ü�� ������ ����ϱ� ���� CreditCardPayment ��ü�� showPaymentInfo() �Լ��� ȣ���Ѵ�.
�Ű�����: ����
��ȯ��: ����
�ۼ���¥: 2025/04/01
*/
void Restaurant::showAllPaymentInfo() const
{
    payment->showPaymentInfo();
}


/*
�Լ� �̸� showTotalFee
���: payment ��ü ������ ������ ������ �ݾ��� ����ϱ� ���� CreditCardPayment ��ü�� getFee() �Լ��� ȣ���Ѵ�.
�Ű�����: ����
��ȯ��: ����
�ۼ���¥: 2025/04/01
*/
void Restaurant::showTotalFee() const
{
    cout << "�� ������: " << payment->getFee() << endl;
}


/*
�Լ� �̸� ~Restaurant
���: Restaurant Ŭ������ �Ҹ��ڷ� ����Ѵ�.
�Ű�����: ����
��ȯ��: ����
�ۼ���¥: 2025/04/01
*/
Restaurant::~Restaurant()
{
    delete payment;
}
