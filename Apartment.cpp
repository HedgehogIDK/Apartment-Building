#include "Apartment.h"

void Apartment::setHuman() {
	cout << "\n������� ������: ";
	cin >> sizeArr;

	char bufferStr[SIZE];
	int buffer;

	for (int i = 0;i < sizeArr;i++) {
		cout << "\n������� ���: ";
		cin.ignore();
		gets_s(bufferStr, SIZE);
		humanArr[i].setFullName(bufferStr);

		cout << "\n������� �������: ";
		cin.ignore();
		gets_s(bufferStr, SIZE);
		humanArr[i].setPhone(bufferStr);

		cout << "\n������� ��� ��������: ";
		cin >> buffer;
		humanArr[i].setYear(buffer);
	}
}

void Apartment::setNumber(int number_p) {
	number = number_p;
}

void Apartment::setFloor(int floor_p) {
	floor = floor_p;
}

Human* Apartment::getHuman() const {
	return humanArr;
}

int Apartment::getFloor() const{
	return floor;
}

int Apartment::getNumber() const{
	return number;
}