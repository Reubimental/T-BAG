#include "Game.hpp"

Game::Game() : _name("T-BAG")
{
}

void	Game::start()
{
	emit	gameUpdated(currentRoomDescription());
}

QString Game::processInput(const QString& input)
{
	QString output;
	
}