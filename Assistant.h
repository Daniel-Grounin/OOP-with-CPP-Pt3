#pragma once
#include "Person.h"
#include "Worker.h"

class Assistant : public Worker{
public:
	Assistant(string, string, string, int,int);
	Assistant();
	~Assistant();
	bool DoesHeExcel();
	float Salary(){ return GetBasis() + GetQlf() * 50; }
	void Print();
	//Get & Set method's.
	//bool SetClass(Class* Class_num);

protected:
	int class_number;
	int numOfPosEvls;
};
