#ifndef SMALLESTPARTHEURISTIC_H
#define SMALLESTPARTHEURISTIC_H


#include<vector>
#include"Partition.h"
#include"Heuristic.h"
using namespace std;

/**Choose the partition with the smallest number of vertices*/
class SmallestPartHeuristic: public Heuristic {

    public:
    int getPartition(long vertex, vector<Partition>& partitions, vector<long>& neighbors) {
        // This is the function responsible for all partition heuristic.
        // Heuristic 1: Assign the graph_node to smallest size partition.
        int min_partition_index = 0;
        int partition_size = 0;
        for (uint i = 0, sz = partitions.size(); i < sz; i++) {

            partition_size = partitions[i].size();
            if (partition_size < partitions[min_partition_index].size())
                min_partition_index = i;
        }
        return min_partition_index;
    }
};

#endif
