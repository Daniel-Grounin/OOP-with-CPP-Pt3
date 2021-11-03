#pragma once
#include "Person.h"

class Worker :virtual public Person{
public:
	Worker();
	Worker(string f_Name, string l_Name, string i_d, int sen, int qlf, int noc);
	~Worker();
	virtual float Salary()const {return (float)basis;}
	virtual bool DoesHeExcel() ;
	int GetBasis()const { return basis; };
	int GetSeniority()const { return Seniority; };
	int GetQlf()const { return numOfQlf; };
	void Print();
	
protected:
	static int const basis = 5000;
	int Seniority;
	int numOfQlf;
};

