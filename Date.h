#pragma once
#include "Person.h"

class Date
{
private:
	int Day;
	int Month;
	int Year;
public:
	Date();
	Date(int d, int m, int y);
	int carry();
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	int getDay() { return Day; }
	int getMonth() { return Month; }
	int getYear() { return Year; }
	
	~Date();
	
};

