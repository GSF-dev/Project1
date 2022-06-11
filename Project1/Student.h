#pragma once
#include "Human.h"

class Student
{
	Human person_;
	std::vector <double> marks_;
	std::string direction_;
public:
	Student(const Human& person,
		std::vector <double>& marks,
		const std::string& direction)
		:person_(person),
		marks_(marks),
		direction_(direction)
	{
	}
	//setters and getters
	void setName(const std::string& name);
	std::string getName() const;
	void setSurname(const std::string& surname);
	std::string getSurname() const;
	void setBirthdate(const tm& birthdate);
	tm getBirthdate()const;
	void setPhone(const std::string& phone);
	std::string getPhone()const;
	void setMarks();
	void getMarks()const;
	void setDirection(const std::string& direction);
	std::string getDirection()const;
	//func
	Student read_student();

};

