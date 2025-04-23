#pragma once
#include <iostream>

using namespace std;

/*
	클래스 이름 : Manage
	기능 : 책의 재고 변화에 대해 구현
	작성날짜 : 2025-03-26
	작성자 : C311211 유도훈
*/

class Manage
{
private:
	int bookAmount;
public:
	void initBook(int book);
	void changeBook(int amount);
	void showBook() const;
};
