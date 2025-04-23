#include "Cinema.h"
#include <iostream>

using namespace std;

int main() {
	Cinema* cinema = new Cinema("Hongik Cinema"); //영화관 객체 생성
	int option, index; //option -> 입력받은 메뉴 변수, index -> 영화 목록 인덱스

	Movie* Parasite = new Movie("Parasite", "Bong", 2019, 132);
	Movie* Interstellar = new Movie("Interstellar", "Nolan", 2014, 169);
	Movie* YourName = new Movie("YourName", "Shinkai", 2016, 106); //하드 코딩

	cinema->addMovie(Parasite);
	cinema->addMovie(Interstellar);
	cinema->addMovie(YourName);

	cinema->showMenu();
	cin >> option;

	while (option != 3) {
		if (option == 1) {
			cinema->bookableMovies();
			cout << "* 예매할 영화 번호를 입력하시오: ";
			cin >> index;
			cinema->updateMovies(index - 1); //index는 0부터 시작하므로 입력값에서 1을 뺀다.

			cinema->showMenu();
			cin >> option;
		}

		else if (option == 2) {
			cinema->showStatistic();

			cinema->showMenu();
			cin >> option;
		}
	}

	cout << "- 종료합니다." << endl;

	delete cinema;

	return 0;
}