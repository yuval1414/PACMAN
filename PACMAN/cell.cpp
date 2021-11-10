#include "cell.h"
using namespace std;

// CONSTRACTOR
Cell::Cell()
{
	this->m_ch = ' ';
	this->m_isBC = true;
	this->m_isGhost = false;
	this->m_isPac = false;
}
Cell::Cell(char ch)  // maybe not needed- the board cant make a cell without getting a char- error (we cant send a char) 
{
	this->m_ch = ch;
	this->m_isBC = true;
	this->m_isGhost = false;
	this->m_isPac = false;
}

// SETTERS //
void Cell::setChar(char ch)
{
	this->m_ch = ch;
}
void Cell::setisBC(bool b)
{
	this->m_isBC = b;
}
void Cell::setisPac(bool b)
{
	this->m_isPac = b;

}
void Cell::setisGhost(bool b)
{
	this->m_isGhost = b;
}

// GETTERS //
char Cell::getChar() const
{
	return this->m_ch;
}
bool Cell::getisBC() const
{
	return this->m_isBC;
}
bool Cell::getisPac() const
{
	return this->m_isPac;
}
bool Cell::getisGhost() const
{
	return this->m_isGhost;
}

void Cell::printCell()
{
	cout << this->m_ch;	
}

//Board:: Board()                   //constractor
//{
//	int row, col;
//	for (row = 0; row < MAX_ROW; row++)
//	{
//		for (col = 0; col < MAX_COL; col++)
//		{
//			if (row == 0 || row == MAX_ROW - 1)
//			{
//				if (col == 40)
//					m_board[row][col].ch = ' ';
//				else 
//					m_board[row][col].ch = '-';
//			}
//				
//			else if (col == 0 || col == MAX_COL - 1)
//			{
//				if(row == 13)
//					m_board[row][col].ch = ' ';
//				else
//					m_board[row][col].ch = '|';
//			}
//				
//			else {
//				m_board[row][col].ch = '*';
//				m_board[row][col].isBC = true;
//			}
//				
//		}
//	}
//};
//
//char** Board::getBoard() const
//{
//	//return this->m_board[MAX_ROW][MAX_COL];
//}

//void Board::setBoard(int row, int col)
//{
//	m_board[row][col].ch = ' ';
//	m_board[row][col].isBC = false;
//}

//void Board::print()
//{
//	int row, col;
//	for (row = 0; row < MAX_ROW; row++)
//	{
//		for (col = 0; col < MAX_COL; col++)
//		{
//			cout << m_board[row][col].ch;
//		}
//		cout << endl;
//	}
//	
//}

//void Board::print()
//{
//	int row = 2, col;
//	for (col = 1; col < m_colNum; col++)
//	{
//		if (col == (m_colNum / 2))
//			cout << ' ';
//		cout << '-';
//	}
//	cout << endl;
//
//	for (row; row < m_rowNum - 1; row++)
//	{
//		if(row == (m_rowNum/2)+1)
//			cout << endl;
//		cout << '|';
//		for (col = 2; col < m_colNum; col++)
//			cout << ' ';
//		cout << '|';
//		cout << endl;
//	}
//
//	for (col = 1; col < m_colNum; col++)
//	{
//		if (col == (m_colNum / 2))
//			cout << ' ';
//		cout << '-';
//	}
//	cout << endl;
//}


