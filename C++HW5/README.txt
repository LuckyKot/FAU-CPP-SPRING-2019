Fifth homework for C++ class taken in Florida Atlantic University.
The assignment provided skeleton code (empty functions + their descriptions) and a .cpp file with test cases.
Functions:

// The function arrayShiftRight will shift each element at position i in the array to
// position i + 1. myArray is a pointer to the array that will be shifted.
// The length of myArray is given by arrayLength. Assume the array has the
// extra capacity to perform the shift.
void arrayShiftRight(int *myArray, int arrayLength)

// This function will calculate the number of matches a lottery ticket has.
// The winning numbers are contained in a pointer to an array called winners.
// The customer numbers are contained in a pointer to an array called customerNumbers.
// Both arrays are of length arrayLength. You cannot assume that the numbers in the
// array are ordered (either in ascending or descending order).
// Return the number of matached numbers in the reference variable matches.
void getMatchingNumbers(const int *winners, const int *customerNumbers, int arrayLength, int &matches)

// The function trimArray() is given a pointer to a character array that 
// is NULL terminated called toTrim. This function is to remove any space characters 
// that exist between the last non-space character and the NULL character in the toTrim array.
// Example, the following character string "This text     " should be trimmed
// (or altered) to be "This text". The trimmed array is put in the array
// pointed to by the newArray pointer. Assume that the array pointed to by newArray
// is the same length as the toTrim array. If there are no spaces to trim a copy of
// the toTrim array should be made to the newArray.If the toTrim array has no characters
// then the newArray should have no cahracters(a null termination only).
void trimArray(const char *toTrim, char *newArray) {

