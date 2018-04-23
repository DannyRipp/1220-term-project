#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Gate;

class Wire {

private:
	//given in vector file
	vector<Gate *> out;
	//ex. A, B
	string name;
	//low, high, dont care
	int state;
	//??
	int index;
	//what the state was
	vector <Wire> history;
	int val;
	int num;
	


public:

	Wire(string name, int num, int state);
	Wire(string name, int num);
	

	friend int ConnectWireToGate(Wire*, Gate*);

	int getVal();
	void setVal(int v);

	string getName();
	void setName(string s);

	int getIndex();
	void setIndex(int i);
	
	int getNum();


};
