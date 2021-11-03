#include "Worker.h"
using namespace std;

Worker::Worker() 
{
	

}

Worker::Worker(string f_Name, string l_Name, string i_d, int seniority = 0, int qlf = 0, int numOfCourses = 0) :Person(f_Name, l_Name, i_d){

	setFirstName(f_Name);
	setLastName(l_Name);
	setId(i_d);

}

Worker::~Worker()
{
}

bool Worker::DoesHeExcel()
{
	return false;
}

void Worker::Print()
{
	cout << "Worker First name: " << getFirstName() <<endl;
	cout << "Worker Last name: " << getLastName() << endl;
	cout << "Worker ID: " << getId() << endl;
	cout << "Worker Salary: " << GetBasis() << endl;
	cout << "Worker Seniority years: " << GetSeniority() << endl;
}


