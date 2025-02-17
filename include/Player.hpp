#pragma once

#include <string>
#include <map>
#include "Attribute.hpp"

class Player
{
	private:
		std::string		_name;
		unsigned int	_level;
		std::map<std::string, Attribute> _attributes;

    public:
        unsigned int    current_health;	//Current health player is at. Cannot be lower than 0 (death). Cannot be higher than max_health
		unsigned int	max_health;		//Maximum health player can reach at current stage of game.
		unsigned int	temp_health;

		void	addAttribute(const std::string& name, int value);
		Attribute& getAttribute(const std::string& name);
};