#pragma once
#include "Header.h"
#include "position.h"

class Pacman
{
	char m_char;
	Position m_pacman;
	int m_lives;

public:
	Pacman(int row = 39, int col = 22)   //constractor 
	{
		this->m_pacman.init(row, col);
		this->m_char = '@';
		this->m_lives = 3;
	}

	void draw();
	void setLives();
	int getLives();
	int getRow();
	int getCol();

	void move(int dir);


};
