#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "Circuit.h"

using namespace std;

//argv: name of program, all the peramiters
//argc: num of peramiters

int main()
{

	Circuit c;
	//Reading the input file:
	c.readtheFile();
	/*
	//Parsing circut description for the gates and wires
	if (!c.Circuit Reading and Parsing Function(argv[1]))
	{
		std::cerr << "There was an error while reading the circuit description file\n";
		return 1;
	}

	//Parsing the vector file for the queue with the events
	if (!c.Read And Parsing the Vector (argv[2])) {
		std::cerr << "There was an error while reading the vector description file\n";
		return;
	}

	//Running the Simulation
	//c.Simulation Function();

	//Print the history of the events on the wires
	//c.Printing the History Function();

	//??restoreConsole(console);???
	*/
	return 0;
}