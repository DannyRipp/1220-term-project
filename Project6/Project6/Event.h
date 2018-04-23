#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Wire;

class Event {


public:
	Event(int name, int time, int value, int cnt);
	int name;
	int time;
	int value;
	int cnt;

	int getName();
	int getTime();
	int getValue();
	int getCnt();

	friend bool operator < (const Event& firstEvent, const Event& secondEvent);

};