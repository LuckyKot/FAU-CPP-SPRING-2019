/*
By --
March 16, 2019 - COP 3014
Program that implements the requirements of homework 6
*/
#include "card.h"
#include <new>

// The function reverseArray is to reverse the elements in the input parameter array[].
// The reversed array will be stored in the input variable array[].
// The process of reversing the elements of the array MUST use a temporary array 
// of size length (the input parameter). Example of the reversing process: 
// Original array 1,3,5,4  Reversed array 4,5,3,1.
void reverseArray(int array[], int length)
{
	int k = length-1;
	int temp = 0;
	int *tempArray = new int[length];

	for (int i = 0; i <= length-1; i++) {
		temp = array[i];
		tempArray[k] = temp;
		k--;
	}
	for (int j = 0; j <= length-1; j++) {
		temp = tempArray[j];
		array[j] = temp;
	}

	delete[] tempArray;
}
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
{
	Card *card = new Card;
	card->suit = suit;
	if (value >= 0 && value < 13) {
		card->value = value;
	}
	else {
		card->value = 0;
	}
	card->next = next;
	return card;
}
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
{
	int hand = 7;
	Card *tempArray = new Card[hand];
	int length = 0;
	int hearts = 0;
	int clubs = 0;
	int diamonds = 0;
	int spades = 0;
	
	if (c==nullptr) {
		delete[] tempArray;
		return 0;
	}
	
	for (int i = 0; i<hand; i++) {
		if (c->next ==nullptr) {
			break;
		}
		tempArray[i] = c->next[i-1];
			length++;
	}
	for (int i = 0; i < length;i++) {
		if (tempArray[i].suit==0) {
			hearts++;
		}
		else if (tempArray[i].suit == 1) {
			clubs++;
		}
		else if (tempArray[i].suit == 2) {
			diamonds++;
		}
		else if (tempArray[i].suit == 3) {
			spades++;
		}
	}
	if (hearts >= 5 || clubs >= 5 || diamonds >= 5 || spades >= 5) {
		delete[] tempArray;
		return 1;
	}
	delete[] tempArray;
	return 0;	
}

