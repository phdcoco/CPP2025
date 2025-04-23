#pragma once

/*
	Ŭ���� �̸� : Movie
	��� : ��ȭ�� ���� �Ʒ� ����� ������
			1. ��ȭ �̸� ��ȯ
			2. ���� �̸� ��ȯ
			3. �����⵵ ��ȯ
			4. �� �ð� ��ȯ
			5. ���� ���� ��ȯ
			6. ���� ���� ����
			7. ��ȭ ���� ���
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
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