# DisHAP: An Distributed Partition Algorithm for Large Scale Graphs Based on Hierarchical Affinity Clustering 
It is the key to improve the performance of graph calculation by improving the efficiency of the graph partitioning algorithm and reducing the communication edge scale between the subgraphs. In this paper, a distributed graph partitioning algorithm based on hierarchical affinity clustering for massive scale graphs is designed, called DisHAP. Firstly, the algorithm partitions the graph into k subgraphs of the equal size by affinity clustering. Then, the result of the initial partitioning is linearly embedded into a vertex sequence and the fraction of edges cut is optimized by local exchange strategy. Finally, the DisHAP algorithm is applied in the MapReduce framework, and compared with the existing state-of-art graph partition algorithms by using a variety of real and theoretical graph data. Take Twitter graph as an example, it is partitioned into 2,4,8,16,32 subgraphs. Compared with the existing state-of-art graph partitioning algorithms (LDG, BLP, Spinner, Fennel, ParMetis and PSA-MIR), the fraction of edges cut is reduced by about 1.7%-30.2%. Meanwhile, the algorithm has good scalability, and the revenue of partitioning time is larger with the enlargement of the scale of the graph. The experimental results verify the feasibility and effectiveness of the proposed method.

First Header | Second Header
------------ | -------------
Content from cell 1 | Content from cell 2
Content in the first column | Content in the second column

--------------------- 
Table 1: Test on Twitter by different methods.
