# AES
Graph partitioning is an important method for accelerating large distributed graph computation. Streaming graph partitioning is more efficient than offline partitioning, and it has been developed continuously in the application of graph partitioning in recent years. In this work, we first introduce a heuristic greedy streaming partitioning method and show that it outperforms the state-of-the-art streaming partitioning methods, leading to exact balance and fewer cut edges. Second, we propose a cache structure for streaming partitioning, called an adjacent edge structure, which can improve the partition efficiency several times on a single commodity-type computer without affecting the partition quality. Regardless as to whether the memory capacity is limited (local cache) or not (global cache), our strategy can also improve the partition quality by restreaming partitioning. Taking linear weight greedy streaming algorithm as an example, the experimental results on 19 real-world graphs show that the average partitioning time of the new method is 4.9 times faster than that of the original method, which proves the effectiveness and superiority of the cache structure mentioned in this paper.

<img width="150" height="150" src="https://github.com/youxiudeliqi/AES/blob/master/1.png"/>
Figure 1. AES_LDG: time vs. number of edges.
<img width="150" height="150" src="https://github.com/youxiudeliqi/AES/blob/master/2.png"/>
Figure 2. AVS_LDG: time vs. number of edges.
