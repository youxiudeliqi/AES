# DisHAP: An Distributed Partition Algorithm for Large Scale Graphs Based on Hierarchical Affinity Clustering 
It is the key to improve the performance of graph calculation by improving the efficiency of the graph partitioning algorithm and reducing the communication edge scale between the subgraphs. In this paper, a distributed graph partitioning algorithm based on hierarchical affinity clustering for massive scale graphs is designed, called DisHAP. Firstly, the algorithm partitions the graph into k subgraphs of the equal size by affinity clustering. Then, the result of the initial partitioning is linearly embedded into a vertex sequence and the fraction of edges cut is optimized by local exchange strategy. Finally, the DisHAP algorithm is applied in the MapReduce framework, and compared with the existing state-of-art graph partition algorithms by using a variety of real and theoretical graph data. Take Twitter graph as an example, it is partitioned into 2,4,8,16,32 subgraphs. Compared with the existing state-of-art graph partitioning algorithms (LDG, BLP, Spinner, Fennel, ParMetis and PSA-MIR), the fraction of edges cut is reduced by about 1.7%-30.2%. Meanwhile, the algorithm has good scalability, and the revenue of partitioning time is larger with the enlargement of the scale of the graph. The experimental results verify the feasibility and effectiveness of the proposed method.

| k    | LDG     | BLP     | Spinner  | Fennel   | ParMetis | PSA-MIR | DisHAP   |
| ---- | ------- | ------- | -------- | -------- | -------- | ------- | -------- |
|      | (ε=1.1) | (ε=1.0) | (ε=1.05) | (ε=1.09) | (ε=1.03) | (ε=1.0) | (ε=1.03) |
| 2    | 0.31    | 0.34    | 0.15     | 0.07     | 0.12     | 0.15    | 0.1      |
| 4    | 0.49    | 0.55    | 0.31     | 0.29     | 0.24     | 0.21    | 0.19     |
| 8    | 0.69    | 0.66    | 0.49     | 0.48     | 0.35     | 0.4     | 0.38     |
| 16   | 0.8     | 0.76    | 0.61     | 0.59     | 0.52     | N/A     | 0.49     |
| 32   | 0.86    | 0.8     | 0.69     | 0.67     | N/A      | N/A     | 0.58     |

--------------------- 
Table 1: Test on Twitter by different methods.
