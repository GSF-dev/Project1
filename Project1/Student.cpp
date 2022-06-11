#include "Student.h"

void Student::setName(const std::string& name)
{
	person_.setName(name);
}

std::string Student::getName() const
{
	return person_.getName();
}

void Student::setSurname(const std::string& surname)
{
	person_.setSurname(surname);
}

std::string Student::getSurname() const
{
	return person_.getSurname();
}

void Student::setBirthdate(const tm& birthdate)
{
	person_.setBirthdate(birthdate);
}

tm Student::getBirthdate() const
{
	return person_.getBirthdate();
}

void Student::setPhone(const std::string& phone)
{
	person_.setPhone(phone);
}

std::string Student::getPhone() const
{
	return person_.getPhone();
}

void Student::setMarks()
{	
	double marks;
	std::cout << "Enter a marks: ";
	do {
		std::cin >> marks;
		marks_.push_back(marks);
	} while (marks != 0);
}

void Student::getMarks() const
{
	std::cout << "Marks: ";
	for (std::vector<double>::const_iterator i = marks_.cbegin(); i < marks_.cend(); i++) {
		std::cout << *i<<", ";
	}
}

void Student::setDirection(const std::string& direction)
{
	direction_ = direction;
}

std::string Student::getDirection() const
{
	return direction_;
}

//Student Student::read_student()
//{
//	Human person;
//	std::vector<double>marks;
//	std::string direction;
//
//	std::cout << "Enter student fields: \n";
//	std::cout << "Person: ";
//	std::getline(std::cin, person);
//	std::cout << "Marks: ";
//	setMarks();
//	std::cout << "Direction: ";
//	std::getline(std::cin, direction);
//
//	
//
//	return Student();
//}



