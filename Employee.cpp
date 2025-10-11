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

//Takes away the warning
Employee::Employee() = default;

Employee::Employee(string n, string j, int a, string p, string e)
{
	name = n;
	job = j;
	age = a;
	phone = p;
	email = e;
}


