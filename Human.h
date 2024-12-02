#pragma once
#include <iostream>
#define SIZEPhone 15

using namespace std;

class Human
{
	char* fullName;
	int year;
	char Phone[SIZEPhone];
public:
		//Конструкторы 
    Human() :Human(nullptr, "\0", 0){}
    explicit Human(const char* fullName_p) :Human(fullName_p, "\0", 0){}
	Human(const char* fullName_p, const char* Phone_p) :Human(fullName_p, Phone_p, 0){}
	Human(const char* fullName_p, const char* Phone_p, int year_p);

	//Конструктор копирования
	Human(const Human& human_p);

	//Методы и акссесоры
	void setFullName(const char* fullName_p);
	void setYear(int year_p);
	void setPhone(const char* Phone_p);
	int getYear()const;
	const char* getFullName()const;
	const char* getPhone()const;

	~Human() {
		delete[]fullName;
	}
};

