#include "Card.h"



	Card::Card(Name name,Suits suits):
		_name{ name }, _suits{ suits }
	{
		
		switch (name)
		{
		case Ace:std::cout << "Ace";
			_value = 11;
			break;
		case Two:std::cout << "2";
			_value = 2;
			break;
		case Three:std::cout << "3";
			_value = 3;
			break;
		case Four:std::cout << "4";
			_value = 4;
			break;
		case Five:std::cout << "5";
			_value = 5;
			break;
		case Six:std::cout << "6";
			_value = 6;
			break;
		case Seven:std::cout << "7";
			_value = 7;
			break;
		case Eight:std::cout << "8";
			_value = 8;
			break;
		case Nine:std::cout << "9";
			_value = 9;
			break;
		case Ten:std::cout << "10";
			_value = 10;
			break;
		case Jack:std::cout << "Jack";
			_value = 10;
			break;
		case Queen:std::cout << "Queen";
			_value = 10;
			break;
		case King:std::cout << "King";
			_value = 10;
			break;
		default:
			break;

		}

		suits = _suits;
	}





int Card::getValue()
{
	return _value;
}










/*♥";
"♦";
"♣";
 "♠";*/