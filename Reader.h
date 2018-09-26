#ifndef INPUTREADER_H
#define INPUTREADER_H

//#include<iostream>
#include "Graph.h"
#include <fstream>
#include<iostream>

using namespace std;

class InputReader{
	private:
		Graph g;
		vector<long> sources;
		//readInput(ifstream in);
	public:
		InputReader(char *filename);
		InputReader();
		Graph& getGraph();
		vector<long>& getSources();
};

#endif
