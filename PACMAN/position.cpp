#include "position.h"
//#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//#include <conio.h>
//#include <windows.h>

using namespace std;

// function definition -- requires windows.h
//void Position::gotoxy(int row, int col)
//{
//	static HANDLE hConsoleOutput = NULL;
//	if (NULL == hConsoleOutput)
//		hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	COORD dwCursorPosition = { row, col };
//	cout.flush();
//	SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
//}
int Position::getRow() const
{
	return this->m_row;
}
int Position::getCol() const
{
	return this->m_col;
}

void Position::move() {
	int dir = rand() % 4;
	move(dir);
}

void Position::move(int dir) {
	switch (dir) {
	case 0: // UP
		--m_col;
		if (m_col < 1) {
			if (m_row == MID_COL)
				m_col = 24;
			else
				m_col = 1;
		}
		break;
	case 1: // DOWN
		++m_col;
		if (m_col > 24) {
			if (m_row == MID_COL)
				m_col = 1;
			else
				m_col = 24;

		}
		break;
	case 2: // LEFT
		--m_row;
		if (m_row < 1) {
			if (m_col == MID_ROW)
				m_row = 79;
			else
				m_row = 1;
		}
		break;
	case 3: // RIGHT
		++m_row;
		if (m_row > 79) {
			if (m_col == MID_ROW)
				m_row = 1;
			else
				m_row = 79;
		}
		break;
	}
}

