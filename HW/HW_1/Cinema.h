#pragma once
#include "Movie.h"

/*
	클래스 이름 : Cinema
	기능 : Movie 클래스의 영화에 대해 저장 및 예매 관련 서비스 제공
			1. 리스트에 영화 객체 추가
			2. 예매 가능한 영화 출력
			3. 예매 상태 업데이트, 정보 출력
			4. 통계 출력
			5. 메뉴 출력
			6. 생성 및 소멸
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

class Cinema
{
private:
	char theaterName[30];
	Movie* movieList[10];
	int numberOfMovie;
public:
	Cinema(const char* theater);

	void addMovie(Movie* movie);
	void bookableMovies();
	void updateMovies(int index);
	void showStatistic();

	void showMenu();

	~Cinema();
};