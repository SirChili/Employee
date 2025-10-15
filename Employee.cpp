#include "Employee.h"

//_________________________________________________
//Employee Class Functions
void Employee::setName(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::setJob(string j)
{
	job = j;
}

string Employee::getJob()
{
	return job;
}

void Employee::setAge(int a)
{
	age = a;
}

int Employee::getAge()
{
	return age;
}

void Employee::setPhoneNumber(string p)
{
	phone = p;
}

string Employee::getPhoneNumber()
{
	return phone;
}

void Employee::setEmail(string e)
{
	email = e;
}

string Employee::getEmail()
{
	return email;
}

void Employee::setSalary(double s)
{
	salary = s;
}

double Employee::getSalary()
{
	return salary;
}

//Takes away the warning
Employee::Employee() = default;

Employee::Employee(string n, string j, int a, string p, string e, double s)
{
	name = n;
	job = j;
	age = a;
	phone = p;
	email = e;
	salary = s;
}
//Executive Functions
//____________________________________________________________________________________

void Executive::setExecPass(string pass)
{
	execPass = pass;
}

string Executive::getExecPass()
{
	return execPass;
}

Executive::Executive() = default;

Executive::Executive(string n, string j, int a, string p, string e,double s, string pass)
{
	name = n;

	//Employee::setName(n); //anther way of doing it (if name is private) 
	
	job = j;
	age = a;
	phone = p;
	email = e;
	salary = s;
	execPass = pass;
}
//Manager Functions
//____________________________________________________________________________________
void Manager::setManPass(string pass)
{
	manPass = pass;
}

string Manager::getManPass()
{
	return manPass;
}

Manager::Manager() = default;

Manager::Manager(string n, string j, int a, string p, string e, double s, string pass)
{
	name = n;
	job = j;
	age = a;
	phone = p;
	email = e;
	salary = s;
	manPass = pass;
}


