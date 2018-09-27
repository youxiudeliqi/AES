#ifndef RANDOMPARTHEURISTIC_H
#define RANDOMPARTHEURISTIC_H


#include<vector>
#include"Partition.h"
#include"Heuristic.h"
#include <cstdlib>
using namespace std;

/**Choose the partition with the smallest number of vertices*/
class RandomPartHeuristic: public Heuristic {

    public:
    int getPartition(long vertex, vector<Partition>& partitions, vector<long>& neighbors) {
        // This is the function responsible for all partition heuristic.
        // Heuristic 1: Assign the graph_node to smallest size partition.
        /*int min_partition_index = 0;
        int partition_size = 0;
        for (uint i = 0, sz = partitions.size(); i < sz; i++) {
			if(partitions[i].maxVertReached()) continue;

            partition_size = partitions[i].size();
            if (partition_size < partitions[min_partition_index].size())
                min_partition_index = i;
        }*/
        int numOfPartitions = partitions.size();
        return rand()%numOfPartitions + 1;
    }
};

#endif
