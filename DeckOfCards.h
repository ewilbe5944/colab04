// Emily Wilber
// CPSC 1071: 3
// Bug Smashers
// Oct 12, 2020

#ifndef DECK_H
#define DECK_H
#include <vector>
#include <string>
#include <stdbool.h>
#include "Card.h"
#include <cstdlib>
using namespace std;



class DeckOfCards {
	
	private: 
		vector<Card> deck;
		int currentCard;   
		Card temp;
		
		int numShuffles;
		int rand1;
		int rand2;
	public: 
		DeckOfCards();
		void shuffle();
		Card dealCard();
		bool moreCards();
		//vector<Card> deck;

};

#endif