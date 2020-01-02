#pragma once
#include"Deck.h"
#include"deque"
class Player
{
public:
	Player();
	~Player();

	void add_hand();
	void show_hand();
	/*void showHand()
	{
		for (auto it : _hand)
		{
			it.displayCard();
		}
	}

	void addCard(Card card)
	{
			_hand.push_back(card);
	}*/
private:
	std::deque<Deck> _hands;
};

