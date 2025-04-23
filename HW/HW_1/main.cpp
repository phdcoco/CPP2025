#include "Cinema.h"
#include <iostream>

using namespace std;

int main() {
	Cinema* cinema = new Cinema("Hongik Cinema"); //��ȭ�� ��ü ����
	int option, index; //option -> �Է¹��� �޴� ����, index -> ��ȭ ��� �ε���

	Movie* Parasite = new Movie("Parasite", "Bong", 2019, 132);
	Movie* Interstellar = new Movie("Interstellar", "Nolan", 2014, 169);
	Movie* YourName = new Movie("YourName", "Shinkai", 2016, 106); //�ϵ� �ڵ�

	cinema->addMovie(Parasite);
	cinema->addMovie(Interstellar);
	cinema->addMovie(YourName);

	cinema->showMenu();
	cin >> option;

	while (option != 3) {
		if (option == 1) {
			cinema->bookableMovies();
			cout << "* ������ ��ȭ ��ȣ�� �Է��Ͻÿ�: ";
			cin >> index;
			cinema->updateMovies(index - 1); //index�� 0���� �����ϹǷ� �Է°����� 1�� ����.

			cinema->showMenu();
			cin >> option;
		}

		else if (option == 2) {
			cinema->showStatistic();

			cinema->showMenu();
			cin >> option;
		}
	}

	cout << "- �����մϴ�." << endl;

	delete cinema;

	return 0;
}