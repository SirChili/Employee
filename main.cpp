#include <iostream>
#include "Employee.h" //class
#include <vector>

using namespace std;

/*
Go Down the Ladder ( These guys are all different types of Employees, Employee should be parent class)
create an Executive Class that has access to everything

create a Manager Class that has access to limited things

Employee Class created, limit things available to class

create Salary, Bonuses, ability to change certain things

*/

int main() {

	//3 Different Employees (Name, Job, Age, Phone Number, Email)
	Employee Herm("Sherwynd Herm", "Data Analyst", 31, "153-760-6912", "Herm@letopejem.info");
	Employee Corstma("Brandie Corstma", "Data Analyst", 64, "427-236-6477", "Corstma@letopejem.com");
	Employee Dimarna("Bayard Dimarna", "Software Engineer", 56, "644-204-4590", "Dimarna@letopejem.com");

	int password;
	int choice;

	//Dynamic Array
	std::vector<Employee> listOfEmployees = { Herm,Corstma,Dimarna }; //This is Composition, put something similar in Employee.cpp

	cout << "What is the Password?\n";
	cin >> password;
	
	if (password == 123456) {
		
		system("cls");

		cout << "Employee Information" << "\n";
		cout << "1. " << listOfEmployees[0].getName() << "\n";
		cout << "2. " << listOfEmployees[1].getName() << "\n";
		cout << "3. " << listOfEmployees[2].getName() << "\n";

		cin >> choice;

		system("cls");
	
		if (choice > 3 || choice < 0) {
			
			cout << "Employee Not Found";
			return -1;

		}else

			cout << "Name: " << listOfEmployees[choice - 1].getName() << "\n";
			cout << "Job: " << listOfEmployees[choice - 1].getJob() << "\n";
			cout << "Age: " << listOfEmployees[choice - 1].getAge() << "\n";
			cout << "Phone: " << listOfEmployees[choice - 1].getPhoneNumber() << "\n";
			cout << "Email: " << listOfEmployees[choice - 1].getEmail() << "\n";
	
	}
	else {
		cout << "Incorrect\n";
	}
}
