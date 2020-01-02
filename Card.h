#pragma once
#include<string>
#include<iostream>
#include<vector>
#include<deque>
enum Suits{Hearts,Diamonds,Clubs,Spades};
enum Name { Ace, Two, Three, Four, Five, Six, Seven, Eight,Nine,Ten,Jack,Queen,King };
class Card
{
public:
	Card(Name name,Suits suits);
	void display();
	int getValue();//getter
	std::vector<Name> names;
private:
	int _value;
	Suits _suits;
	Name _name;
};

