#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <sstream>

typedef struct student {
	std::string firstName;
	std::string lastName;
	std::string classes;
	std::string phNumber;
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

	outfile << stu1.firstName << stu1.lastName << stu1.classes << stu1.phNumber << std::endl;
	std::cout << "New Student Information has been Added! \n";
	outfile.close();
	return;
}