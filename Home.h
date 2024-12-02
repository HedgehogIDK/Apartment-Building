#pragma once
#include "Apartment.h"
#include "Human.h"

class Home {
    Apartment* apartmentArr;
    int numApart;
    int numFloor;

public:
    //������������
    Home() :Home(1, 1) {}
    explicit Home(int numApart_p) :Home(numApart_p, 1) {}
    Home(int numApart_p, int numFloor_p);

    //����������� �����������
    Home(const Home& obj);

    //������ � ���������
    void setArrApart(int numApart_p, int apartNumber_p, int floor_p, int i, int sizeArr_p);
    void setNumFloor(int numFloor_p);
    Apartment* getApartmentArray() const;

    ~Home() {
        delete[] apartmentArr;
    }
};

