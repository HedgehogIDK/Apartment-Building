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
<<<<<<< HEAD
    Home(int numApart_p, int numFloor_p);

    //����������� �����������
    Home(const Home& obj);
=======
    Home(int numApart_p, int numFloor_p) {
        if (numApart_p < 1 || numFloor_p < 1)
            exit(368); // Îøèáêà: íåâåðíûå ðàçìåðû äàííûõ

        numApart = numApart_p;
        apartmentArr = new Apartment[numApart];
        numFloor = numFloor_p;
    }
    // Èñïîëüçóåì ïîáèòîâîå êîïèðîâàíèå
    Home(const Home& obj) {
        *this = obj; 
    }
    // Ïîáèòîâîå êîïèðîâàíèå
    Home& operator=(const Home& obj) {
        if (this != &obj) {
            delete[] apartmentArr;
>>>>>>> 79e62f508890a2f782720cab6d0e42df11d17e31

    //������ � ���������
    void setArrApart(int numApart_p, int apartNumber_p, int floor_p, int i, int sizeArr_p);
    void setNumFloor(int numFloor_p);
    Apartment* getApartmentArray() const;

    ~Home() {
        delete[] apartmentArr;
    }
};

