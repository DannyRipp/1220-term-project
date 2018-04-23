#include <iostream>
#include "Event.h"


Event::Event(int wire, int time, int value, int cnt) {
	this->wire = wire;
	this->time = time;
	this->value = value;
	this->cnt = cnt;
};
	//neeed a less then operator that compares time and creaction count if nessisary, HotDOgs!


