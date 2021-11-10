#pragma once
#include "Header.h"
#include "position.h"
#include "pacman.h"
#include "cell.h"
#include "ghost.h"

class Game
{
	Cell m_board[MAX_ROW][MAX_COL];
	Pacman m_pac;
	Ghost m_g1;
	Ghost m_g2;
	int m_points;
	int m_lives;


public:
	Game();  //constractor

	void setPac(int row);
	Pacman getPac()const;
	void setCell(int row, int col, char ch, bool isBC, bool isPac, bool isGhost);
	Cell getCell(int row, int col)const;
	void setBoard();
	void printBoard();
	//	void runGame();
	//	void menu();
	//void printGame();
		/*void printInstructionsAndKeys();
		void printBoard();
		void printPac();
		void printGhost();*/
	bool isCollide(int row, int col);
	void setLives();
	int getLives() const;
	void losingLife(Cell c);
};
