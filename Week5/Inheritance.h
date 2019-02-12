#pragma once
#include <string>
using namespace std;

enum Discipline { ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE, LITERATURE };
enum Classification { FRESH, SOPHOMORE, JUNIOR, SENIOR };

class Person
{
protected: // Accessible by inherited classes, but private outside of the hierarchy
	string name;
public:
	Person()
	{
		setName("");
	}
	Person(string name)
	{
		// this->name = name;
		setName(name);
	}
	void setName(string name)
	{
		this->name = name;
	}
	virtual string getName() const
	{
		return this->name;
	}
};

class Student : public Person // Inheritance ("Is-a" relationship)
{
private:
	// Person p; // Composition ("Has-a" relationship)
	Discipline major;
	Person* advisor;
public:
	Student(string name, Discipline d, Person* adv) : Person(name)
	{
		// this->name = name;
		//major = d;
		//advisor = adv;
		setMajor(d);
		setAdvisor(adv);
	}
	void setMajor(Discipline d)
	{
		major = d;
	}
	Discipline getMajor() const
	{
		return major;
	}
	void setAdvisor(Person* p)
	{
		advisor = p;
	}
	Person* getAdvisor() const
	{
		return advisor;
	}
};

class Faculty : public Person
{
private:
	Discipline department;
public:
	Faculty(string name, Discipline d) : Person(name)
	{
		// department = d;
		setDepartment(d);
	}
	void setDepartment(Discipline d)
	{
		department = d;
	}
	Discipline getDepartment() const
	{
		return department;
	}
};

class TFaculty : public Faculty
{
private:
	string title;
public:
	TFaculty(string name, Discipline d, string title) : Faculty(name, d)
	{
		// this->title = title;
		setTitle(title);
	}
	void setTitle(string title)
	{
		this->title = title;
	}

	// Override getName()
	virtual string getName() const
	{
		return title + " " + Person::getName();
	}
};