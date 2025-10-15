#include <iostream>
#include "Employee.h" //class
#include <vector> //using for the Dynamic Array

using namespace std;

//3 Different Employees (Name, Job, Age, Phone Number, Email)
Employee Herm("Sherwynd Herm", "Data Analyst", 31, "153-760-6912", "Herm@letopejem.info",435.62);
Employee Corstma("Brandie Corstma", "Data Analyst", 64, "427-236-6477", "Corstma@letopejem.com", 385.23);
Employee Dimarna("Bayard Dimarna", "Software Engineer", 56, "644-204-4590", "Dimarna@letopejem.com", 464.63);
Executive Boss("Mr. Bernard", "Executive", 76, "903-203-4192", "Exec@letopejem.com", 1632.41, "admin");
Manager Laufey("Ms. Laufey", "Manager", 23, "210-223-4342", "Laufey@letopejem.com", 934.56, "Laufey");
Manager David("Mr. David", "Manager", 26, "210-223-4342", "David@letopejem.com", 934.56, "David");

//Dynamic Array
vector<Employee> listOfEmployees = { Herm,Corstma,Dimarna, Boss,Laufey,David }; //This is Composition, put something similar in Employee.cpp

void exec() {

	int iChoice;
	char cChoice;

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

	if (iChoice > 4 || iChoice < 0) {

		cout << "Employee Not Found";
	}
	else {
		cout << "Name: " << listOfEmployees[iChoice - 1].getName() << "\n";
		cout << "Job: " << listOfEmployees[iChoice - 1].getJob() << "\n";
		cout << "Age: " << listOfEmployees[iChoice - 1].getAge() << "\n";
		cout << "Phone: " << listOfEmployees[iChoice - 1].getPhoneNumber() << "\n";
		cout << "Email: " << listOfEmployees[iChoice - 1].getEmail() << "\n";
		cout << "Salary: " << listOfEmployees[iChoice - 1].getSalary() << "\n\n";

		cout << "Want to change " << listOfEmployees[iChoice - 1].getName() << "'s salary? y/n\n";
		cin >> cChoice;

		if (cChoice == 'y') {
			
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

	cin >> choice;

	system("cls");

	if (choice > 4 || choice < 0) {

		cout << "Employee Not Found";
	}
	if (choice > 3 && choice < 5) {
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
	//std::vector<int> nums = { 1, 2, 3,4, 5 };
	std::cout.imbue(std::locale("")); //don't know "how" it works, but ya know what it does!

	//std::cout << 101'233'000'000 << "\n";
	
	//Manager m("person name", "some job", 12, "867-5309", "email.com", 123'456.99, "abcde"); //abcde is pasword
	//std::vector<Manager> managers = 
	//{
	//	Manager(
	//}

	//Employee e; 
	//e.age;


	string managerPass[2] = {Laufey.getManPass(),David.getManPass()};
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

		std::cout << "welcome manager\n";
	}
	else {
		cout << "Incorrect\n";
	}
	
}
