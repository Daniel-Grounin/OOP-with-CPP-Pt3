#include "Worker.h"
#include "KidGarden.h"
#include "KidGardenTeacher.h"
#include "Assistant.h"
#include "Class.h"
#include <typeinfo>

KinderGarden::~KinderGarden(){}

void KinderGarden::Menu(){
	int choice;
	bool isRunning = true;
	while (isRunning) {
			print_menu();
			cin >> choice;
			switch (choice)
			{
			case 1: Add_Assistant();
				break;
			case 2: Add_Kid_Garden_Teacher();
				break;
			case 3: Add_Class();
				break;
			case 4: Show_Class(1);
				break;
			case 5: Print_Assistant_info();
				break;
			case 6: Show_Salary_by_Id();
				break;
			case 7: Add_Kid();
				break;
			case 8: Add_Qlf_To_Exst_Worker();
				break;
			case 9: Print_BDay_Of_Kids();
				break;
			case 10: Show_Excel_People();
				break;
			case 11: Show_Smallest_Salary();
				break;
			case 12: Exit();
				break;

			default:
				isRunning = false;
				break;
			}
	}
}

void KinderGarden::print_menu() {
	cout << "\n---------------------------------------\n";
	cout << "                  MENU: " << endl;
	cout << "  1. ADD Assistant" << endl;
	cout << "  2. ADD Teacher //method removed by Yeal orders." << endl;
	cout << "  3. ADD Class" << endl;
	cout << "  4. Print Class info by number" << endl;
	cout << "  5. Print Assitant info" << endl;
	cout << "  6. Print Salary by Worker ID" << endl;
	cout << "  7. Add Kid" << endl;
	cout << "  8. Add Qlf To Existing Worker" << endl;
	cout << "  9. Print Kids Birth dates" << endl;
	cout << " 10. Print Excel Workers" << endl;
	cout << " 11. Print Lowest Salary of Assitant" << endl;
	cout << " 12. EXIT " << endl;
	cout << "\n---------------------------------------\n";
}

void KinderGarden::Add_Assistant(){
	int num;
	cout << endl << "Enter class number for New Assistant: " << endl;
	cin >> num;
	string fname, lname, id;
	int seniority, qlf;
	cout << "Enter first name of the new Assitant: " << endl;
	cin >> fname;
	cout << "Enter last name of the new Assitant: " << endl;
	cin >> lname;
	cout << "Enter ID of the new Assitant: " << endl;
	cin >> id;
	cout << "Enter seniority and num of qulifications" << endl;
	cin >> seniority >> qlf;
	Assistant* assistants, ** Assistants_h;
	Assistants_h = new Assistant * [num_of_Assitants];
	assistants = new Assistant(fname, lname, id, seniority,qlf);
	for (int i = 0; i < num_of_Assitants; i++) {
		Assistants_h[i] = assistants;
	}
	Assistants_h[num_of_Assitants] = assistants;
	assistants = *Assistants_h;
	num_of_Assitants++;
}

void KinderGarden::Add_Kid_Garden_Teacher(){
	cout << "function deleted by new orders of yael." << endl;
	/*int num;
	cout << "Enter class number for New Teacher: " << endl;
	cin >> num;
	string fname, lname, id;
	int seniority, qlf;
	cout << "Enter first name of the new Teacher: " << endl;
	cin >> fname;
	cout << "Enter last name of the new Teacher: " << endl;
	cin >> lname;
	cout << "Enter ID of the new Teacher: " << endl;
	cin >> id;
	cout << "Enter seniority and num of qulifications" << endl;
	cin >> seniority >> qlf;
	KidGardenTeacher* Teachers, ** Teacher_h;
	Teacher_h = new KidGardenTeacher * [num_of_teacher];
	Teachers = new KidGardenTeacher(fname, lname, id, seniority,qlf);
	for (int i = 0; i < num_of_teacher; i++) {
		Teacher_h[i] = Teachers;
	}
	Teacher_h[num_of_teacher] = Teachers;
	Teachers = *Teacher_h;
	num_of_teacher++;*/
}

