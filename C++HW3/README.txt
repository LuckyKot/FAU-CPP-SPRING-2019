Third homework for C++ class taken in Florida Atlantic University.
The assignment provided skeleton code (empty functions + their descriptions) and a .cpp file with test cases.
Functions:

// This function will add the even positive integers from 0 to highNum
// and return the summed value. 
// If the value of highNum is negative, then a 0 should be returned.
int addEvenIntegers(int highNum)

// This function will add the even positive integers from lowNum to highNum inclusive
// and return that sum. 
// If the value of highNum is negative then a 0 is returned
// If the value of lowNum is negative then a 0 is returned
// If highNum < lowNum then a 0 is returned.
// 
int addEvenIntegers(int lowNum, int highNum)

// This function will add 1 to an ASCII digit between '0' and '9' inclusive.
// ch is a character.
// If ch is not an ASCII digit (between '0' and '9' inclusive) then the same digit is returned (no change).
// If ch is between '0' and '8' then 1 is added and returned.
// If ch is '9' then the value of '0' must be returned.
char addOneToDigit(char ch)

// This function will return the monthly mortgage loan amount.
// loanAmount is the amount of the loan in dollars
// yearlyInterestRate is the yearly interest rate as a percent
// loanLength is the length of the loan in years
// If the loanAmount is <= 0 then return a -1.0
// If the yearlyInterestRate < 0 then return a -1.0
// If the yearlyInterestRate > 100 then return a -1.0
// If the loanLength <= 0 then return a -1.0
double getMortgagePayment(double loanAmount, double yearlyInterestRate, double loanLength) {