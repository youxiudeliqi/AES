#ifndef PREFERBIGHEURISTIC_H
#define PREFERBIGHEURISTIC_H

#include<vector>
#include"Partition.h"
#include"Heuristic.h"
#include "GreedyHeuristic.h"
#include "SmallestPartHeuristic.h"

using namespace std;

/**Choose the partition with the smallest number of vertices*/
class PreferBigHeuristic: public Heuristic {
    private:
        long highDegree;
        GreedyHeuristic *gh;
        SmallestPartHeuristic *sh;        
        vector<long> vertexBuff;
        vector< vector<long> > neighborsBuff;
        int buffIndex, bufferCapacity;
    public:
    PreferBigHeuristic(long hd, int bufferCapacity);
    int getPartition(long vertex, vector<Partition>& partitions, vector<long>& neighbors);
    ~PreferBigHeuristic(){
        delete gh;
        delete sh;
    }
};


PreferBigHeuristic::PreferBigHeuristic(long hd, int capacity){
    highDegree = hd;
    bufferCapacity = capacity;
    buffIndex = 0;
    gh = new GreedyHeuristic();
    sh = new SmallestPartHeuristic();  
}

/*
    if v is high degree, use Balanced heuristic, else greedy heuristic
*/
int PreferBigHeuristic::getPartition(long vertex, vector<Partition>& partitions, vector<long>& neighbors) {
    int pIndex;
    if(neighbors.size() >= highDegree) {
        pIndex = sh->getPartition(vertex, partitions, neighbors);
        partitions[pIndex].addVertex(vertex, neighbors);
        return -1;
    }
    else {
        vertexBuff.push_back(vertex);
        neighborsBuff.push_back(neighbors);
        if(vertexBuff.size() == bufferCapacity){
            for(int i=0;i<vertexBuff.size();i++){
                pIndex = gh->getPartition(vertexBuff[i], partitions, neighborsBuff[i]);
                partitions[pIndex].addVertex(vertexBuff[i], neighborsBuff[i]);
            }
            vertexBuff.clear();
            neighborsBuff.clear();
            return -2;
        }
        else {
            return -3;
        }
    }
}

#endif
