#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
#include "Kid.h"
#include <string>

Date::Date() :Day(0) ,Month(0),Year(0)
{

}
Date::Date(int d, int m, int y) : Day(d), Month(m), Year(y) {
	Day = d;
	Month = m;
	Year = y;
};

void Date::setDay(int d){
	Day = d;
}

void Date::setMonth(int m){
	Month = m;
}

void Date::setYear(int y){
	Year = y;
}



int Date::carry(){
	if (Month < getMonth()) {
		return 1;
	}return 0;
}

Date::~Date()
{

}

