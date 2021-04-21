#include "Room.h"

using namespace std;

#include <vector>
#include <string>
#include <cstring>
#include <iostream> 

Room::Room() {
	roomNum = 0;
}

Room::Room(int roomNum) {
	this->roomNum = roomNum;
}

Room::Room(int x, int y) {
	this->x = x;
	this->y = y;

}
int Room::GetRoomNum() {
	return this->roomNum;
}



void Room::ShowChar() {
	if (hasPlayer == true) {
		cout << " S ";
	}
	else {
		cout << "   ";
	}
}

string Room::RetChar() {
	if (hasPlayer == true) {
		return " S ";
	}
	else {
		return "   ";
	}
}
