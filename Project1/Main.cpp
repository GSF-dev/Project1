#include "Human.h"
#include "Student.h"

int main() {
	Human h1 = h1.read_human();
	std::vector<double>grades;
	Student s1 = { h1, grades, "coding" };
	s1.setMarks();
	std::cout<<s1.getName()<<" "<<s1.getSurname()<<std::endl;
	s1.getMarks();
	


	return 0;
}