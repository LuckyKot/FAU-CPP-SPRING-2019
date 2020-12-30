/*
By --
Feb 2, 2019 - COP 3014
Program that implements the requirements of homework 3
*/
#include <math.h>
#include "utilities.h"

// This function will add the even positive integers from 0 to highNum
// and return the summed value. 
// If the value of highNum is negative, then a 0 should be returned.
int addEvenIntegers(int highNum)
{
	int i = 0;
	int k = 0;
	if (highNum <= 0) {
		return 0;
	} else {
		while (i <= highNum) {
			k = k + i;
			i += 2;
		}
	}
	return k;
}

// This function will add the even positive integers from lowNum to highNum inclusive
// and return that sum. 
// If the value of highNum is negative then a 0 is returned
// If the value of lowNum is negative then a 0 is returned
// If highNum < lowNum then a 0 is returned.
// 
int addEvenIntegers(int lowNum, int highNum)
{
	int k = lowNum;
	int i = lowNum + 2;
	if (lowNum < 0) {
		return 0;
	}
	else if (highNum < 0) {
		return 0;
	}
	else if (highNum < lowNum) {
		return 0;
	} else {
		while ( i <= highNum) {
			k = k + i;
			i += 2;
		}
	}
	return k;
}

// This function will add 1 to an ASCII digit between '0' and '9' inclusive.
// ch is a character.
// If ch is not an ASCII digit (between '0' and '9' inclusive) then the same digit is returned (no change).
// If ch is between '0' and '8' then 1 is added and returned.
// If ch is '9' then the value of '0' must be returned.
char addOneToDigit(char ch)
{
	int i = ch;
	if (i<48 || i > 57) {
		return ch;
	}
	else if (i>=48 && i<=56) {
		i += 1;
		return i;
	} else if(i==57) {
		return '0';
	}
}

// This function will return the monthly mortgage loan amount.
// loanAmount is the amount of the loan in dollars
// yearlyInterestRate is the yearly interest rate as a percent
// loanLength is the length of the loan in years
// If the loanAmount is <= 0 then return a -1.0
// If the yearlyInterestRate < 0 then return a -1.0
// If the yearlyInterestRate > 100 then return a -1.0
// If the loanLength <= 0 then return a -1.0
double getMortgagePayment(double loanAmount, double yearlyInterestRate, double loanLength) {
	double mortgage = 0;
	if (loanAmount <= 0) {
		return -1.0;
	}
	else if (yearlyInterestRate<0) {
		return -1.0;
	}
	else if (yearlyInterestRate>100) {
		return -1.0;
	}
	else if (loanLength <= 0) {
		return -1.0;
	}
	else {
		mortgage = (loanAmount * ((yearlyInterestRate*0.01) / 12) / (1 - pow(1 + ((yearlyInterestRate*0.01) / 12), -loanLength * 12)));
	}
	return mortgage;
}
