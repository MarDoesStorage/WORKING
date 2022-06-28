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

typedef struct teacher {
std::string firstName;
std::string lastName;
std::string classes;
std::string phNumber;
};

void teacherRegister() {
	std::fstream outfile("teacher.txt", std::ios::app);
	teacher tea1;
	std::cout << "Enter Teachers First Name: ";
	std::cin >> tea1.firstName;
	std::cout << "Enter Teachers Last Name: ";
	std::cin >> tea1.lastName;
	std::cout << "Enter Teachers Class: ";
	std::cin >> tea1.classes;
	std::cout << "Enter Teachers Phone Number: ";
	std::cin >> tea1.phNumber;

	outfile << tea1.firstName << ", " << tea1.lastName << ", " << tea1.classes << ", " << tea1.phNumber << std::endl;
	std::cout << "New Teacher Information has been Added! \n";
	outfile.close();
	return;
}

void teacherUpdate() {

}
