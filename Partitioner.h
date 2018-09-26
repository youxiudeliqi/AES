#ifndef PARTITIONER_H
#define PARTITIONER_H
#include <iostream>
#include <vector>
#include"Partition.h"
#include"Heuristic.h"  //Abstract class from which other heuristics should inherit
#include"SmallestPartHeuristic.h"  //Default heuristic.

using namespace std;

class Partitioner {
	int number_of_partitions;
	vector<Partition> partitions;
    Heuristic* DEFAULT_HEURISTIC;
	
	public:
	Partitioner(int k, int totNumVert, WeightScheme w) : number_of_partitions(k),
									partitions(k, Partition(totNumVert/k, w)) {
        DEFAULT_HEURISTIC = new SmallestPartHeuristic;
    }

    ~Partitioner() {
        delete DEFAULT_HEURISTIC;
    }

	int get_partition_index(long graph_node, vector<long> node_neighbors, Heuristic* heur);

	int get_partition_index(long graph_node, vector<long> node_neighbors) {
        return get_partition_index(graph_node, node_neighbors, DEFAULT_HEURISTIC);
    }


	void add_vertex_to_partition(int partion_index, long graph_node, vector<long> nb) {
		partitions[partion_index].addVertex(graph_node, nb);
	}
	void show_partitions();

    int get_partition_index(long graph_node){
        for(int i=0;i<number_of_partitions;i++){
            if(partitions[i].isVertPresent(graph_node)){
                return i;
            }
        }
        return -1;
    }
    
};

#endif
