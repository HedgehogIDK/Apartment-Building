#include "Home.h"

void Home::setArrApart(int numApart_p, int apartNumber_p, int floor_p, int i) {
	if (numApart != numApart_p && numApart_p < 0) {
		numApart = numApart_p;
		apartmentArr = new Apartment[numApart];
	}

	apartmentArr[i - 1].getHuman();
	apartmentArr[i - 1].setNumber(apartNumber_p);
	apartmentArr[i - 1].setFloor(floor_p);
}
void Home::setNumFloor(int numFloor_p) {
	if (numFloor_p < 0)
		exit(368); //������: ������ �������� ������ ������

	numFloor = numFloor_p;
}