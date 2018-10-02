#include <fstream>
#include "Employee.h"
#include "Functions.h"


int main()
{	

	int n;	
	Employee* es;

	in_file >> n;
	es = new Employee[n];

	for (int i = 0; i < n; i++) {
		in_file >> es[i].name >> es[i].sname >> es[i].age >> es[i].salary >> es[i].adress;
	}

	Employee emp;
	int choice;
	while (true) {
		cout << "choose (1-add, 2-edit, 3-delete, 4-search by surname, 5-search by age, 6-search by character): ";
		cin >> choice;
		if (choice < 1 || choice>6) {
			rewrite(es, n);
			break;
		}
		switch (choice)
		{
		case 1:
		{			
			emp.enter();
			enter_emp(es, n, emp);
			int ans;
			cout << "save corrections in file (0-no, 1-yes) ?: ";
			cin >> ans;
			if (ans==1)
				rewrite(es, n);			
		}
		break;
		case 2:
		{
			string emp_sname;
			cout << "enter surname: ";
			cin >> emp_sname;
			edit_emp(es, n, emp_sname);
			int ans;
			cout << "save corrections in file (0-no, 1-yes) ?: ";
			cin >> ans;
			if (ans == 1)
				rewrite(es, n);
		}
		break;
		case 3:
		{
			string emp_sname;
			cout << "enter surname: ";
			cin >> emp_sname;
			delete_emp(es, n, emp_sname);
			int ans;
			cout << "save corrections in file (0-no, 1-yes) ?: ";
			cin >> ans;
			if (ans == 1)
				rewrite(es, n);
		}
		break;
		case 4:
		{
			string emp_sname;
			cout << "enter surname: ";
			cin >> emp_sname;
			search_sname(es, n, emp_sname);
		}
		break;
		case 5:
		{
			int emp_age;
			cout << "enter age: ";
			cin >> emp_age;
			search_age(es, n, emp_age);
		}
		break;
		case 6:
		{
			char buff;
			cout << "enter first character of searching surname: ";
			cin >> buff;
			search_char(es, n, buff);
		}
		break;

		}
	}


	delete[] es;
	
	system("pause");
	return 0;
}