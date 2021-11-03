#include "Person.h"
#include <iostream>
#include <string.h>
#include <string>

Person::Person(){

};

Person::Person(string f_Name, string l_Name, string i_d) : firstName(f_Name), lastName(l_Name), id(i_d) {

};

Person::~Person(){

};

void Person::setFirstName(string name){
	firstName = name;
}

void Person::setLastName(string name){
	lastName = name;
}

void Person::setId(string id){
	this->id = id;
}

string Person::getFirstName(){
	return firstName;
}

string Person::getLastName(){
	return lastName;
}

string Person::getId(){
	return id;
}

void Person::Print() const
{
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Id: " << id << endl;
	
}
ostream& operator<<(ostream& output, const Person& obj) { //cout operator
	output << "First name: " << obj.firstName << endl << "Last Name: " << obj.lastName << endl << "ID: " << obj.id << endl;
	return output;
}

istream& operator>>(istream& input, Person& obj)
{
	cout << "Enter Worker Name :";
	input >> obj.firstName;
	cout << "Enter Worker Name :";
	input >> obj.lastName;
	cout << "Enter Worker Name :";
	input >> obj.id;
	return input;
}
