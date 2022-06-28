#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <ctime>

typedef struct student {
	std::string firstName;
	std::string lastName;
	std::string classes;
	std::string phNumber;
	std::string class1, class2, class3, class4, class5;
	std::string grade1, grade2, grade3, grade4, grade5;
};

void studentRegister() {
	std::fstream outfile("student.txt", std::ios::app);
	student stu1;
	std::cout << "Enter Students First Name: ";
	std::cin >> stu1.firstName;
	std::cout << "Enter Students Last Name: ";
	std::cin >> stu1.lastName;
	std::cout << "Enter Students Classes: ";
	std::cin >> stu1.classes;
	std::cout << "Enter Students Phone Number: ";
	std::cin >> stu1.phNumber;

	outfile << stu1.firstName << " " << stu1.lastName << " " << stu1.classes << " " << stu1.phNumber << std::endl;
	std::cout << "New Student Information has been Added! \n";
	outfile.close();
	return;
}

void studentGrades() {
	std::fstream outfile("grades.txt", std::ios::app);
	student stu1;
	std::cout << "Enter Students Classes: \n";
	std::cin >> stu1.class1 >> stu1.class2 >> stu1.class3 >> stu1.class4 >> stu1.class5;
	std::cout << "Enter Grade for: " << stu1.class1;
	std::cin >> stu1.grade1;
	std::cout << "Enter Grade for: " << stu1.class2;
	std::cin >> stu1.grade2;
	std::cout << "Enter Grade for: " << stu1.class3;
	std::cin >> stu1.grade3;
	std::cout << "Enter Grade for: " << stu1.class4;
	std::cin >> stu1.grade4;
	std::cout << "Enter Grade for: " << stu1.class5;
	std::cin >> stu1.grade5;

	outfile << stu1.class1 << ": " << stu1.grade1 << ", " << stu1.class2 << ": " << stu1.grade2 << ", " << stu1.class3 << ": " << stu1.grade3 << ", " << stu1.class4 << ": " << stu1.grade4 << ", " << stu1.class5 << ": " << stu1.grade5 << std::endl;
	std::cout << "New Student Information has been Added! \n";
	outfile.close();
	return;
}

void studentUpdate() {

}
