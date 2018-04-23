#pragma once

#include <vector>
#include <iostream>
#include <queue>
#include <map>
#include "Event.h"
#include "Gate.h"
#include "Wire.h"
using namespace std;


class Circuit {
private:
	string circuit_File;
	string vector_File;

	map<string, int> inout;
	map<int, Wire *> wires;
	vector<Gate *> gates;

	priority_queue<Event> event_queue;

public:
	void readAndParseCircuitFile();
	void readAndParseVectorFile();
	void runTheSimulation();
	void printTheSimulation();
	void readtheFile();

	


};