#include "Home.h"

void Home::setArrApart(int numApart_p, int apartNumber_p, int floor_p, int i, int sizeArr_p) {
    if (numApart != numApart_p && numApart_p > 0) {
        if (apartmentArr != nullptr) {
            delete[] apartmentArr;
        }
        numApart = numApart_p;
        apartmentArr = new Apartment[numApart];
    }
    apartmentArr[i].setSizeArr(sizeArr_p);
    apartmentArr[i].setHuman();
    apartmentArr[i].setNumber(apartNumber_p);
    apartmentArr[i].setFloor(floor_p);
}
void Home::setNumFloor(int numFloor_p) {
	if (numFloor_p < 0)
		exit(368); //Ошибка: введен неверный размер данных

	numFloor = numFloor_p;
}
Apartment* Home::getApartmentArray() const {
    return apartmentArr;
}

Home::Home(int numApart_p, int numFloor_p) {
    if (numApart_p < 1 || numFloor_p < 1)
        exit(368); // Ошибка: неверные размеры данных

    numApart = numApart_p;
    apartmentArr = new Apartment[numApart];
    numFloor = numFloor_p;
}

Home::Home(const Home& obj) {
    numApart = obj.numApart;
    numFloor = obj.numFloor;

    apartmentArr = new Apartment[obj.numApart];

    for (int i = 0;i < numApart;i++) {
        apartmentArr[i] = obj.apartmentArr[i];
    }
}