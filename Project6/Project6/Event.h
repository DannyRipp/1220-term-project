#pragma once
#include <iostream>
using namespace std;


class Event {


public:
	Event(int wire, int time, int value, int cnt);
	int wire;
	int time;
	int value;
	int cnt;
};