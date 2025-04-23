#pragma once

/*
	클래스 이름 : Movie
	기능 : 영화에 대해 아래 기능을 구현함
			1. 영화 이름 반환
			2. 감독 이름 반환
			3. 개봉년도 반환
			4. 상영 시간 반환
			5. 예매 여부 반환
			6. 예매 변수 변경
			7. 영화 정보 출력
	작성날짜 : 2025/04/10
	작성자 : 유도훈
*/

class Movie
{
private:
	char movieName[30];
	char directorName[30];
	int openDate;
	int runningTime;
	bool isBooked;
public:
	Movie(const char* name, const char* director, int date, int time);
	const char* getMovieName() const;
	const char* getDirectorName() const;
	const int getOpenDate() const;
	const int getRunningTime() const;
	bool getBooked() const;
	void setBooked();
	void showMovieInfo() const;
};