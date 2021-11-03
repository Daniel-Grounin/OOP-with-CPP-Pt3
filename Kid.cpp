#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include "Kid.h"
#include "Date.h"

Kid::Kid(string f_name, string l_name, string i_d, Date dateOfBirth) :Person(f_name, l_name, i_d)  {}


Kid::~Kid()
{

}

string Kid::getAge(){

	time_t rawtime;
	struct tm* timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	int day = timeinfo->tm_mday;
	int month = timeinfo->tm_mon + 1;
	int year = timeinfo->tm_year + 1900;

	if (dateOfBirth.getMonth()) {
		day -= 1;
		month += 12;
	}
	int pMonth = month - dateOfBirth.getMonth();
	int pYear = year - dateOfBirth.getYear() - dateOfBirth.carry();
	string sMonth, sYear, str;
	sMonth = to_string(pMonth);
	sYear = to_string(pYear);
	str = sYear + " Year " + sMonth + " Months ";

	return str;
}

void Kid::Print()
{
	cout << "Kid First name: " << getFirstName() << endl;
	cout << "Kid Last name: " << getLastName() << endl;
	cout << "Kid ID: " << getId() << endl;
	cout << "Kid Age: " << getAge() << endl;
	cout << "Kid Date Of Birth: " << Date().getYear() <<" / " <<Date().getMonth() <<" / " << Date().getDay()<< endl;
}
