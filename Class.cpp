#include "Class.h"

Class::Class() :class_number(0), num_of_kids(0),num_of_assist(1), teacher(nullptr),AssistArr(nullptr),KidsArr(nullptr)
{

}
Class::Class(int c_Number) : class_number(c_Number) ,num_of_kids(0), num_of_assist(0), teacher(nullptr),AssistArr(nullptr),KidsArr(nullptr)
{}
void Class::SetKid(Kid* NewKid) {

	if (num_of_assist * 3 > num_of_kids) {
		Kid** temp = new Kid * [num_of_kids + 1];
		for (int i = 0; i < num_of_kids; i++)
			temp[i] = KidsArr[i];
		temp[num_of_kids] = NewKid;
		num_of_kids++;
		delete[] KidsArr;
		KidsArr = temp;
		cout << "Kid Added" << endl;
	}
	else
		cout << "Error, cannot be more then 3 kids on 1 assitants." << endl;
}
void Class::ShowTeacher()const {
	teacher->Print();
}
void Class::ShowAssist() const {
	for (int i = 0; i < num_of_assist; i++)
		AssistArr[i]->Print();
}
string Class::getId()
{
	return KidGardenTeacher().getId();
}
void Class::Print() const{
	cout << endl;
	cout << "CLASS NUMBER: [" << GetClassNumber() << "]" << endl;
	cout << "NUM OF KIDS: " << num_of_kids << endl << endl;
}
bool Class::operator==(int num)
{
	return this->class_number == num;
}

void Class::SetAssistant(Assistant** NewAssistant) {
	Assistant** temp2 = new Assistant * [num_of_assist + 1];
	for (int i = 0; i < num_of_assist; i++)
		temp2[i] = AssistArr[i];
	temp2[num_of_assist] = *NewAssistant;
	num_of_assist++;
	delete[] AssistArr;
	AssistArr = temp2;
	cout << "Assistant Added" << endl;
}
Class::~Class(){
	if (KidsArr != NULL) {
		delete KidsArr;
	}
	if (AssistArr != NULL) {
		delete AssistArr;
	}
}

ostream& operator<<(ostream& output, const Class& obj) { //cout operator
	Class().Print();
	output << "-------Teacher Info-------" << endl << "Teacher first name: " << KidGardenTeacher().getFirstName() << endl << "Teacher last name: " << KidGardenTeacher().getLastName() << endl << "Teacher ID: " << KidGardenTeacher().getId() << endl;
	output << "Teacher Evaluations: " << KidGardenTeacher().getEvls() << endl << "Teacher seniority: " << KidGardenTeacher().GetSeniority();
    output << endl << endl << "------Assistant Info------" << endl << "Assistant First name: " << Assistant().getFirstName() << endl << "Assistant Last name: " << Assistant().getLastName() << endl << "Assistant ID: " << Assistant().getId() << endl;
	output << "Assistant evaluations: " << endl << "Assistant seniority: " << Assistant().GetSeniority();
	return output;
}



void Class::addWorker(string fname, string lname, string salary, int a) {
	int num = +1;
	Assistant** nRoleList = new Assistant * [num];
	for (int i = 0; i < num; i++) {
		nRoleList[i] = AssistArr[i];
	}
	nRoleList[num_of_assist] = new Assistant(fname, lname, salary, 3,num);
	num_of_assist = num;		
		AssistArr = nRoleList;
	
}