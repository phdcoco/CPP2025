#pragma once
/*
Ŭ���� �̸� : CreditCardPayment
��� : �ſ�ī�� ���� �ݾ׿� ���� �Ʒ� ����� ������

1. �����ڸ� ���� �ʱ� ���� �ݾװ� ���������� �Է¹޴´�.
2. getFee �Լ��� ���� ������ �ݾ��� ��ȯ�Ѵ�.
3. showPaymentInfo �Լ��� ���� ���� ���� ������ ����Ѵ�.

�ۼ���¥ : 2025/03/26
�ۼ��� :
*/
class CreditCardPayment
{
private:
    double amountPaid;   // ���� �ݾ��� �Ҽ������� �����ϱ� ���� double�� ����
    double feeRate;  // �������� ����

public:
    CreditCardPayment(double amount, double rate);
    double getAmountPaid() const;
    double getFeeRate() const;
    double getFee() const;
    void showPaymentInfo() const;
};
