// textRPG_proj2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Character.h"
#include "Enemy.h"
#include <string>
#include <Windows.h>
#include <ctime>

using namespace std;

character player = character();

void SetWindow(int Width, int Height)
{
	_COORD coord;
	coord.X = Width;
	coord.Y = Height;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Bottom = Height - 1;
	Rect.Right = Width - 1;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle 
	SetConsoleScreenBufferSize(hConsole, coord);            // Set Buffer Size 
	SetConsoleWindowInfo(hConsole, TRUE, &Rect);            // Set Window Size 
}

int main()
{
	srand((unsigned)time(0));
	SetWindow(100, 40);
	SetConsoleTitle(TEXT("Great Adventure of Greatness"));
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);
	printf(R"EOF(
	||=====================||
	||        _            ||
	||       ( )           ||
	||       |=|           ||
	||       |=|           ||
	||   /|__|_|__|\       ||
	||  (    ( )    )      ||
	||   \|\/\"/\/|/       ||
	||     |  Y  |         ||
	||     |  |  |         ||
	||     |  |  |         ||
	||    _|  |  |         ||
	|| __/ |  |  |\        ||
	||/  \ |  |  |  \      ||
	||   __|  |  |   |     ||
	||/\/  |  |  |   |\    ||
	||< +\ |  |\ />  \     ||
	||>  + \  | LJ    |    ||
	||    + \ |+  \  < \   ||
	||  (O)      +   |    )||
	||   |            \  /\||
	|| ( | )  (o)     \/  )||
	||_\\|//_( | )______)_/||
	||       \\|//         ||
	||=====================||
	)EOF");
	SetConsoleTextAttribute(hConsole, 10);
	cout << endl;
	cout << "Welcome to the Great Adventure of Greatness!\n\n";
	cout << "Great adventures await you, let's begin!\n\n";
	SetConsoleTextAttribute(hConsole, 7);
	player.setPlayerName();
    return 0;
}