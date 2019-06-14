# DisHAP: An Distributed Partition Algorithm for Large Scale Graphs Based on Hierarchical Affinity Clustering 
It is the key to improve the performance of graph calculation by improving the efficiency of the graph partitioning algorithm and reducing the communication edge scale between the subgraphs. In this paper, a distributed graph partitioning algorithm based on hierarchical affinity clustering for massive scale graphs is designed, called DisHAP. Firstly, the algorithm partitions the graph into k subgraphs of the equal size by affinity clustering. Then, the result of the initial partitioning is linearly embedded into a vertex sequence and the fraction of edges cut is optimized by local exchange strategy. Finally, the DisHAP algorithm is applied in the MapReduce framework, and compared with the existing state-of-art graph partition algorithms by using a variety of real and theoretical graph data. Take Twitter graph as an example, it is partitioned into 2,4,8,16,32 subgraphs. Compared with the existing state-of-art graph partitioning algorithms (LDG, BLP, Spinner, Fennel, ParMetis and PSA-MIR), the fraction of edges cut is reduced by about 1.7%-30.2%. Meanwhile, the algorithm has good scalability, and the revenue of partitioning time is larger with the enlargement of the scale of the graph. The experimental results verify the feasibility and effectiveness of the proposed method.

<table cellpadding=0 cellspacing=0 width=100%>"+
  "<tr><td colspan=6 height=1 bgcolor="+c_rgszClr[2]+"></td></tr>"+
  "<tr><td style=\"font:1pt\">&nbsp;<td>"+
  "<td valign=top id=tdScroll class=\"clScroll\" onclick=\"parent.fnFastScrollTabs(0);\" onmouseover=\"parent.fnMouseOverScroll(0);\" onmouseout=\"parent.fnMouseOutScroll(0);\"><a>&#171;</a></td>"+
  "<td valign=top id=tdScroll class=\"clScroll2\" onclick=\"parent.fnScrollTabs(0);\" ondblclick=\"parent.fnScrollTabs(0);\" onmouseover=\"parent.fnMouseOverScroll(1);\" onmouseout=\"parent.fnMouseOutScroll(1);\"><a>&lt</a></td>"+
  "<td valign=top id=tdScroll class=\"clScroll2\" onclick=\"parent.fnScrollTabs(1);\" ondblclick=\"parent.fnScrollTabs(1);\" onmouseover=\"parent.fnMouseOverScroll(2);\" onmouseout=\"parent.fnMouseOutScroll(2);\"><a>&gt</a></td>"+
  "<td valign=top id=tdScroll class=\"clScroll\" onclick=\"parent.fnFastScrollTabs(1);\" onmouseover=\"parent.fnMouseOverScroll(3);\" onmouseout=\"parent.fnMouseOutScroll(3);\"><a>&#187;</a></td>"+
  "<td style=\"font:1pt\">&nbsp;<td></tr></table>

--------------------- 
Table 1: Test on Twitter by different methods.