void KinderGarden::Add_Class(){
	Class* cls ,**cls_h;
	int num;
	cout << endl << "Enter class number: " ;
	cin >> num;
	c_number = num++;
	cls = new Class(c_number);
	cls_h = new Class *[num_of_class + 1];
	for (int i = 0; i < num_of_class; i++) {
		cls_h[i] = cls;
	}
	cls_h[num_of_class] = cls;
	clas = cls_h;
	for (int i = 0; i < menu_workers - 1; i++) {
		string fname, lname, id;
		int seniority, qlf;
		cout << "Enter first name of the new Assitant: ";
		cin >> fname;
		cout << "Enter last name of the new Assitant: " ;
		cin >> lname;
		cout << "Enter ID of the new Assitant: ";
		cin >> id;
		cout << "Enter seniority and num of qulifications: ";
		cin >> seniority >> qlf;
		Assistant* A;
		A = new Assistant(fname, lname, id, seniority, qlf);
		string tfname, tlname, Tid;
		int Tseniority, Tqlf;
		cout << "Enter first name of the new Teacher: ";
		cin >> tfname;
		cout << "Enter last name of the new Teacher: ";
		cin >> tlname;
		cout << "Enter ID of the new Teacher: ";
		cin >> Tid;
		cout << "Enter seniority and num of qulifications: ";
		cin >> Tseniority >> Tqlf;
		KidGardenTeacher* T;
		T = new KidGardenTeacher(tfname, tlname, Tid, Tseniority, Tqlf);
	}
}

void KinderGarden::Show_Class(const int c) const {
	cout << "Enter class number: ";
	int num;
	cin >> num;
	Class* Cls = nullptr;
	for (int i = 0; i < num_of_class; i++) {
		if (*(clas[i]) == num)
			Cls = clas[i];
		break;
	}
	if (Cls == nullptr) {
		cout << num << " not found!" << endl;
	}
	else {
		cout << *Cls;
	}
}

void KinderGarden::Print_Assistant_info() {
	string num;
	cout << "enter ID of Assistant: ";
	cin >> num;
	Assistant* temp = nullptr;
	for (int i = 0; i < num_of_Assitants; i++) {
		if (worker[i]->getId() == num) {
			Worker* W = dynamic_cast<Worker*>(worker[i]);
			W = worker[i];
			break;
		}
	}
	if (temp == nullptr) {
		cout << "worker not found" << endl;
	}
	else 
		cout << *temp;
}

void KinderGarden::Show_Salary_by_Id() const {
	string idNum;
	cout << "enter id number to check salary: ";
	cin >> idNum;
	if (idNum == Person().getId()) {
		cout << Worker().GetBasis();
	}
	else
		cout << "Worker not found." << endl;
}

void KinderGarden::Add_Kid() {
	int num;
	cout << "Enter class number for New Kid: " << endl;
	cin >> num;
	string fname, lname, id;
	int day, month, year;
	cout << "Enter first name of the new Kid: " << endl;
	cin >> fname;
	cout << "Enter last name of the new Kid: " << endl;
	cin >> lname;
	cout << "Enter ID of the new Kid: " << endl;
	cin >> id;
	cout << "Enter kid Birthday dd mm yyyy";
	cin >> day >> month >> year;
	Kid* kido, ** kido_h;
	Date d(day, month, year);
	kido_h = new Kid * [num_of_kids + 1];
	kido = new Kid(fname, lname, id, d);
	for (int i = 0; i < num_of_kids; i++) {
		kido_h[i] = kid[i];
	}
	kido_h[num_of_kids] = kido;
	kido = *kido_h;
	num_of_kids++;
}

void KinderGarden::Add_Qlf_To_Exst_Worker() {
	cout << "Enter the wanted Worker id: ";
	string id;
	cin >> id;
	for (int i = 0; i < menu_workers; i++) {
		if (Worker().getId() == id)
			Worker().GetQlf() + 1;
		break;
	}
	if (Worker().getId() != id) {
		cout << "worker not found " << endl;
	}
}

void KinderGarden::Print_BDay_Of_Kids() const {
	for (int i = 0; i < num_of_kids; i++) {
		cout << kid[i]->getAge();
	}
}

void KinderGarden::Show_Excel_People() const {
	for (int i = 0; i < menu_workers; i++) {
		if (worker[i]->DoesHeExcel()) {
			if (typeid(*worker[i]).name() == typeid(KinderGarden).name()) {
				cout << "Teacher: " << endl;
				worker[i]->Print();
			}
		}
		else
			cout << "Assistant: " << endl;
		worker[i]->Print();
	}
}

void KinderGarden::Show_Smallest_Salary() const{
	int Indx = 0, Max = 0;
	for (int i = 0; i < menu_workers; i++) {
		if (typeid(*worker[i]).name() == typeid(Assistant).name()) {
			if (worker[i]->GetBasis() > Max) {
				Max = worker[i]->GetBasis();
				Indx = i;
			}
		}
	}
	worker[Indx]->Print();
}

void KinderGarden::Exit(){

}

