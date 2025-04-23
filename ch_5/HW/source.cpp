#pragma once
#include <iostream>

using namespace std;

class DebitCardPayment
{
private:
	int amountPaid;
	int fixdFee;
public:
	DebitCardPayment(int amount, int fee)
	{
		amountPaid = amount;
		fixdFee = fee;
	}
	int getAmountPaid()
	{
		return amountPaid;
	}

	int getfixdFee()
	{
		return fixdFee;
	}

	int getFee()
	{
		return fixdFee;
	}

	void showPaymentInfo()
	{
		cout << "직불카드 결제 정보 -> 금액 : " << getAmountPaid() << ", 수수료 : " << getFee() << endl;
	}
};

int main() {
	DebitCardPayment payment(2000, 10);
	payment.showPaymentInfo();

	return 0;
}