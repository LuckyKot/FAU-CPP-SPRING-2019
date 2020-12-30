Eigtth homework for C++ class taken in Florida Atlantic University.
The assignment works off the previous assignment, adding some more functions and a new .cpp file with test cases.
Functions:

// Implement the friend function getTimeString().
// The getTimeString() has 1 input input parameter.
// The first input paramenter is a const reference variable of type Time.
// This function returns a std::string type.
// This function will return the time of the first input paramenter object
// in string format as follows:  hours:minutes AM
// You cannot use the getHours(), getMinutes(), or getAMPM() member functions for this function.
// There must be a leading zero for hours and minutes if there is a single digit. 
// Example 5 hours, 23 minutes and PM will be formatted as follows  "05:23 PM"
// Example 4 hours, 4 minutes and AM will be formatted as follows  "04:04 PM"
std::string getTimeString(Time ref) {

// The non-member (and non-friend) function countZeros() has 4 input parameters.
// The first input parameter h is an integer and represents the hours for the time.
// The second input parameter m is an integer and represents the minutes for the time.
// The third input parameter AP is a char and represents the AM or PM (either 'A' or 'P').
// The fourth input parameter zeroCount is an integer reference variable.
// The function countZeros should create a Time object using the first 3 input parameters.
// Then the function countZeros will use the getTimeString function to get the character
// string of the time that was created. Then the function countZeros will count the number
// of '0' (zero) characters that are in the character string. The count is saved in the 
// reference variable zeroCount. The countZeros function prototype will be placed in the
// Time.h file and is a non-member function and is not a friend function.
void countZeros(int h, int m, int AP, int &ref) {


