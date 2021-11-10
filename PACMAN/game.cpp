#include "Header.h"
#include "game.h"

using namespace std;

//CONSTRACTOR//
Game::Game()
{
	this->m_board;
	this->m_pac;
	this->m_g1;
	this->m_g2;
	this->m_points = 0;
	this->m_lives = 3;
}

//Cell Game::getBoard()
//{
//	return this->m_board;
//}

//SETTERS//
void Game::setBoard()
{
	int row, col;
	for (row = 0; row < MAX_ROW; row++)
	{
		for (col = 0; col < MAX_COL; col++)
		{
			if (row == 0 || row == MAX_ROW - 1) // the top and the bottom of the frame 
			{
				if (col == 40)
					m_board[row][col].setChar(' ');
				else
					m_board[row][col].setChar('-');
				//m_board[row][col].setisBC(false);
			}

			else if (col == 0 || col == MAX_COL - 1) // the sides of the frame 
			{
				if (row == 13)
					m_board[row][col].setChar(' ');
				else
					m_board[row][col].setChar('|');
				//m_board[row][col].setisBC(false);
			}

			else {
				m_board[row][col].setChar('*');  //in every other cell we put breadcrumb
				m_board[row][col].setisBC(true);
			}

		}
	}
}
void Game::printBoard()
{
	int row, col;
	for (row = 0; row < MAX_ROW; row++)
	{
		for (col = 0; col < MAX_COL; col++)
		{
			if (isCollide(row, col))  // pac collides with a ghost - prints the ghost
			{
				if(m_g1.getRow() == row && m_g1.getCol() == col)
					m_g1.print();
				else
					m_g2.print();
			}	 
			else if (m_board[row][col].getisPac())
				m_pac.draw();	//convert to print!!!!!
			else if (m_g1.getRow() == row && m_g1.getCol() == col)
				m_g1.print();
			else if(m_g2.getRow() == row && m_g2.getCol() == col)
				m_g2.print();
			else
			m_board[row][col].printCell();
		}
		cout << endl;
	}
}

bool Game::isCollide(int row, int col)
{
	if (m_board[row][col].getisPac() == true && m_board[row][col].getisGhost() == true)
		return true;
	else
		return false;
}


void Game::setPac(int row)
{
	m_pac.setRow(row);
}
Pacman Game::getPac()const
{
	return m_pac;
}
void Game::setCell(int row, int col,char ch, bool isBC, bool isPac, bool isGhost)
{
	m_board[row][col].setChar(ch);
	m_board[row][col].setisBC(isBC);
	m_board[row][col].setisPac(isPac);
	m_board[row][col].setisGhost(isGhost);
}
Cell Game::getCell(int row, int col)const
{
	return m_board[row][col];
}


void Game::setLives() 
{
	this->m_lives--;
}
int Game::getLives()const 
{
	return this->m_lives;
}
void Game:: losingLife(Cell c)    // getting a cell and cheking if the pac and the ghost is in it--> if yes remobing one life
{								// maybe return a value that tell us there has been a change in number of lives
	if (c.getisPac() == true && c.getisGhost() == true)
		setLives();
}

//void Game::ghostNotInEmptyCell(Cell c)
//{
//	if(c.getisGhost == true && c.getisBC == true)
//		
//}


//void Game::printGame()
//{
//	m_board.print();
//	m_pac.draw();
//	m_g1.print();
//	m_g2.print();
//	cout << points << endl;  // 4 digits
//}
//void Game::printBoard()
//{
//	this->m_board.print();
//}
//
//void Game::printPac()
//{
//	this->m_pac.draw();
//}
//void Game::printGhost()
//{
//	this->m_g1.print();
//	this->m_g2.print();
//}

//void Game::runGame()
//{
//	int key=9;
//	while ()
//	{
//	printGame();
//	cin >> key;
//	switch (key)
//	{
//	case UP:
//		key = 0;
//		break;
//	case DOWN:
//		key = 1;
//		break;
//	case LEFT:
//		key = 2;
//		break;
//	case RIGHT:
//		key = 3;
//		break;
//	}
//	m_pac.move(key);
//}
//void Game::menu()
//{
//	int choice=0;
//	while (1) {
//		cout << "MENU:" << endl << "1. Start new game" << endl << "2.Present instructions and keys" << endl << "3.EXIT" << endl;
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			runGame();
//			break;
//		case 2:
//			//print instructions and keys (func)
//			break;
//		case 3:
//			cout << "EXIT GAME" << endl;
//			exit(0);
//		default:
//			cout << "please press a number between 1-3" << endl;
//			break;
//		}
//	}
//
//}
//void Game::printInstructionsAndKeys()
//{
//
//}

