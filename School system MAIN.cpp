#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <sstream>

#include "student.h"
#include "teacher.h"

void login();
void registration();
void forgot();
void loginMenu();
void studentInfo();
void classInfo();
void studentGrades();
void teacherInfo();

// Main Function 

int main() {
	int check;
	std::cout << "Welcome, Please Select Any of the Below Options:" << std::endl;
	std::cout << "Main Menu:" << std::endl;
	std::cout << "\n1. Login" << std::endl;
	std::cout << "2. Register" << std::endl;
	std::cout << "3. Forgot Username or Password" << std::endl;
	std::cout << "4. Exit" << std::endl;

	std::cin >> check;
	std::cout << std::endl;

	switch (check) {
	case 1:
		login();
		break;
	case 2:
		registration();
		break;
	case 3:
		forgot();
		break;
	case 4:
		system("cls");
		std::cout << "Please Exit." << std::endl;
		exit;

	}
}

// Function for Loggin In

void login() {
	int count;
	std::string user, password, un, pw;
	std::cout << "Username: ";
	std::cin >> user;
	std::cout << "Password: ";
	std::cin >> password;

	std::ifstream input("data.txt");
	while (input >> un >> pw) {
		if (un == user && pw == password) {
			count = 1;
			system("cls");
		}
	}
	input.close();
	if (count == 1) {
		std::cout << "Welcome " << user << " your login was successful!" << std::endl;
		std::cin.get();
		loginMenu();
	}
	else {
		std::cout << "There was a login error, please make sure your username and password were correct." << std::endl;
		main();
	}
}

// Function for Registering New Users

void registration() {
	std::string registerUser, registerPw, ru, rp;
	system("cls");
	std::cout << "Enter Your New Username: ";
	std::cin >> registerUser;
	std::cout << "Enter Your New Password: ";
	std::cin >> registerPw;

	std::ofstream reg("data.txt");
	reg << registerUser << " " << registerPw << std::endl;
	std::cout << "Registration Completed. Please login. \n" << std::endl;
	main();
}

// Function for "Forgot Password"

void forgot() {
	int ch;
	system("cls");
	std::cout << "\n1. Find your password by entering your username." << std::endl;
	std::cout << "2. Return to main menu." << std::endl;
	std::cin >> ch;
	
	switch (ch) {
	case 1:
		int count = 0;
		std::string searchUser, su, sp;
		std::cout << "Enter your username: ";
		std::cin >> searchUser;

		std::ifstream searchU("data.txt", std::ios::app);
		while (searchU >> su >> sp) {
			if (su == searchUser) {
				count = 1;
			}
		}
		searchU.close();
		if (count == 1) {
			std::cout << "Account Search Successful!" << std::endl;
			std::cout << "Your Password is: " << sp;
			std::cin.get();
			system("cls");
			main();
		}
		else {
			std::cout << "Sorry, Your Username was Not Found." << std::endl;
			std::cin.get();
			main();
		}
		break;
	}
}

// Main Student Menu Function

void loginMenu() {
	system("cls");
	int check2;
	std::cout << "\n1. Register New Student. " << std::endl;
	std::cout << "2. Student Information " << std::endl;
	std::cout << "3. Class Timetable. " << std::endl;
	std::cout << "4. Main Menu. " << std::endl;

	std::cin >> check2;
	switch (check2) {
	case 1:
		studentRegister();
	case 2:
		studentInfo();
		break;
	case 3:
		classInfo();
		break;
	case 4:
		system("cls");
		std::cout << "Please Return to Main Menu." << std::endl;
		main();
	}
}

// Student Information Function/Menu

void studentInfo() {
	system("cls");
	std::string studentInfo;
	std::ifstream readStudentInfo("student.txt");

	while (getline(readStudentInfo, studentInfo)) {
		std::cout << studentInfo << std::endl;
	}

	readStudentInfo.close();

	system("pause");
	loginMenu();
}


// Functions for all Student Information

void studentGrades() {
	std::cout << "\n********  Students Grades  ********\n" << std::endl;

	system("pause");
	loginMenu();
}

void teacherInfo() {
	std::cout << "\n********  Students Teachers  ********\n" << std::endl;

	system("pause");
	loginMenu();
}

void classInfo() {
	std::cout << "\n********  Timetable  ********\n" << std::endl;

	system("pause");
	loginMenu();
}
