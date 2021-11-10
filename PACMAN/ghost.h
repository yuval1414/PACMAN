#pragma once
#include "Header.h"
#include "position.h"

class Ghost
{
	char m_char;
	Position m_ghost;
public:
	Ghost();                //constractor
	int getRow();
	int getCol();
	void move();
	void print();
};



