#include <iostream>
#include "Home.h"
#include "Apartment.h"
#include "Human.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    int numApart, numFloor, floor, apart;
    Home home;

    do {
        // ���� ���������� �������
        cout << "������� ���������� ������� (������ ���� ������ 0): ";
        cin >> numApart;

        if (numApart <= 0) {
            cout << "������: ���������� ������� ������ ���� ������ 0\n";
        }
        // ���� ���������� ������
        cout << "\n������� ���������� ������ (������ ���� ������ 0): ";
        cin >> numFloor;

        if (numFloor <= 0) {
            cout << "������: ���������� ������ ������ ���� ������ 0\n";
        }
    } while (numApart <= 0 && numFloor <= 0);

    // ��������� ���������� ������ � ����
    home.setNumFloor(numFloor);

    // ���� ������ ��� ������ ��������
    for (int i = 0; i < numApart; i++) {
        do {
            cout << "\n������� ���� (�� 1 �� " << numFloor << "): ";
            cin >> floor;

            if (floor < 1 || floor > numFloor) {
                cout << "������: ���� ������ ���� �� 1 �� " << numFloor << "\n";
            }

            cout << "������� ����� �������� (������������� �����): ";
            cin >> apart;

            if (apart <= 0) {
                cout << "������: ����� �������� ������ ���� ������������� ������\n";
            }

        } while (floor < 1 || floor > numFloor && apart <= 0);

        // ��������� ������ ��������
        home.setArrApart(numApart, apart, floor, i);
    }

    cout << "\n���������� � ���������:\n\n";

    for (int i = 0; i < numApart; i++) {
        Apartment* apartmentArr = home.getApartmentArray();
        cout << "�������� " << apartmentArr[i].getNumber() << " �� ����� " << apartmentArr[i].getFloor() << ":\n";

        Human* residents = apartmentArr[i].getHuman();
        for (int j = 0; j < apartmentArr[i].getSizeArr(); j++) {
            cout << "\t������ " << j + 1 << ":\n";
            cout << "\t���: " << residents[j].getFullName() << "\n";
            cout << "\t�������: " << residents[j].getPhone() << "\n";
            cout << "\t��� ��������: " << residents[j].getYear() << "\n";
        }
    }

    return 0;
}