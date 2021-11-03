#include "KidGardenTeacher.h"
#include "Worker.h"
#include "Person.h"
KidGardenTeacher::KidGardenTeacher(string f_name, string l_name, string i_d, int posEvls,int qlf) :Worker(f_name, l_name, i_d, posEvls,qlf,0) 
{
	setFirstName(f_name);
	setLastName(l_name);
	setId(i_d);
}
KidGardenTeacher::KidGardenTeacher() :Worker("unknown", "unknown", "unknown", 0,0,0)
{
}


KidGardenTeacher::~KidGardenTeacher()
{
}

bool KidGardenTeacher::isSenior()
{
	if (GetSeniority() > 3) {
		return true;
	}
	return false;
}

float KidGardenTeacher::GetBonus() const
{
	float B = 0;
	if (GetSeniority() > 3) {
		B = 1000;
	}
	return B;
}

bool KidGardenTeacher::DoesHeExcel()
{
	if (getEvls() > 10 &&  GetQlf() >= 2 * GetSeniority()) {
		return true;
	}
	return false;
}

void KidGardenTeacher::Print()
{
	cout << "Teacher First name: " << getFirstName() << endl;
	cout << "Teacher Last name: " << getLastName() << endl;
	cout << "Teacher ID: " << getId() << endl;
	cout << "Teacher Salary: " << Salary() << endl;
	cout << "Teacher Class number: ???" << endl;
	cout << "Does he Excel: " << DoesHeExcel() << endl;
	cout << "Is He a Senior: " << isSenior() << endl;
}
