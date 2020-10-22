// Emily Wilber
// CPSC 1071: 3
// Bug Smashers
// Oct 12, 2020


#include <vector>
#include <string>
#include <stdbool.h>
#include "DeckOfCards.h"
#include "Card.h"
#include <cstdlib>
using namespace std;

int currentCard = 0;

//constructor for DeckofCards fills out array "deck" with 52 cards
DeckOfCards::DeckOfCards() {
	for (int suit = 0; suit < 4; suit++) {
		for (int face = 0; face < 13; face++) {
			deck.push_back(Card(face, suit));
		}
	}
}

//shuffles the order of the cards in deck
void DeckOfCards::shuffle() {
	//100 is a randomly chosen number of times to switch cards
	//srand(time(NULL));
	int numShuffles = 100;
	while (numShuffles >= 0) {
		int rand1 = rand() % 52;
		int rand2 = rand() % 52;
		temp = deck[rand1];
		deck[rand1] = deck[rand2];
		deck[rand2] = temp;
		numShuffles--;
	}
}

//returns the card on "top" or that is next to be dealt
Card DeckOfCards::dealCard() {
	currentCard++;
	return deck[currentCard-1];

}

//returns true if there are more cards in the deck that can be dealt
//		  false otherwise
bool DeckOfCards::moreCards() {
	return 51 - currentCard <= 1;
}