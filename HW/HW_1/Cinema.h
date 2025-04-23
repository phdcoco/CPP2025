#pragma once
#include "Movie.h"

/*
	Ŭ���� �̸� : Cinema
	��� : Movie Ŭ������ ��ȭ�� ���� ���� �� ���� ���� ���� ����
			1. ����Ʈ�� ��ȭ ��ü �߰�
			2. ���� ������ ��ȭ ���
			3. ���� ���� ������Ʈ, ���� ���
			4. ��� ���
			5. �޴� ���
			6. ���� �� �Ҹ�
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
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