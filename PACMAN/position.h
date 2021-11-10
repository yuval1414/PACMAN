#pragma once
#include "Header.h"
#include "gotoxy.h"


class Position
{
	int m_row, m_col;
	int m_rowDir, m_colDir;
	enum { min_row = 1, max_row = 79, min_col = 1, max_col = 24 };   // Screen limitation
public:
	Position()						// Constructor
	{
		m_row = m_col = 0;						// X , y coordination (0, 0(
		m_rowDir = 1;						// direction (1, 0) down
		m_colDir = 0;						 //CHECK!!!!
	}
	void init(int row, int col)		//????? ????? 
	{
		m_row = row;
		m_col = col;
		m_rowDir = 1;
		m_colDir = 0;
	}

	//void gotoxy(int row, int col);
	int getRow()const;
	int getCol()const;
	void move();                 //random move for ghosts
	void move(int dir);          //move by keyboard hits
	void draw(char ch)
	{
		gotoxy(m_row, m_col);
		cout << ch << endl;
	}
	void erase()
	{
		gotoxy(m_row, m_col);
		cout << ' ' << endl;
	}
};

