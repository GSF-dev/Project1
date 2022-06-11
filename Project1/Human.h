#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include <conio.h>

class Human {
	std::string name_;
	std::string surname_;
	tm birthdate_;
	std::string phone_; 
public:
	Human(const std::string& name,
		const std::string& surname,
		const tm& birthdate,
		const std::string& phone)
		: name_(name),
		surname_(surname),
		birthdate_(birthdate),
		phone_(phone)
	{
	}
	//setters and getters
	void setName(const std::string& name);
	std::string getName()const;
	void setSurname(const std::string& surname);
	std::string getSurname()const;
	void setBirthdate(const tm& birthdate);
	tm getBirthdate()const;
	void setPhone(const std::string& phone);
	std::string getPhone()const;
	//func
	void long_print(const Human& human);
	Human read_human();
	
};