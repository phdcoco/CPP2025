#define _CRT_SECURE_NO_WARNINGS

#include "Cinema.h"
#include <iostream>

using namespace std;

/*
	�Լ� �̸� : Cinema
	��� : ��ü�� ������ ��, ��� �������� �ʱ�ȭ�Ѵ�.
	�Ű����� : numberOfMovie -> ��ϵ� ��ȭ�� index, theater -> ��ȭ�� �̸�
	��� : �ʱ� ��ȭ index�� 0���� ����, ��ȭ�� �̸��� �������� �ʱ�ȭ, ��ȭ ����Ʈ ���� NULL�� �ʱ�ȭ
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
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
	�Լ� �̸� : addMovie
	��� : ��ȭ ����Ʈ�� ��ȭ ��ü�� �߰��Ѵ�.
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

void Cinema::addMovie(Movie* movie)
{
	if (numberOfMovie < 10)
		movieList[numberOfMovie++] = movie;
}

/*
	�Լ� �̸� : bookableMovies
	��� : ���� ���� ������ ��ȭ�� ����Ѵ�.
	��� : getBooked�Լ��� �̿��� isBooked ���°� false�� ��ȭ���� ��� showMovieInfo �Լ��� �����Ų��.
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
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
	�Լ� �̸� : updateMovies
	��� : ������ ��ȭ index�� �Է¹޾� ���Ż��¸� ������Ʈ�ϰ� ��ȭ ������ ����Ѵ�.
	�Ű����� : index -> ��ȭ ����Ʈ�� index
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

void Cinema::updateMovies(int index)
{
	movieList[index]->setBooked();
	movieList[index]->showMovieInfo();
}

/*
	�Լ� �̸� : showStatistic
	��� : ���� ���°� true�� ��ȭ�� ���� ���ŵ� ��ȭ���� �� �ð� ���� ����Ѵ�.
	�Ű����� : bookedMovie -> ���ŵ� ��ȭ ����, amountTime -> �� �ð� ��
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
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

	cout << "- ���� ��ȭ �� : " << bookedMovie << endl;
	cout << "- ���� ��ȭ �� �ð� �� : " << amountTime << endl;
}

/*
	�Լ� �̸� : showMenu
	��� : �޴��� �����Ͽ� ���õ� �޴��� ���� ����� �����Ѵ�.
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

void Cinema::showMenu()
{
	cout << "�޴�:" << endl << "1. ��ȭ ����" << endl << "2. ���� ���" << endl << "3. �����ϱ�" << endl << "* ������ �Է��Ͻÿ�: ";
}

/*
	�Լ� �̸� : ~Cinema
	��� : ��� �ڵ尡 ������ ��ü�� �Ҹ�� ��, �������� �Ҵ�� �޸𸮸� �����Ѵ�.
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

Cinema::~Cinema()
{
	for (int i = 0; i < numberOfMovie; i++) {
		delete movieList[i];
	}
}