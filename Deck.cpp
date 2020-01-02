#include "Deck.h"

void Deck::generate_Deck()
{
	for (size_t i = 0; i <names.size() ; i++)
	{
		_deck.emplace_back(i, Suits::Hearts);
		_deck.emplace_back(i, Suits::Spades);
		_deck.emplace_back(i, Suits::Diamonds);
		_deck.emplace_back(i, Suits::Clubs);
	}
}

void Deck::shuffle(std::deque<Card>& _deck)
{
	std::random_shuffle(_deck.begin(), _deck.end());
}

void Deck::display_card(std::deque<Card>& deck)
{
	//auto it=std::find(std::begin(deck),std::end(deck),)
}

void Deck::display(std::deque<Card>& _deck)
{
	std::cout << "[";
	for (size_t i=0;i<_deck.size();i++)
	{
		std::cout << i << ",";
	}
	std::cout << "]";
}

std::ostream& operator<<(std::ostream& os, Deck& dek)
{

}
