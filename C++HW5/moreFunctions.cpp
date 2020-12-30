/*
By --
Feb 17, 2019 - COP 3014
Program that implements the requirements of homework 5
*/
#include "moreFunctions.h"
#include <string>

// The function arrayShiftRight will shift each element at position i in the array to
// position i + 1. myArray is a pointer to the array that will be shifted.
// The length of myArray is given by arrayLength. Assume the array has the
// extra capacity to perform the shift.
void arrayShiftRight(int *myArray, int arrayLength)
{
	int i = arrayLength;
	for (i; i > 0; i--) {
		myArray[i] = myArray[i - 1];
	}
}

// This function will calculate the number of matches a lottery ticket has.
// The winning numbers are contained in a pointer to an array called winners.
// The customer numbers are contained in a pointer to an array called customerNumbers.
// Both arrays are of length arrayLength. You cannot assume that the numbers in the
// array are ordered (either in ascending or descending order).
// Return the number of matached numbers in the reference variable matches.
void getMatchingNumbers(const int *winners, const int *customerNumbers, int arrayLength, int &matches)
{
	int match = 0;
	for (int i = 0; i < arrayLength; i++) {
		for (int k = 0; k < arrayLength; k++) {
			if (customerNumbers[i] == winners[k]) {
				match++;
			}
		}
	}
	matches = match;
}

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
	int length = 0;
	char space = ' ';
	for (int i = 0; i < 200; i++) {
		if (toTrim[i] > 0) {
			length++;
		} else {
			break;
		}
	}
	for (int i = 0; i < length; i++) {
		newArray[i] = toTrim[i];
	}
	for (int k = length-1; k >= 0; k--) {
		if (newArray[k]==' ') {
			length = k;
		}	else {
			break;
		}
	}
	newArray[length] = 0;
	for (int i = 0; i < length; i++) {
		newArray[i] = toTrim[i];
	}
}

