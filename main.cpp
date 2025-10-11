#include <iostream>
#include "Employee.h" //class
#include <vector> //using for the Dynamic Array

using namespace std;

/*
Go Down the Ladder ( These guys are all different types of Employees, Employee should be parent class)
-create an Executive Class that has variables that Employees and Managers don't
-create a Manager Class that has variables that Employees and don't
-Employee Class already created
-create Salary variable and Bonuses (ability to change Job Position?)
*/

//Password Randomizer
string numberFunction() {
	srand(time(0));
	int computerInput = rand() % 8 + 1;

	string a;
	string b;
	string c;
	string d;
	string e;
	string f;

	string aChoice[9] = { "1","1","3","4","9","1","0","0","9" }; //1
	string bChoice[9] = { "2","6","5","3","7","0","2","1","2" }; //2
	string cChoice[9] = { "5","4","9","5","3","5","7","6","4" }; //3
	string dChoice[9] = { "8","5","6","8","2","8","4","3","3" }; //4
	string eChoice[9] = { "3","2","1","6","1","4","6","7","8" }; //5
	string fChoice[9] = { "9","9","4","0","5","3","8","1","2" }; //6

	a = aChoice[computerInput];
	b = bChoice[computerInput];
	c = cChoice[computerInput];
	d = dChoice[computerInput];
	e = eChoice[computerInput];
	f = fChoice[computerInput];

	string p = a + b + c + d + e + f;

	return p;
}

int main() {

	//3 Different Employees (Name, Job, Age, Phone Number, Email)
	Employee Herm("Sherwynd Herm", "Data Analyst", 31, "153-760-6912", "Herm@letopejem.info");
	Employee Corstma("Brandie Corstma", "Data Analyst", 64, "427-236-6477", "Corstma@letopejem.com");
	Employee Dimarna("Bayard Dimarna", "Software Engineer", 56, "644-204-4590", "Dimarna@letopejem.com");

	//Dynamic Array
	vector<Employee> listOfEmployees = { Herm,Corstma,Dimarna }; //This is Composition, put something similar in Employee.cpp

	string password = numberFunction();
	string userInput;

	//Delete this before running, see if you can guess the password >:D
	cout << password << "\n";

	cout << "What is the Password?\n";
	cin >> userInput;

	if (userInput == password || userInput == "Admin") {
		
		int choice;
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

		}
		else {
			cout << "Name: " << listOfEmployees[choice - 1].getName() << "\n";
			cout << "Job: " << listOfEmployees[choice - 1].getJob() << "\n";
			cout << "Age: " << listOfEmployees[choice - 1].getAge() << "\n";
			cout << "Phone: " << listOfEmployees[choice - 1].getPhoneNumber() << "\n";
			cout << "Email: " << listOfEmployees[choice - 1].getEmail() << "\n";
		}
	}
	else {
		cout << "Incorrect\n";
	}
}
