#include <iostream>
#include "Home.h"
#include "Apartment.h"
#include "Human.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	int numApart, numFloor, floor, apart;
	Home home;

	cout << "������� ��� - �� �������: ";
	cin >> numApart;

	cout << "\n������� ��� - �� ������: ";
	cin >> numFloor;

	home.setNumFloor(numFloor);

	for (int i = 0; i < numApart;i++) {
		cout << "\n������� ����: ";
		cin >> floor;
		cout << "\n������� ����� ��������: ";
		cin >> apart;

		home.setArrApart(numApart, apart, floor, i);
	}

	return 0;
}