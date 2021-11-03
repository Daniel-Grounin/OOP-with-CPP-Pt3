#pragma once
#include "Kid.h"
#include "KidGardenTeacher.h"
#include "Assistant.h"
class KidGardenTeacher;
class Assistant;

static int c_number = 0;
class Class {
private:
	int class_number = c_number;
	Assistant** AssistArr;
	KidGardenTeacher* teacher;
	Kid** KidsArr;
	int num_of_kids;//
	int num_of_assist;//
public:
	Class();
	Class(int cNumber);
	~Class();
	void SetAssistant(Assistant** NewAssistant);
	void SetTeacher(KidGardenTeacher *NewTeacher) { *teacher = *NewTeacher; }//
	void SetKid(Kid* NewKid);
	void addWorker(string fname, string lname, string salary, int a);
	Assistant** GetAssitant()const { return this->AssistArr; }
	Kid** GetKid() { return this->KidsArr; }
	KidGardenTeacher* GetTeacher()const { return teacher; }
	int GetClassNumber()const { return ++c_number; }
	int GetNumOfKids()const { return num_of_kids; }
	friend ostream& operator << (ostream&, const Class&);
	void ShowTeacher()const ;
	void ShowAssist()const ;
	string getId();
	void Print() const;
	bool operator == (int);
	bool operator == (string);
	
};
