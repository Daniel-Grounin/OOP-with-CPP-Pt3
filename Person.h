#pragma once
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class Person
{
private:
	string firstName;
	string lastName;
	string id;
public:
	Person();
	Person(string, string, string);
	virtual ~Person();
	void setFirstName(string);
	void setLastName(string);
	void setId(string);
	string getFirstName();
	string getLastName();
	string getId();
	virtual void Print() const;
	friend ostream& operator << (ostream&, const Person&);
	friend istream& operator >> (istream&, Person&);

};

