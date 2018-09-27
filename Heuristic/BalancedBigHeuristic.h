#ifndef BALANCEDBIGHEURISTIC_H
#define BALANCEDBIGHEURISTIC_H


#include<vector>
#include"Partition.h"
#include"Heuristic.h"
#include "GreedyHeuristic.h"
#include "SmallestPartHeuristic.h"

using namespace std;

/**Choose the partition with the smallest number of vertices*/
class BalancedBigHeuristic: public Heuristic {
    private:
        long highDegree;
        GreedyHeuristic *gh;
        SmallestPartHeuristic *sh;        
    public:
    BalancedBigHeuristic(long hd);
    int getPartition(long vertex, vector<Partition>& partitions, vector<long>& neighbors);
    ~BalancedBigHeuristic(){
        delete gh;
        delete sh;
    }
};


BalancedBigHeuristic::BalancedBigHeuristic(long hd){
    highDegree = hd;
    gh = new GreedyHeuristic();
    sh = new SmallestPartHeuristic();  
}

/*
    if v is high degree, use Balanced heuristic, else greedy heuristic
*/
int BalancedBigHeuristic::getPartition(long vertex, vector<Partition>& partitions, vector<long>& neighbors) {
    if(neighbors.size() >= highDegree)
        return sh->getPartition(vertex, partitions, neighbors);
    else
        return gh->getPartition(vertex, partitions, neighbors);
}

#endif
