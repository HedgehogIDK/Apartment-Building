#pragma once
#include "Human.h"
#define SIZE 100

class Apartment {
    Human* humanArr;
    int sizeArr;
    int number;
    int floor;

public:
    //Конструкторы 
    Apartment() :Apartment(0, 0, 2) {}
    explicit Apartment(int number_p) :Apartment(number_p, 0, 2) {}
    Apartment(int number_p, int floor_p) : Apartment(number_p, floor_p, 2) {}
    Apartment(int number_p, int floor_p, int sizeArr_p);

    //Конструктор копирования
    Apartment(const Apartment& Apart);

    //Методы и акссесоры
    void setSizeArr(int sizeArr_p);
    void setHuman();
    void setNumber(int number_p);
    void setFloor(int floor_p);
    Human* getHuman() const;
    int getFloor() const;
    int getNumber() const;
    int getSizeArr() const;

    ~Apartment() {
        delete[] humanArr;
    }
};

