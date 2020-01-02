#pragma once
#include <iostream>
#include<string>
#include<deque>
#include"Card.h"
#include<algorithm>
class Deck:public Card
{
	friend std::ostream& operator<<(std::ostream& os, Deck& dek);
public:
	Deck();
	~Deck();
	void generate_Deck();
	void shuffle(std::deque<Card>& _deck);
	void display_card(std::deque<Card>& _deck);
	void display(std::deque<Card>& _deck);
	std::deque<Card> _deck;
private:
	
};

