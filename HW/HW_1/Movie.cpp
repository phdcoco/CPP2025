#define _CRT_SECURE_NO_WARNINGS

#include "Movie.h"
#include <iostream>

using namespace std;

/*
	함수 이름 : Movie
	기능 : 생성자, 입력받은 매개변수대로 객체를 생성한다.
	매개변수 : name -> 영화 이름, director -> 감독 이름, date -> 개봉년도, time -> 상영 시간
	비고 : 문자열을 직접 입력하는 경우 const로 선언한다. 예약 여부는 기본값을 false로 한다.
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

Movie::Movie(const char* name, const char* director, int date, int time) //하드코딩 시 char을 const로 선언해야 함.
{
	strcpy(movieName, name);
	strcpy(directorName, director);
	openDate = date;
	runningTime = time;
	isBooked = false;
}

/*
	함수 이름 : getMovieName
	기능 : 영화 제목을 반환한다.
	비고 : 앞 const는 반환하는 값을 수정하지 못하게 막고, 뒤 const는 멤버 변수 수정을 막는다.
	반환값 : 영화 제목
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

const char* Movie::getMovieName() const
{
	return movieName;
}

/*
	함수 이름 : getDirectorName
	기능 : 감독 이름을 반환한다.
	반환값 : 감독 이름
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

const char* Movie::getDirectorName() const
{
	return directorName;
}

/*
	함수 이름 : getOpenDate
	기능 : 개봉년도를 반환한다.
	반환값 : 개봉년도
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

const int Movie::getOpenDate() const
{
	return openDate;
}

/*
	함수 이름 : getRunningTime
	기능 : 상영시간을 반환한다.
	반환값 : 상영시간
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

const int Movie::getRunningTime() const
{
	return runningTime;
}

/*
	함수 이름 : getBooked
	기능 : 예매 여부를 반환한다.
	반환값 : 예매 여부 boolean 값
	변수 : isBooked -> 예매 여부 변수
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

bool Movie::getBooked() const
{
	return isBooked;
}

/*
	함수 이름 : setBooked
	기능 : 예매 변수 isBooked를 true로 변경하여 예매 상태로 바꾼다.
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

void Movie::setBooked()
{
	isBooked = true;
}

/*
	함수 이름 : showMovieInfo
	기능 : 영화의 이름, 감독명, 개봉년도, 상영시간을 출력한다.
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

void Movie::showMovieInfo() const
{
	cout << getMovieName() << ", " << getDirectorName() << ", " << getOpenDate() << ", " << getRunningTime() << endl;
}