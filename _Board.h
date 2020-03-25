#pragma once
#include "_Point.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include "_Common.h"
#include <random>
#include <time.h>

using namespace std;

struct Move
{
	int row, col;
};

class _Board
{
private:
	int _size;
	int _left, _top;
	_Point** _pArr;



public:
	int getSize();
	int getLeft();
	int getTop();
	int getXAt(int, int);
	int getYAt(int, int);
	void resetData();
	void drawBoard();
	int checkBoard(int, int, bool);
	int testBoard(int&, int&);
	int Undo(int, int);
	int GetXO(int, int);
	void Init(int, int, int);
	int checkBoardCPU(int&, int&, bool);
	void CPU(int&, int&);
	void Minimax(int&, int&);
	
	

private:

	long long TC_Dong(int, int);
	long long TC_Cot(int, int);
	long long TC_CheoXuoi(int, int);
	long long TC_CheoNguoc(int, int);
	
	long long PT_Dong(int, int);
	long long PT_Cot(int, int);
	long long PT_CheoXuoi(int, int);
	long long PT_CheoNguoc(int, int);

	//Mimimax
	bool isMovesLeft();
	int evaluate();
	int minimax(int depth, bool isMax);
	Move findBestMove();


public:
	_Board();
	_Board(int, int, int);
	~_Board();
};

