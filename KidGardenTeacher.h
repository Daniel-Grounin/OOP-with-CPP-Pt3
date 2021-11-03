#pragma once
#include "Worker.h"

class KidGardenTeacher : public Worker
{
protected:
	int class_number;
	int numOfPosEvls;
public:
	KidGardenTeacher(string, string, string, int,int);
	KidGardenTeacher();
	~KidGardenTeacher();
	bool isSenior();
	int getEvls() { return numOfPosEvls; }
	float GetBonus() const;
	float Salary()const { return GetBasis() + 200 * GetSeniority() + 50 * numOfPosEvls + 50 * GetQlf() + GetBonus(); }
	//Virtual method's of class Person.
	bool DoesHeExcel();
	void Print();

};

