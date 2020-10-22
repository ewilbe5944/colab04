// Emily Wilber
// CPSC 1071: 3
// Bug Smashers
// Oct 12, 2020

#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

enum Faces { ACE, DEUCE, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
enum Suits { HEARTS, DIAMONDS, CLUBS, SPADES };

class Card {
	
	private:	
		
		//static const char * const stringFaces[]; //declaration
		static const string stringFaces[];
		static const char * const stringSuits[]; 
		//const char *stringFaces[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
		//const char *stringSuits[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
		

		Faces face;
		Suits suit;
	public:
		Card();
		Card(int, int);
		string toString();

};


#endif