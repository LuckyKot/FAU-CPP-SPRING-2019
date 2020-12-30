#include <iostream>
#include <iomanip>

int main(void) {

	double sleep = 0;
	double anticipated = 0;
	int grade = 0;
	int size = 0;
	std::cout << "--" << std::endl;
	std::cout << "Please, enter the amount of sleep you had tonight" << std::endl;
	std::cin >> sleep;
	std::cout << "Please, enter the amount of sleep you anticipated to have tonight" << std::endl;
	std::cin >> anticipated;
	std::cout << std::fixed << std::setprecision(1) << "Your sleep last night was "  << sleep
		<< " hours and your anticipated sleep tonight is " << anticipated << " hours." << std::endl;
	std::cout << "Please, enter the grade you expect in this class" << std::endl;
	std::cin >> grade;
	std::cout << "You are expecting to receive " << grade << " in this class" << std::endl;
	std::cout << "On this computer platform an integer is allocated with " << sizeof(int) << " bytes." << std::endl;
	std::cout << "On this computer platform a char is allocated with " << sizeof(char) << " bytes." << std::endl;
	std::cout << "On this computer platform a float is allocated with " << sizeof(float) << " bytes." << std::endl;
	std::cout << "On this computer platform a double is allocated with " << sizeof(double) << " bytes." << std::endl;
	std::cout << "On this computer platform a boolean is allocated with " << sizeof(bool) << " bytes." << std::endl;
	bool boolean = 1;
	std::cout << "The value of true is " << boolean << std::endl;
	boolean = 0;
	std::cout << "The value of false is " << boolean << std::endl;
	int const REAL_CONSTANT = 2;
	std::cout << "The value of constant integer is " << REAL_CONSTANT << std::endl;

	
	return 0;
}