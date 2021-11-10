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
	int points;


public:
	Game();  //constractor

	void setBoard();


	void printBoard();
	//	void runGame();
	//	void menu();
	//	void printGame();
		/*void printInstructionsAndKeys();
		void printBoard();
		void printPac();
		void printGhost();*/

};
