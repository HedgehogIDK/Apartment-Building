#include <iostream>
#include "Home.h"
#include "Apartment.h"
#include "Human.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    int numApart, numFloor, floor, apart, sizeArr;
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

            cout << "������� ������ ������� (������������� �����): ";
            cin >> sizeArr;

            if (sizeArr <= 0) {
                cout << "������: ������ �������� ������ ���� ������������� ������\n";
            }

        } while (floor < 1 || floor > numFloor && apart <= 0 && sizeArr <= 0);

        

        // ��������� ������ ��������
        home.setArrApart(numApart, apart, floor, i, sizeArr);
    }

    cout << "\n���������� � ���������:\n\n";

    for (int i = 0; i < numApart; i++) {
        Apartment* apartment = home.getApartmentArray();

        cout << "�������� " << apartment[i].getNumber() << " �� ����� " << apartment[i].getFloor() << ":\n";

        Human* people = apartment[i].getHuman();

        for (int j = 0; j < apartment[i].getSizeArr(); j++) {
            cout << "\t������ " << j + 1 << ":\n";
            cout << "\t���: " << people[j].getFullName() << "\n";
            cout << "\t�������: " << people[j].getPhone() << "\n";
            cout << "\t��� ��������: " << people[j].getYear() << "\n";
        }
    }

    return 0;
}