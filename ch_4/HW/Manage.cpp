#include "Manage.h"

/*
	함수 이름 : initBook
	기능 : 맨 처음의 책의 재고를 저장(초기화)한다.
	매개변수 : int book -> 처음 책의 재고
				bookAmount -> 총 책의 재고
	작성날짜 : 2025-03-26
	작성자 : 유도훈
*/

void Manage::initBook(int book)
{
	bookAmount = book;
}

/*
	함수 이름 : changeBook
	기능 : 책의 재고를 입력 받은 값에 따라 증감한다.
	매개변수 : int amount -> 증감할 양
	작성날짜 : 2025-03-26
	작성자 : 유도훈
*/

void Manage::changeBook(int amount)
{
	bookAmount += amount;
}

/*
	함수 이름 : showBook
	기능 : 현재 책의 재고를 반환한다. const로 선언하여 불필요한 변경을 막는다.
	작성날짜 : 2025-03-26
	작성자 : 유도훈
*/

void Manage::showBook() const
{
	cout << "현재 도서 수는 " << bookAmount << "권 입니다." << endl;
}