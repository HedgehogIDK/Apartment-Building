#include "Human.h"

void Human::setFullName(const char* fullName_p) {
	if (fullName)
		delete[]fullName;

	fullName = new char[strlen(fullName_p) + 1];
	strcpy_s(fullName, strlen(fullName_p) + 1, fullName_p);
}

void Human::setYear(int year_p) { year = year_p; }

void Human::setPhone(const char* Phone_p) { strcpy_s(Phone, SIZEPhone, Phone_p); }

int Human::getYear()const { return year; }

const char* Human::getFullName()const { return fullName; }

const char* Human::getPhone()const { return Phone; }

Human::Human(const char* fullName_p, const char* Phone_p, int year_p) :year{ year_p } {
	if (fullName_p == nullptr) {
		fullName = nullptr;
	}
	else {
		fullName = new char[strlen(fullName_p) + 1];
		strcpy_s(fullName, strlen(fullName_p) + 1, fullName_p);
	}
	strcpy_s(Phone, SIZEPhone, Phone_p);
}

Human::Human(const Human& human_p) {
	year = human_p.year;

	fullName = new char[strlen(human_p.fullName) + 1];
	strcpy_s(fullName, strlen(human_p.fullName) + 1, human_p.fullName);

	strcpy_s(Phone, SIZEPhone, human_p.Phone);
}