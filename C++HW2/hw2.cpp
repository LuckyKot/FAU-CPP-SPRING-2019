#include <iostream>
#include <iomanip>
#include <math.h>

int main(void) {

	double loan = 0;
	double length = 0;
	double interest = 0;
	double mortgage = 0;
	const double MIN_LOAN_AMOUNT = 0;
	const double MIN_LOAN_LENGTH = 0;
	const double MIN_LOAN_INTEREST = 0;
	const double MAX_LOAN_INTEREST = 100;
	const int MONTHS_PER_YEAR = 12;

	std::cout << "Student Name" << std::endl;
	std::cout << "Welcome to mortgage calculator" << std::endl;
	std::cout << "Please, enter the amout on of loan in dollars" << std::endl;
	std::cin >> loan;
	std::cout << "Please, enter the length of loan in years" << std::endl;
	std::cin >> length;
	std::cout << "Please, enter the interest rate in percents" << std::endl;
	std::cin >> interest;

	if (loan<=MIN_LOAN_AMOUNT) {
		std::cout << "The amount of loan is too low" << std::endl;
	}
	else if (length<=MIN_LOAN_LENGTH) {
		std::cout << "The length of a loan is too low" << std::endl;
	}
	else if (interest<MIN_LOAN_INTEREST || interest>MAX_LOAN_INTEREST) {
		std::cout << "The interest rate is wrong" << std::endl;
	}
	else {
		mortgage = (loan * ((interest*0.01)/12) / (1 - pow(1 + ((interest*0.01)/12), -length * MONTHS_PER_YEAR)));
		std::cout << "Your mortgage is " << mortgage << std::endl;
	}

	return 0;
}