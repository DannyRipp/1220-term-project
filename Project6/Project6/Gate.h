#pragma once
#include <iostream>
using namespace std;
class Wire;

enum GateType {
	NOT,
	AND,
	OR,
	XOR,
	NAND,
	NOR,
	XNOR,
};

class Gate {
	

private:
	Wire *in1, *in2;
	Wire *out;

	//ex. AND
	//0=NOT, 1=AND, 2=OR, 3=XOR, 4=NAND, 5=NOR, 6=XNOR
	GateType type;
	//??
	string name;
	//the gate delay
	int delay;
	string keyword;

public:
	Gate(int delay, Wire *in1, Wire *in2, Wire *out, GateType type);
	Gate(string keyword);
	
	int getType();
	void setType(GateType t);

	int getDelay();
	void setDelay(int d);

	Wire* getin1();
	Wire* getin2();
	Wire* getout();

	void notGate(int in1, int out);
	void andGate(int in1, int in2, int out);
	void orGate(int in1, int in2, int out);
	void xorGate(int in1, int in2, int out);
	void nandGate(int in1, int in2, int out);
	void norGate(int in1, int in2, int out);
	void xnorGate(int in1, int in2, int out);
};