#include <iostream>
#include "Employee.h" //class
#include <vector> //using for the Dynamic Array

using namespace std;

//Employees (Name, Job, Age, Phone Number, Email, Salary)
Employee Herm("Sherwynd Herm", "Data Analyst", 31, "153-760-6912", "Herm@letopejem.info", 435.62);
Employee Corstma("Brandie Corstma", "Data Analyst", 64, "427-236-6477", "Corstma@letopejem.com", 385.23);
Employee Dimarna("Bayard Dimarna", "Software Engineer", 56, "644-204-4590", "Dimarna@letopejem.com", 464.63);
//Managers(Name, Job, Age, Phone Number, Email, Salary, Password)
Manager Laufey("Ms. Laufey", "Manager", 23, "210-223-4342", "Laufey@letopejem.com", 934.56, "Laufey");
Manager David("Mr. David", "Manager", 26, "210-223-4342", "David@letopejem.com", 934.56, "David");
//Same with Executive
Executive Boss("Mr. Bernard", "Executive", 76, "903-203-4192", "Exec@letopejem.com", 1'632.41, "admin");

//Dynamic Array
vector<Employee> listOfEmployees = { Herm,Corstma,Dimarna,Laufey,David,Boss };

void ManagerPrivilages() {

	int choice;
	char ynChoice;
	double salaryChange;

	system("cls");
	cout << "Employee Information" << "\n";
	cout << "1. " << listOfEmployees[0].getName() << "\n";
	cout << "2. " << listOfEmployees[1].getName() << "\n";
	cout << "3. " << listOfEmployees[2].getName() << "\n";
	cout << "4. " << listOfEmployees[3].getName() << "\n";
	cout << "5. " << listOfEmployees[4].getName() << "\n";
	cout << "6. " << listOfEmployees[5].getName() << "\n";

	cin >> choice;

	system("cls");

	if (choice > 6 || choice < 0) {
		cout << "Employee Not Found";
	}
	if (choice > 5 && choice < 7) { cout << "Permission Denied.\n"; }
	else {
		cout << "Name: " << listOfEmployees[choice - 1].getName() << "\n";
		cout << "Job: " << listOfEmployees[choice - 1].getJob() << "\n";
		cout << "Age: " << listOfEmployees[choice - 1].getAge() << "\n";
		cout << "Phone: " << listOfEmployees[choice - 1].getPhoneNumber() << "\n";
		cout << "Email: " << listOfEmployees[choice - 1].getEmail() << "\n";
		cout << "Salary: " << listOfEmployees[choice - 1].getSalary() << "\n\n";

		if (choice < 4 && choice > 0) {

			cout << "Change Salary? y/n\n";
			cin >> ynChoice;

			if (ynChoice == 'y') {
				cout << "What will be their new salary?\n";
				cin >> salaryChange;

				system("cls");
				listOfEmployees[choice - 1].setSalary(salaryChange);
				cout << listOfEmployees[choice - 1].getName() << "'s salary is now " << listOfEmployees[choice - 1].getSalary() << "\n";
			}
			else { cout << ""; }
		}
	}
}

void exec() {

	
	int iChoice;
	char YesNoChoice;
	double salaryChange;

	system("cls");

	cout << "Employee Information" << "\n";
	cout << "1. " << listOfEmployees[0].getName() << "\n";
	cout << "2. " << listOfEmployees[1].getName() << "\n";
	cout << "3. " << listOfEmployees[2].getName() << "\n";
	cout << "4. " << listOfEmployees[3].getName() << "\n";
	cout << "5. " << listOfEmployees[4].getName() << "\n";
	cout << "6. " << listOfEmployees[5].getName() << "\n";

	cin >> iChoice;

	system("cls");

	if (iChoice > 6 || iChoice < 0) {

		cout << "Employee Not Found";
	}
	else {
		cout << "Name: " << listOfEmployees[iChoice - 1].getName() << "\n";
		cout << "Job: " << listOfEmployees[iChoice - 1].getJob() << "\n";
		cout << "Age: " << listOfEmployees[iChoice - 1].getAge() << "\n";
		cout << "Phone: " << listOfEmployees[iChoice - 1].getPhoneNumber() << "\n";
		cout << "Email: " << listOfEmployees[iChoice - 1].getEmail() << "\n";
		cout << "Salary: " << listOfEmployees[iChoice - 1].getSalary() << "\n\n";

		cout << "Change Salary? y/n\n";
		cin >> YesNoChoice;

		if (YesNoChoice == 'y') {
			cout << "What will be their new salary?\n";
			cin >> salaryChange;

			system("cls");
			listOfEmployees[iChoice - 1].setSalary(salaryChange);
			cout << listOfEmployees[iChoice - 1].getName() << "'s salary is now " << listOfEmployees[iChoice - 1].getSalary() << "\n";
		}
		else { cout << ""; }
		
	}
}

void emp() {

	int choice;
	system("cls");

	cout << "Employee Information" << "\n";
	cout << "1. " << listOfEmployees[0].getName() << "\n";
	cout << "2. " << listOfEmployees[1].getName() << "\n";
	cout << "3. " << listOfEmployees[2].getName() << "\n";
	cout << "4. " << listOfEmployees[3].getName() << "\n";
	cout << "5. " << listOfEmployees[4].getName() << "\n";
	cout << "6. " << listOfEmployees[5].getName() << "\n";
	
	cin >> choice;

	system("cls");

	if (choice > 6 || choice < 0) {

		cout << "Employee Not Found";
	}
	if (choice > 3 && choice < 7) {
		cout << "Permission Denied";
	}
	else {
		cout << "Name: " << listOfEmployees[choice - 1].getName() << "\n";
		cout << "Job: " << listOfEmployees[choice - 1].getJob() << "\n";
		cout << "Age: " << listOfEmployees[choice - 1].getAge() << "\n";
		cout << "Phone: " << listOfEmployees[choice - 1].getPhoneNumber() << "\n";
		cout << "Email: " << listOfEmployees[choice - 1].getEmail() << "\n";
		cout << "Salary: " << listOfEmployees[choice - 1].getSalary() << "\n";
	}
}

int main() {
	
	std::vector<string> managerPass = { Laufey.getManPass(),David.getManPass() };
	cout.imbue(std::locale("")); //don't know "how" it works, but ya know what it does!

	string password = "123456";
	string userInput;

	cout << "What is the Password?\n";
	cin >> userInput;

	if (userInput == password) {
		emp();
	}
	else if (userInput == Boss.getExecPass()) {
		exec();
	}
	if (userInput == managerPass[0] || userInput == managerPass[1]) {

		ManagerPrivilages();
	}
	else if(userInput != password && userInput != Boss.getExecPass() && userInput != managerPass[0] && userInput != managerPass[1]) {
		cout << "Incorrect\n";
	}

}

