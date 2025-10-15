#pragma once
#include <iostream>

using namespace std;

class Employee
{
//private:
protected: //protected means CHILDREN classes of this class have access to these
	string name;
	string job;
	int age{}; //Curly braces Initializes age to 0
	string phone{}; //Curly braces Initializes phone to 0
	string email;
	double salary;
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

	void setSalary(double s);

	double getSalary();

	Employee();
	Employee(string n, string j, int a, string p, string e,double s);
};


class Manager : public Employee
{
private:
	string manPass;
	//Employee stuff; //not a good idea
public:

	void setManPass(string pass);
	string getManPass();

	Manager();
	Manager(string n, string j, int a, string p, string e, double s, string pass);
};




class Executive : public Employee
{
private:
	string execPass;
public:

	void setExecPass(string pass);

	string getExecPass();

	Executive();
	Executive(string n, string j, int a, string p, string e,double s, string pass);
};
