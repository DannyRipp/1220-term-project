#include <iostream>
#include "Event.h"


Event::Event(int name, int time, int value, int cnt) {
	this->name = name;
	this->time = time;
	this->value = value;
	this->cnt = cnt;
}

int Event::getName(){
	return this->name;
}

int Event::getTime(){
	return time;
}

int Event::getValue(){
	return value;
}

int Event::getCnt(){
	return cnt;
}

bool operator<(const Event& firstEvent, const Event& secondEvent){
	if (firstEvent.time == secondEvent.time){
		return firstEvent.cnt > secondEvent.cnt;
	}
	else if (firstEvent.time > secondEvent.time) {
		return true;
	}
	return false;
}
