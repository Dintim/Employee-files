#pragma once
#include "Employee.h"

void enter_emp(Employee* &es, int &n, Employee emp) {
	Employee* tmp = new Employee[n + 1];
	for (int i = 0; i < n; i++)
		tmp[i] = es[i];
	tmp[n] = emp;
	delete[] es;
	es = tmp;
	n++;
}

void edit_emp(Employee* &es, int n, string emp_sname) {
	for (int i = 0; i < n; i++) {
		if (es[i].sname == emp_sname)
			es[i].edit();
	}
}

void delete_emp(Employee* &es, int &n, string emp_sname) {
	int x;
	for (int i = 0; i < n; i++) {
		if (es[i].sname == emp_sname) x = i;
	}
	Employee* tmp = new Employee[n - 1];
	for (int i = 0; i < x; i++)
		tmp[i] = es[i];
	for (int i = x; i < n - 1; i++)
		tmp[i] = es[i + 1];
	delete[] es;
	es = tmp;
	n--;
}

void search_sname(Employee* es, int n, string emp_sname) {
	bool f = false;
	for (int i = 0; i < n; i++) {
		if (es[i].sname == emp_sname) {
			es[i].print();
			f = true;
		}
	}
	if (f == false) cout << "not found" << endl;
}

void search_age(Employee* es, int n, int emp_age) {
	bool f = false;
	for (int i = 0; i < n; i++) {
		if (es[i].age == emp_age) {
			es[i].print();
			f = true;
		}
	}
	if (f == false) cout << "not found" << endl;
}

void search_char(Employee* es, int n, char buff) {
	bool f = false;
	for (int i = 0; i < n; i++) {
		if (es[i].sname[0] == buff || es[i].sname[0] == buff + 32 || es[i].sname[0] == buff - 32) {
			es[i].print();
			f = true;
		}
	}
	if (f == false) cout << "not found" << endl;
}
