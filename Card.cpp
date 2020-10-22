// Emily Wilber
// CPSC 1071: 3
// Bug Smashers
// Oct 12, 2020

#include "Card.h"
#include <string>
using namespace std;

//const char * const Card::stringFaces[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
const std::string Card::stringFaces[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
const char * const Card::stringSuits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

//default constructor
//sets card to arbitrary ace of hearts 
//specifically for temp in the shuffle function
Card::Card() {
	face = ACE;
	suit = HEARTS;
}

//constructor for Card
Card::Card(int cardFace, int cardSuit){
	face = static_cast<Faces>(cardFace);
	suit = static_cast<Suits>(cardSuit);
}

//returns the Card as a string in the form of �<face> of <suit>�
string Card::toString() {
	return stringFaces[face] + " of " + stringSuits[suit];
}