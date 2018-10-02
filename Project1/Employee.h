#pragma once
# include <iostream>
#include <string>
using namespace std;

struct Employee
{
	string name;
	string sname;
	int age;
	double salary;
	string adress;

	void print() {
		cout << name << " " << sname << " " << age << " " << salary << " " << adress << endl;
	}

	void enter() {
		cout << "enter name, surname, age, salary and adress of employee: " << endl;
		cin >> name >> sname >> age >> salary >> adress;
	}

	void edit() {
		int ch;
		cout << "what to edit (1-name, 2-surname, 3-age, 4-salary, 5-adress): ";
		cin >> ch;
		if (ch == 1) {
			cout << "new name: ";
			cin >> name;
		}
		if (ch == 2) {
			cout << "new surname: ";
			cin >> sname;
		}
		if (ch == 3) {
			cout << "new age: ";
			cin >> age;
		}
		if (ch == 4) {
			cout << "new salary: ";
			cin >> salary;
		}
		if (ch == 5) {
			cout << "new adress: ";
			cin >> adress;
		}			
	}

};
