#include "Circuit.h"
#include "Wire.h"
#include "Gate.h"
#include "Event.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

void Circuit::readtheFile(){
	string circuit_File;
	string vector_File;
	
	string input_file;
	cout << "Please type the name of the circuit file" << endl;
	cin >> input_file;

	this->circuit_File = input_file + ".txt";
	this->vector_File = input_file + "_v.txt";

}


void Circuit::readAndParseCircuitFile()
{	

	//map<string, int> inout;
	//map<int, Wire *> wires;
	//-vector<Gate *> gates;


	ifstream circuit_File;

	string keyword;
	string name;
	GateType type;
	int num;
	int delay;
	string dummy;
	Wire* in1;
	Wire* in2;
	Wire* out;
	while (!circuit_File.eof()) {
		circuit_File >> keyword;

		if (keyword == "INPUT") {
			circuit_File >> name >> num;
			Wire *wire = new Wire(name, num);
			wires[num] = wire;
			inout[name] = num;
		}
		else if (keyword == "OUTPUT") {
			circuit_File >> name >> num;
			Wire *wire = new Wire(name, num);
			wires[num] = wire;
			inout[name] = num;
		}

		else if (keyword == "AND" || keyword == "OR" || keyword == "XOR" || keyword == "NAND" || keyword == "NOR" || keyword == "XNOR") {
			int wirenum1, wirenum2, wireOut;
			circuit_File >> delay >> dummy >> wirenum1 >> wirenum2 >> wireOut;

			if (wires.find(wirenum1) != wires.end()) {
				Wire *wire = new Wire(nullptr, wirenum1);
				wires.insert(pair<int, Wire*>(num, wire));
				in1 = wire;
			}
			else {
				in1 = wires[wirenum1];
			}

			if (wires.find(wirenum2) != wires.end()) {
				Wire *wire = new Wire(nullptr, wirenum2);
				wires.insert(pair<int, Wire*>(num, wire));
				in2 = wire;
			}
			else {
				in2 = wires[wirenum2];
			}

			if (wires.find(wireOut) != wires.end()) {
				Wire *wire = new Wire(nullptr, wireOut);
				wires.insert(pair<int, Wire*>(num, wire));
				out = wire;
			}
			else {
				out = wires[wireOut];
			}

			//vector<Wire*> wires(0);
			////	while (!input_file.eof())
			////{
			//circuit_File >> name >> num;
			//if (num  >wires.size() - 1)
			//{
			//	wires.push_back(nullptr);
			//}
			//else
			//{
			//	wires[num] = new Wire(name, num);
			//}
			//if the wire is null then add it to a list and from there we can tell if we need to add a new wire or somthing.
			//}

			/*for (int i = 0; wires.size()>0; i++){
				if (wires[i] == nullptr&& i == out){
					Wire *wire = new Wire(NULL, num);
					wireVars wv;
					wv.name = nullptr;
					wv.num = num;
					wv.time = -1;
					wv.val = -1;
					wire_vars[name] = wv;
				}
			}
	*/
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
			Gate *gate = new Gate(delay, in1, in2, out, type);
			gates.push_back(gate);
		}

		else if (keyword == "CIRCUIT") {

			return;
		}
	}
}

// test git
// HELP
// TEST NUMBER THREE :D:D:D:D:D:D:D:D:D:D:D:D:D

/*
void Circuit::readAndParseVectorFile()
{
	map<string, int> inout;
	map<int, Wire *> wires;
	vector<Gate *> gates;

	ifstream vector_File;
	string keyword;
	string name;
	int time;
	int value;
	int count;
	for(count=0;!vector_File.eof();count++)
	{
		vector_File >> keyword;
		if (keyword == "INPUT") {
			vector_File >> name >> time>>value;
			Event e(inout[name], time, value, count);
			event_queue.push(e);
		}

	}
}
*/
void Circuit::runTheSimulation(){

}

void Circuit::printTheSimulation(){

}


