//std::ifstream file(argv[1]);
#include <iostream>
#include "Gate.h"

using namespace std;
	
Gate::Gate(int delay, Wire *in1, Wire *in2, Wire *out, GateType type) {
	this->in1 = in1;
	this->in2 = in2;
	this->out = out;
	this->delay = delay;
	this->type = type;
}

Gate::Gate(string keyword){
	if (keyword == "NOT") {
		type = NOT;
	}
	else if (keyword == "AND") {
		type = AND;
	}
	else if (keyword == "OR") {
		type = OR;
	}
	else if (keyword == "XOR") {
		type = XOR;
	}
	else if (keyword == "NAND") {
		type = NAND;
	}
	else if (keyword == "NOR") {
		type = NOR;
	}
	else if (keyword == "XNOR") {
		type = XNOR;
	}
}

//Depending on the function of GetType we may need if statements changing it back to the name
//If we will only use get type in our own code, we have to remember the integers assigned to each type
int Gate::getType(){
	return this -> type;
}

void Gate::setType(GateType t) {
	this->type = t;
}


int Gate::getDelay(){
	return this->delay;
}

void Gate::setDelay(int d){
	this->delay = d;
}

Wire * Gate::getin1(){
	return this->in1;
}

Wire * Gate::getin2(){
	return this->in2;
}

Wire * Gate::getout(){
	return this->out;
}

void Gate::notGate(int in1, int out){
	if (in1 == 1) {
		out = 0;
	}
}

void Gate::andGate(int in1, int in2, int out){
	if (in1 == 1 && in2 == 1) {
		out = 1;
	}
	else out = 0;
}

void Gate::orGate(int in1, int in2, int out){
	if (in1 == 0 && in2 == 0) {
		out = 0;
	}
	else out = 1;
}

void Gate::xorGate(int in1, int in2, int out){
	if ((in1 == 0 && in2 == 0) || (in1 == 1 && in2 ==1)) {
		out = 0;
	}
	else out = 1;
}

void Gate::nandGate(int in1, int in2, int out){
	if (in1 == 0 && in2 == 0) {
		out = 1;
	}
	else out = 0;
}

void Gate::norGate(int in1, int in2, int out){
	if (in1 == 1 && in2 == 1){
		out = 0;
	}
	else out = 1;
}

void Gate::xnorGate(int in1, int in2, int out){
	if (in1 == 0 && in2 == 0){
		out = 1;
	}
	else if (in1 == 01 && in2 == 1){
		out = 1;
	}
	else out = 0;
}
