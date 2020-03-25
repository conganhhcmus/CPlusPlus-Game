#pragma once
#include "_Board.h"
#include "_Common.h"
#include "Player.h"
#include <conio.h>


class _Game
{
private:
	Player user1;
	Player user2;
	bool _time;
	_Board* _b;// một bàn cờ
	bool _turn;// lượt chơi: true lượt người một & false lượt người thứ hai
	int _x, _y; // Tọa độ hiện hành của nháy chuột
	int _command; // phím gõ từ người dùng
	bool _loop; // Biến quyết định thoát game hay 60hông
	clock_t _t;
	bool _options;

public:
	int getCommand();
	bool isContinue();
	char waitKeyBoard(); // Hàm nhận phím từ người dùng
	char askContinue();
	void startGame(); // Hàm bắt đầu game
	void exitGame(); // Hàm thoát game
	int processFinish();
	bool processCheckBoard();
	bool processCheckBoardCPU();
	void moveRight();
	void moveLeft();
	void moveUp();
	void moveDown();
	void ShowInfor();
	void ShowTime();
	Player& GetUser1() { return user1; }
	Player& GetUser2() { return user2; }
	void Turn(bool value) { _turn = value; }
	bool GetTurn() { return _turn; }
	void Init(int, int, int);
	void Undo(int, int);
	int GetX() { return _x; }
	void SetX(int value) { _x = value; }
	int GetY() { return _y; }
	void SetY(int value) { _y = value; }
	void ShowXO();
	_Board* GetBoard() { return _b; }
	void SetLoop(bool value) { _loop = value;}
	bool GetLoop() { return _loop; }
	void SetTime(bool value) { _time = value; }
	bool GetTime() { return _time; }
	double Runtime();
	void InitTime();
	int processFinishTime();
	void SetOptions(bool value) { _options = value; }
	bool GetOptions() { return _options; }
	void ShowWin(int);
	void DrawLineWin(int, int);
	void DrawFireWorks(int, int, int);

public:
	_Game(int, int, int);
	~_Game();
};
