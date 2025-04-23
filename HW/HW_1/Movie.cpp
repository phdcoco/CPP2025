#define _CRT_SECURE_NO_WARNINGS

#include "Movie.h"
#include <iostream>

using namespace std;

/*
	�Լ� �̸� : Movie
	��� : ������, �Է¹��� �Ű�������� ��ü�� �����Ѵ�.
	�Ű����� : name -> ��ȭ �̸�, director -> ���� �̸�, date -> �����⵵, time -> �� �ð�
	��� : ���ڿ��� ���� �Է��ϴ� ��� const�� �����Ѵ�. ���� ���δ� �⺻���� false�� �Ѵ�.
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

Movie::Movie(const char* name, const char* director, int date, int time) //�ϵ��ڵ� �� char�� const�� �����ؾ� ��.
{
	strcpy(movieName, name);
	strcpy(directorName, director);
	openDate = date;
	runningTime = time;
	isBooked = false;
}

/*
	�Լ� �̸� : getMovieName
	��� : ��ȭ ������ ��ȯ�Ѵ�.
	��� : �� const�� ��ȯ�ϴ� ���� �������� ���ϰ� ����, �� const�� ��� ���� ������ ���´�.
	��ȯ�� : ��ȭ ����
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

const char* Movie::getMovieName() const
{
	return movieName;
}

/*
	�Լ� �̸� : getDirectorName
	��� : ���� �̸��� ��ȯ�Ѵ�.
	��ȯ�� : ���� �̸�
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

const char* Movie::getDirectorName() const
{
	return directorName;
}

/*
	�Լ� �̸� : getOpenDate
	��� : �����⵵�� ��ȯ�Ѵ�.
	��ȯ�� : �����⵵
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

const int Movie::getOpenDate() const
{
	return openDate;
}

/*
	�Լ� �̸� : getRunningTime
	��� : �󿵽ð��� ��ȯ�Ѵ�.
	��ȯ�� : �󿵽ð�
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

const int Movie::getRunningTime() const
{
	return runningTime;
}

/*
	�Լ� �̸� : getBooked
	��� : ���� ���θ� ��ȯ�Ѵ�.
	��ȯ�� : ���� ���� boolean ��
	���� : isBooked -> ���� ���� ����
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

bool Movie::getBooked() const
{
	return isBooked;
}

/*
	�Լ� �̸� : setBooked
	��� : ���� ���� isBooked�� true�� �����Ͽ� ���� ���·� �ٲ۴�.
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

void Movie::setBooked()
{
	isBooked = true;
}

/*
	�Լ� �̸� : showMovieInfo
	��� : ��ȭ�� �̸�, ������, �����⵵, �󿵽ð��� ����Ѵ�.
	�ۼ���¥ : 2025/04/10
	�ۼ��� : ������
*/

void Movie::showMovieInfo() const
{
	cout << getMovieName() << ", " << getDirectorName() << ", " << getOpenDate() << ", " << getRunningTime() << endl;
}