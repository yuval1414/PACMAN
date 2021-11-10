#include "pacman.h"

void Pacman::draw()
{
	this->m_pacman.draw(m_char);
}

//void Pacman::setLives() // need to be in game
//{
//	m_lives--;
//}
//
//int Pacman::getLives()  // need to be in game
//{
//	return m_lives;
//}
void Pacman::setRow(int row)
{
	this->m_pacman.setRow(row);
}
void Pacman::setCol(int col)
{
	this->m_pacman.setCol(col);
}
int Pacman::getRow()const
{
	return this->m_pacman.getRow();
}
int Pacman::getCol()const
{
	return this->m_pacman.getCol();
}

void Pacman::move(int dir)
{
	this->m_pacman.move(dir);
}