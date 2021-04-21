#pragma once
using namespace std;

#include <vector>
#include <string>
#include <cstring>


class Room
{
private:
	bool hasItem = false;
	bool hasPlayer = false;
	bool hasnpc = false;
	bool winningRoom = false;
	bool significant = false;

	int roomNum = 0;
	int x;
	int y;
public:
	Room();
	Room(int roomNum);
	Room(int x, int y);
	void SetHasPlayer(bool hasPlayer) { this->hasPlayer = hasPlayer; };
	bool RetHasPlayer() { return hasPlayer; };
	void SetWinning(bool winning) { winningRoom = winning; };
	bool RetWinning() { return winningRoom; };
	int GetRoomNum();
	void ShowChar();
	string RetChar();
	void SetXY(int x, int y) { this->x = x; this->y = y; };

	int RetX() { return x; };
	int RetY() { return y; };
	
};

