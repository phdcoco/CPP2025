/*
	작성날짜 : 2025-03-26
	작성자 : 유도훈
*/

#define _CRT_SECURE_NO_WARNINGS

#include "Manage.h"

int main() {
	int changeValue; //증감할 책의 양을 저장하는 변수
	Manage BookManager;
	BookManager.initBook(100); //초기 책의 재고는 100으로 설정

	while (1)
	{
		cout << "도서 수의 변화량을 입력하시오 : ";
		cin >> changeValue;

		if (changeValue == 0) {
			cout << "프로그램을 종료합니다.";
			break;
		}
		BookManager.changeBook(changeValue);
		BookManager.showBook();
	}

	return 0;
}