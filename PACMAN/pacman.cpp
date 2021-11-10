#include "pacman.h"

void Pacman::draw()
{
	this->m_pacman.draw(m_char);
}

void Pacman::setLives() // need to be in game
{
	m_lives--;
}

int Pacman::getLives()  // need to be in game
{
	return m_lives;
}

int Pacman::getRow()
{
	return this->m_pacman.getRow();
}
int Pacman::getCol()
{
	return this->m_pacman.getCol();
}

void Pacman::move(int dir)
{
	this->m_pacman.move(dir);
}