#include "Player.h"


string Player::GetName()
{
	return _name;
}

void Player::SetName(string value)
{
	_name = value;
	_time = 30 * 60;
}

void Player::Input()
{
	//cin.ignore();
	getline(cin, _name);
	_time = 30 * 60;
}

void Player::IncreStep()
{
	_step++;
}

int Player::GetStep()
{
	return _step;
}
