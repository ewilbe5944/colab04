// Emily Wilber
// CPSC 1071: 3
// Bug Smashers
// Oct 12, 2020


//#include "Card.h"
#include "DeckOfCards.h"
#include <iostream>
using namespace std;

int main() {
	DeckOfCards deckyboi;
	for (int i = 0; i < 52; i++) {
		cout << deckyboi.dealCard().toString() << endl;
	}

	deckyboi.shuffle();
	
	//cout << "Shuffled:\n";
	for (int j= 0; j< 52; j++) {
		cout << deckyboi.dealCard().toString() << endl;
	}

	
}