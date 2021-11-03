#include "Assistant.h"
#include "Worker.h"

Assistant::Assistant(string f_name, string l_name, string i_d, int sen, int qlf) : Worker(f_name, l_name, i_d, sen, qlf, 0)
{
	setFirstName(f_name);
	setLastName(l_name);
	setId(i_d);
}

Assistant::Assistant() : Worker("unknown", "unknown", "unknown",0,0,0)
{
	
}
Assistant::~Assistant()
{

}

void Assistant::Print()
{
	cout << "Assistant First name: " << getFirstName() << endl;
	cout << "Assistant Last name: " << getLastName() << endl;
	cout << "Assistant ID: " << getId() << endl;
	cout << "Assistant Salary: " << Salary() << endl;
	cout << "Assistant Qualifications: " << GetQlf() << endl;
}

bool Assistant::DoesHeExcel(){
	if (GetSeniority() >= GetQlf()) {
		return true;
	}
	return false;
}


