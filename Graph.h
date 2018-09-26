#ifndef GRAPH_H
#define GRAPH_H 1

#include <vector>
#include <algorithm>
#include<iostream>

using namespace std;

class Graph{
	private:
		long N; //no. of vertices
		long M; //no. of edges
		vector<vector<long> > adjList;


		bool m_adjMatProcessed;
	public:
		Graph();
		Graph(long n); //pass no. of vertices
		void setNumOfVertices(long);
		void addEdge(long u, long v); //add edge from u to v
		void addEdgeWithChecks(long u, long v);//add edge with checks for self loop and duplicated edges
		vector<long>& getNeighbors(long u); //get all neighbors of vertex u
		long numOfVertices();
		long numOfEdges();
};

#endif
