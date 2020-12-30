Fourth homework for C++ class taken in Florida Atlantic University.
The assignment provided skeleton code (empty functions + their descriptions) and a .cpp file with test cases.
Functions:

// This function will perform a linear search of the input myArray[].
// arrayLength is the number of elements to search for in myArray[].
// If itemToFind is contained in myArray[] at least once then return true.
// If itemToFind is not contained in myArray[] then return false.
// If arrayLength is zero or negative then return false.
// You can only access the bounds of myArray, that is you only access between
// index 0 and index arrayLength-1.
bool isItemInArray(int myArray[], int arrayLength, int itemToFind)

// This function will add all the even positive numbers in myArray.
// The length of myArray is defined by arrayLength.
// The value returned is the sum of all the even positive numbers in the array.
// If there are no positive even integers in the array then return 0.
// If arrayLength is zero or negative then return 0.
// You can only access the bounds of myArray, that is you only access between
// index 0 and index arrayLength-1.
int addEvenPositive(int myArray[], int arrayLength)

// This function will find the highest value in myArray.
// The length of myArray is defined by arrayLength.
// The value returned is the highest value in myArray.
// If arrayLength is zero or negative then return 0.
// You can only access the bounds of myArray, that is you only access between
// index 0 and index arrayLength-1.
int getHighest(int myArray[], int arrayLength)

// Implement a function that performs a quick pick function for the Florida Lottery.
// You are to fill myArray with six unique random numbers from 1 to 53.
// All the six numbers must be different. 
// You should use getRandomInteger(int) function which is provided to you.
// You can also use isItemInArray() function which is implemented above.
void quickPick(int myArray[])

// do not make any changes to this function !!!
// getRandomInteger will return a random integer number between 0 and max
int getRandomInteger(int max)