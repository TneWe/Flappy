#include "Player.h"

void Player::add_hand()
{
	for (auto it : _hands)
	{
		it.displayCard();
	}
}
