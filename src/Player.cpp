#include "Player.hpp"

Player::Player()
{

}

void	Player::addAttribute(const std::string& name, int value)
{
	_attributes[name] = Attribute(name, value);
}

Attribute& Player::getAttribute(const std::string& name)
{
	return (_attributes.at(name));
}