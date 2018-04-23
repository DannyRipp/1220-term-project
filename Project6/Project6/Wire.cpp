#include <iostream>
#include "Wire.h"
using namespace std;

	

Wire::Wire(string name, int num, int state)
{
	this->name = name;
	this->num = num;
	this->state = state;
}
Wire::Wire(string name, int num)
{
	this->name = name;
	this->num = num;

}

int Wire::getVal(){
	return this->val;
}

void Wire::setVal(int v){
	this->val = v;
}

string Wire::getName(){
	return this->name;
}

void Wire::setName(string s){
	this->name = s;
}



//I'm going to assume for now that Index is what the specific wire's interaction with a gate is. ie: if its input/output/to which gate
int Wire::getIndex(){
	return index;
}

void Wire::setIndex(int i)
{
	this->index = i;
}

int Wire::getNum()
{
	return this->num;
}

int ConnectWireToGate(Wire *, Gate *){
	
	return 0;
}

