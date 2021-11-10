#pragma once
#include "Header.h"

//void gotoxy(int row, int col)
//{
//	static HANDLE hConsoleOutput = NULL;
//	if (NULL == hConsoleOutput)
//		hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	COORD dwCursorPosition = { row, col };
//	cout.flush();
//	SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
//}


// function definition -- requires windows.h
inline void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	cout.flush();
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}

// function definition -- requires process.h
inline void clrscr()
{
	system("cls");
}

