#pragma once
#include "Kid.h"
#include "Class.h"
#include "Worker.h"

class KinderGarden{
	
	int num_of_kids = NULL;
	int num_of_Assitants = 1;
	int num_of_teacher = 1;
	int	num_of_class = 1;
	int menu_workers = 2;
	Kid** kid;
	Class** clas;
	Worker** worker;
public:
	KinderGarden() : num_of_class(1), num_of_kids(NULL), menu_workers(2), kid(nullptr), clas(nullptr), worker(nullptr) {}
	KinderGarden(int classNum, int kidNum, int workerNum, Kid** k, Class** c, Worker** w) : num_of_class(classNum), num_of_kids(kidNum), menu_workers(workerNum), kid(k), clas(c), worker(w) {}
	~KinderGarden();
	//Menu Options.
	void Menu();
	void print_menu();

	void Add_Assistant();
	void Add_Kid_Garden_Teacher();
	void Add_Class();
	void Show_Class(const int c)const;
	void Print_Assistant_info();
	void Show_Salary_by_Id()const;
	void Add_Kid();
	void Add_Qlf_To_Exst_Worker();
	void Print_BDay_Of_Kids()const;
	void Show_Excel_People()const;
	void Show_Smallest_Salary()const;
	void Exit();

};
