# A Heterogeneity-Aware Graph Partitioning Algorithm in Distributed Environment
How to mine the large-scale networks efficiently is a primary task of studying complex networks, and parallel computing is one of the widely used and feasible accelerated computing technologies. Graph partitioning is an effective way to improve the performance of parallel computing. However, the research of graph partitioning is driven by the demand of practical applications. In this paper, we propose a streaming graph partitioning algorithm based on heterogeneous-aware for distributed heterogeneous computing environment. It not only considers the difference of network bandwidth and the compute ability of computer nodes, but also considers the shared resources competition between cores in high-speed network environment. Taking Breadth First Search (BFS), Single Source Shortest Path (SSSP) and PageRank algorithms as examples, compared with the streaming algorithms without considering the heterogeneous environment, the efficiency of graph computing is improved on average by 38%, 45.7% and 61.8% respectively. At the same time, in view of the low efficiency of streaming graph partitioning based on adjacent vertex structure, we design a cache management mechanism based on adjacent edge structure for streaming graph partitioning, which effectively improves the partitioning efficiency. The experimental results show that our method is suitable for graph vertex assignment in distributed heterogeneous cluster environment.

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
