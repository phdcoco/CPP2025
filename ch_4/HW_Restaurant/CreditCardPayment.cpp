#pragma once
#include <iostream>
#include "CreditCardPayment.h" 

using namespace std;


/*
�Լ� �̸� : CreditCardPayment
��� : CreditCardPayment Ŭ������ �����ڷμ� ���ڷ� ���޵� ���� �ݾ��� ������� amount�� �����ϰ�,
      ���������� ������� feeRate�� �����Ѵ�.
�Ű����� : double amount -> ���� �ݾ�, double rate -> ��������
��ȯ�� : ����
�ۼ� ��¥ : 2025/03/26
*/
CreditCardPayment::CreditCardPayment(double amount, double rate)
    : amountPaid(amount), feeRate(rate)
{
}


/*
�Լ� �̸� : getAmountPaid
��� : ����� ���� �ݾ��� ��ȯ�Ѵ�.
�Ű����� : ����
��ȯ�� : double -> ���� �ݾ�
�ۼ� ��¥ : 2025/03/26
*/
double CreditCardPayment::getAmountPaid() const
{
    return amountPaid;
}


/*
�Լ� �̸� : getFeeRate
��� : ����� ���������� ��ȯ�Ѵ�.
�Ű����� : ����
��ȯ�� : double -> ��������
�ۼ� ��¥ : 2025/03/26
*/
double CreditCardPayment::getFeeRate() const
{
    return feeRate;
}


/*
�Լ� �̸� : getFee
��� : ���� ���� �ݾ׿� �����Ḧ ������ �ݾ��� ��ȯ�Ѵ�.
�Ű����� : ����
��ȯ�� : double -> ������ �ݾ�
�ۼ� ��¥ : 2025/03/26
*/
double CreditCardPayment::getFee() const
{
    return amountPaid * feeRate;      // ��ȭ���� �����Ḧ ����
}

/*
�Լ� �̸� : showPaymentInfo
��� : ���� ���� �ݾ�, ������ �ݾ��� ����Ѵ�.
�Ű����� : ����
��ȯ�� : ����
�ۼ� ��¥ : 2025/03/26
*/
void CreditCardPayment::showPaymentInfo() const
{
    cout << "�ݾ�: " << amountPaid << ", ������: " << getFee() << endl;
}