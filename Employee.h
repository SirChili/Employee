#pragma once
#include <iostream>

using namespace std;

class Employee
{
private:
	string name;
	string job;
	int age{}; //Curly braces Initializes age to 0
	string phone{}; //Curly braces Initializes phone to 0
	string email;

public:

	void setName(string n);
	string getName();

	void setJob(string j);
	string getJob();

	void setAge(int a);
	int getAge();

	void setPhoneNumber(string p);
	string getPhoneNumber();

	void setEmail(string e);
	string getEmail();

	Employee();
	Employee(string n, string j, int a, string p, string e);
};


class Manager : public Employee 
{

};

class Executive : public Employee 
{
	
};
