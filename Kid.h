#pragma once
#include "Person.h"
#include "Date.h"
#include <time.h>

class Kid :public Person{
public:
	Kid(string, string, string, Date);
	~Kid();
	string getAge();
	void Print();

protected:
	int class_number;
	Date dateOfBirth;
};
