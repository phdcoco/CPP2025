#define _CRT_SECURE_NO_WARNINGS

#include "Cinema.h"
#include <iostream>

using namespace std;

/*
	함수 이름 : Cinema
	기능 : 객체가 생성될 때, 멤버 변수들을 초기화한다.
	매개변수 : numberOfMovie -> 등록된 영화의 index, theater -> 영화관 이름
	비고 : 초기 영화 index는 0으로 설정, 영화관 이름은 공백으로 초기화, 영화 리스트 역시 NULL로 초기화
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

Cinema::Cinema(const char* theater)
{
	numberOfMovie = 0;
	strcpy(theaterName, theater);
	for (int i = 0; i < 10; i++)
	{
		movieList[i] = NULL;
	}
}

/*
	함수 이름 : addMovie
	기능 : 영화 리스트에 영화 객체를 추가한다.
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

void Cinema::addMovie(Movie* movie)
{
	if (numberOfMovie < 10)
		movieList[numberOfMovie++] = movie;
}

/*
	함수 이름 : bookableMovies
	기능 : 현재 예매 가능한 영화를 출력한다.
	비고 : getBooked함수를 이용해 isBooked 상태가 false인 영화만을 골라 showMovieInfo 함수를 실행시킨다.
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

void Cinema::bookableMovies()
{
	for (int i = 0; i < numberOfMovie; i++) {
		if (movieList[i]->getBooked() == false) {
			cout << i + 1 << ") ";
			movieList[i]->showMovieInfo();
		}
	}	
}

/*
	함수 이름 : updateMovies
	기능 : 예매할 영화 index를 입력받아 예매상태를 업데이트하고 영화 정보를 출력한다.
	매개변수 : index -> 영화 리스트의 index
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

void Cinema::updateMovies(int index)
{
	movieList[index]->setBooked();
	movieList[index]->showMovieInfo();
}

/*
	함수 이름 : showStatistic
	기능 : 예매 상태가 true인 영화의 수와 예매된 영화들의 상영 시간 합을 출력한다.
	매개변수 : bookedMovie -> 예매된 영화 개수, amountTime -> 상영 시간 합
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

void Cinema::showStatistic()
{
	int bookedMovie = 0;
	int amountTime = 0;

	for (int i = 0; i < numberOfMovie; i++) {
		if (movieList[i]->getBooked() == true) {
			bookedMovie += 1;
			amountTime += movieList[i]->getRunningTime();
		}
	}

	cout << "- 예매 영화 수 : " << bookedMovie << endl;
	cout << "- 예매 영화 상영 시간 합 : " << amountTime << endl;
}

/*
	함수 이름 : showMenu
	기능 : 메뉴를 제공하여 선택된 메뉴에 따라 기능을 수행한다.
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

void Cinema::showMenu()
{
	cout << "메뉴:" << endl << "1. 영화 예매" << endl << "2. 예매 통계" << endl << "3. 종료하기" << endl << "* 연산을 입력하시오: ";
}

/*
	함수 이름 : ~Cinema
	기능 : 모든 코드가 끝나고 객체가 소멸될 때, 동적으로 할당된 메모리를 정리한다.
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

Cinema::~Cinema()
{
	for (int i = 0; i < numberOfMovie; i++) {
		delete movieList[i];
	}
}