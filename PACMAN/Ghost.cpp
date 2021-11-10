#include "ghost.h"

Ghost::Ghost()  //constactor
{
	int row, col;
	row = (rand() % 24) + 1;
	col = (rand() % 79) + 1;
	this->m_ghost.init(row, col);
	this->m_char = '$';
}
int Ghost::getRow()
{
	return this->m_ghost.getRow();
}

int Ghost::getCol()
{
	return this->m_ghost.getCol();
}

void Ghost::move()
{
	this->m_ghost.move();
}

void Ghost::print()
{
	this->m_ghost.draw(m_char);
}

