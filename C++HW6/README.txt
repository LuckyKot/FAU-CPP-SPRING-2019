Sixth homework for C++ class taken in Florida Atlantic University.
The assignment provided skeleton code (empty functions + their descriptions) and a .cpp file with test cases.
Functions:

// The function reverseArray is to reverse the elements in the input parameter array[].
// The reversed array will be stored in the input variable array[].
// The process of reversing the elements of the array MUST use a temporary array 
// of size length (the input parameter). Example of the reversing process: 
// Original array 1,3,5,4  Reversed array 4,5,3,1.
void reverseArray(int array[], int length)

// The function createCard is to dynamically allocate a Card struct and
// return the pointer back to the function caller. The suit input parameter should
// set the suit variable in the Card struct. The next input parameter should
// set the next variable in the Card struct. The value input parameter
// needs to be validated. If the value input parameter has a valid range
// as defined in the card.h file, then the value input parameter will be assigned
// to the value variable in the Card struct. If the value input parameter is not
// valid then it should default to CARD_VALUE_START. This function is not responsible
// for deallocating Card instances.
Card * createCard(int value, Suit suit, Card *next)

// The isFlush() function is passed a pointer to the starting card of a
// set of cards. The cards are linked together by the next pointer in the Card struct. If the 
// input parameter is a nullptr, then there are no cards in the set. The end of the set of cards is 
// marked by the next pointer in the Card struct being a nullptr. See the attached picture for
// a block diagram of the set of cards structure. If five or more cards in the set of cards
// have the same suit, then the function returns a true, otherwise a false. The value attritube
// of a card is not relavent for this function. Example, a set of cards with 6 Hearts would return
// a true. A set of cards with 4 Hearts and 3 Clubs would return a false. See the card.h file
// for details on the Suit enum type definition.
bool isFlush(const Card *c)

