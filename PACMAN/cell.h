#pragma once
#include "Header.h"
#include "gotoxy.h"

//class Board
//{
//	const int m_rowNum = 25, m_colNum = 80;
//	const int m_UPtunnel[2] = { 1,40 }, m_DOWNtunnel[2] = { 25,40 },
//		m_RIGHTtunnel[2] = { 13,80 }, m_LEFTtunnel[2] = {13,1};
//public:
//	void print();
//
//
//
//};

//struct cell {
//	char ch;
//	bool isBC;
//
//};

class Cell
{
	//cell m_board[MAX_ROW][MAX_COL];
	char m_ch;
	bool m_isBC; // is there breadcrumb in the cell 
	bool m_isPac; // is there pacman in the cell 
	bool m_isGhost; // is there ghost in the cell 

public:
	Cell();
	Cell(char ch);

	void setChar(char ch);
	void setisBC(bool b);
	void setisPac(bool b);
	void setisGhost(bool b);

	char getChar() const;
	bool getisBC() const;
	bool getisPac() const;
	bool getisGhost() const;

	void printCell();

	//char** getBoard()const;
	//void setBoard(int row, int col);
	//void print();



};
