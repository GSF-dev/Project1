#include "Human.h"

void Human::setName(const std::string& name)
{
	name_ = name;
}

std::string Human::getName()const
{
	return name_;
}

void Human::setSurname(const std::string& surname)
{
	surname_ = surname;
}

std::string Human::getSurname()const
{
	return surname_;
}

void Human::setBirthdate(const tm& birthdate)
{
	birthdate_ = birthdate;
}

tm Human::getBirthdate()const
{
	return birthdate_;
			
};


void Human::setPhone(const std::string& phone)
{
	phone_ = phone;
}

std::string Human::getPhone()const
{
	return phone_;
}

void Human::long_print(const Human& human)
{
	std::cout << "Name: " << human.getName() << ", ";
	std::cout << "Surname: " << human.getSurname() << ", ";
	std::cout << "Birthdate: " << human.getBirthdate().tm_year<<"";
	std::cout << "Phone: " << human.getPhone() << std::endl;
}

Human Human::read_human()
{
	std::string name;
	std::string surname;
	tm birthdate;
	std::string phone;

	std::cout << "Enter a person fields:\n";
	std::cout << "Name: ";
	std::getline(std::cin, name);
	std::cout << "Surname: ";
	std::getline(std::cin, surname);
	std::cout << "Birthdate: ";
	std::cin >> birthdate.tm_mday;
	std::cin >> birthdate.tm_mon;
	std::cin >> birthdate.tm_year;
	std::cout << "Phone number: ";
	std::getline(std::cin, phone);

	return Human(name, surname, birthdate, phone);
}
