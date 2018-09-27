#ifndef GREEDYHEURISTIC_H
#define GREEDYHEURISTIC_H


#include<vector>
#include"Partition.h"
#include"Heuristic.h"
using namespace std;

/**Choose the partition with the smallest number of vertices*/
class GreedyHeuristic: public Heuristic {
    private:
        //long C;
    public:
    int getPartition(long vertex, vector<Partition>& partitions, vector<long>& neighbors);
};


/*
Assign v to the partition where it has the most edges. Weight this by a
penalty function based on the capacity of the partition,
penalizing larger partitions. Break ties using Balanced.
*/
int GreedyHeuristic::getPartition(long vertex, vector<Partition>& partitions, vector<long>& neighbors) {
    int bestPartitionIndex = 0;
    float bestVal = 0;
    for (uint i = 0, sz = partitions.size(); i < sz; i++) {
		//if(partitions[i].maxVertReached()) continue;

		float currVal = (float)(partitions[i].getVerticesPresent(neighbors)+1)*partitions[i].getWeight();
			if(currVal > bestVal ||
					(currVal == bestVal && partitions[i].size() < partitions[bestPartitionIndex].size())){
				bestVal = currVal;
				bestPartitionIndex = i;
			}
    }
    //cerr<<"best part index "<<bestPartitionIndex<<endl;
    return bestPartitionIndex;
}

#endif
