# Graphs (Striver §15) (Concepts & Problems)

> **Tracking:** see [How to use](../README.md#how-to-use).

### Problems on BFS / DFS


| #   | Problem                                   | Difficulty | LeetCode                                                                                                                                                                                           | Status | Last revision | Next revision |
| --- | ----------------------------------------- | ---------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | ------------- | ------------- |
| 1 | Number of provinces | Medium | [547. Number of Provinces](https://leetcode.com/problems/number-of-provinces/) | ✓ | 2026-04-04 | 2026-04-11 |
| 2 | Connected Components Problem in Matrix | Medium | [200. Number of Islands](https://leetcode.com/problems/number-of-islands/) (count connected components of `1`s) | ✓ | 2026-04-01 | 2026-04-08 |
| 3   | Rotten Oranges (LC: Rotting Oranges)      | Medium     | [994. Rotting Oranges](https://leetcode.com/problems/rotting-oranges/)                                                                                                                             | -      |               |               |
| 4   | Flood fill algorithm                      | Medium     | [733. Flood Fill](https://leetcode.com/problems/flood-fill/)                                                                                                                                       | -      |               |               |
| 5   | Cycle Detection in Undirected Graph (bfs) | Hard       | [684. Redundant Connection](https://leetcode.com/problems/redundant-connection/) (find cycle-forming edge; [261](https://leetcode.com/problems/graph-valid-tree/) is “valid tree / cycle” variant) | -      |               |               |
| 6   | Detect a cycle in an undirected graph     | Hard       | [684. Redundant Connection](https://leetcode.com/problems/redundant-connection/) (same undirected-cycle idea)                                                                                      | -      |               |               |
| 7   | Distance of nearest cell having one       | Medium     | [542. 01 Matrix](https://leetcode.com/problems/01-matrix/)                                                                                                                                         | -      |               |               |
| 8   | Surrounded Regions                        | Medium     | [130. Surrounded Regions](https://leetcode.com/problems/surrounded-regions/)                                                                                                                       | -      |               |               |
| 9   | Number of enclaves                        | Medium     | [1020. Number of Enclaves](https://leetcode.com/problems/number-of-enclaves/)                                                                                                                      | -      |               |               |
| 10  | Word ladder I                             | Hard       | [127. Word Ladder](https://leetcode.com/problems/word-ladder/)                                                                                                                                     | -      |               |               |
| 11  | Word ladder II                            | Hard       | [126. Word Ladder II](https://leetcode.com/problems/word-ladder-ii/)                                                                                                                               | -      |               |               |
| 12 | Number of islands | Medium | [200. Number of Islands](https://leetcode.com/problems/number-of-islands/) | ✓ | 2026-04-01 | 2026-04-08 |
| 13  | Bipartite Graph (DFS)                     | Hard       | [785. Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite/)                                                                                                                      | -      |               |               |
| 14 | Cycle Detection in Directed Graph (DFS) | Hard | [207. Course Schedule](https://leetcode.com/problems/course-schedule/) | ✓ | 2026-04-01 | 2026-04-07 |


### Topo Sort and Problems


| #   | Problem                              | Difficulty | LeetCode                                                                                                         | Status | Last revision | Next revision |
| --- | ------------------------------------ | ---------- | ---------------------------------------------------------------------------------------------------------------- | ------ | ------------- | ------------- |
| 1 | Topo Sort | Hard | [210. Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) (Kahn / topo order on dependencies) | ✓ | 2026-04-04 | 2026-04-10 |
| 2 | Topological sort or Kahn's algorithm | Hard | [210. Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | ✓ | 2026-04-04 | 2026-04-10 |
| 3 | Detect a cycle in a directed graph | Hard | [207. Course Schedule](https://leetcode.com/problems/course-schedule/) | ✓ | 2026-04-01 | 2026-04-07 |
| 4 | Course Schedule I | Hard | [207. Course Schedule](https://leetcode.com/problems/course-schedule/) | ✓ | 2026-04-01 | 2026-04-07 |
| 5 | Course Schedule II | Medium | [210. Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | ✓ | 2026-04-04 | 2026-04-11 |
| 6   | Find eventual safe states            | Hard       | [802. Find Eventual Safe States](https://leetcode.com/problems/find-eventual-safe-states/)                       | -      |               |               |
| 7   | Alien Dictionary                     | Hard       | [269. Alien Dictionary](https://leetcode.com/problems/alien-dictionary/) (LC Premium in many regions)            | -      |               |               |


### Shortest Path Algorithms and Problems


| #   | Problem                                             | Difficulty | LeetCode                                                                                                                                                                                                         | Status | Last revision | Next revision |
| --- | --------------------------------------------------- | ---------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | ------------- | ------------- |
| 1   | Shortest path in undirected graph with unit weights | Hard       | [1091. Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/) (grid BFS; generic unweighted graph: BFS / [433](https://leetcode.com/problems/minimum-genetic-mutation/)) | -      |               |               |
| 2   | Shortest path in DAG                                | Hard       | [851. Loud and Rich](https://leetcode.com/problems/loud-and-rich/) (topo order + relax)                                                                                                                          | -      |               |               |
| 3   | Dijkstra's Algorithm                                | Hard       | [743. Network Delay Time](https://leetcode.com/problems/network-delay-time/)                                                                                                                                     | -      |               |               |
| 4   | Why priority queue is used in Dijkstra's Algorithm  | Hard       | — (concept on sheet; practice with [743](https://leetcode.com/problems/network-delay-time/))                                                                                                                     | -      |               |               |
| 5   | Shortest Distance in a Binary Maze                  | Hard       | [1091. Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/)                                                                                                            | -      |               |               |
| 6   | Path with minimum effort                            | Hard       | [1631. Path With Minimum Effort](https://leetcode.com/problems/path-with-minimum-effort/)                                                                                                                        | -      |               |               |
| 7   | Cheapest flight within K stops                      | Hard       | [787. Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/)                                                                                                           | -      |               |               |
| 8   | Network Delay Time                                  | Medium     | [743. Network Delay Time](https://leetcode.com/problems/network-delay-time/)                                                                                                                                     | -      |               |               |
| 9   | Number of ways to arrive at destination             | Hard       | [1976. Number of Ways to Arrive at Destination](https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/)                                                                                          | -      |               |               |
| 10  | Minimum multiplications to reach end                | Hard       | — (classic GFG / sheet; heap/BFS on implicit graph)                                                                                                                                                              | -      |               |               |
| 11  | Bellman Ford Algorithm                              | Hard       | [787. Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/) (Bellman–Ford relaxations; also [1514](https://leetcode.com/problems/path-with-maximum-probability/))     | -      |               |               |
| 12  | Floyd warshall algorithm                            | Hard       | [1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/) (APSP)           | -      |               |               |
| 13  | Find the city with the smallest number of neighbors | Hard       | [1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/)                  | -      |               |               |


### Minimum Spanning Tree / Disjoint Set and Problems


| #   | Problem                                        | Difficulty | LeetCode                                                                                                                                                                                                                                | Status | Last revision | Next revision |
| --- | ---------------------------------------------- | ---------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | ------------- | ------------- |
| 1   | MST theory                                     | Easy       | — (concept on sheet; practice with [1584](https://leetcode.com/problems/min-cost-to-connect-all-points/))                                                                                                                               | -      |               |               |
| 2   | Prim's Algorithm                               | Hard       | [1584. Min Cost to Connect All Points](https://leetcode.com/problems/min-cost-to-connect-all-points/) (Prim / Kruskal)                                                                                                                  | -      |               |               |
| 3   | Disjoint Set                                   | Hard       | [684. Redundant Connection](https://leetcode.com/problems/redundant-connection/) / [1319. Number of Operations to Make Network Connected](https://leetcode.com/problems/number-of-operations-to-make-network-connected/) (DSU patterns) | -      |               |               |
| 4   | Find the MST weight                            | Hard       | [1584. Min Cost to Connect All Points](https://leetcode.com/problems/min-cost-to-connect-all-points/) · [1135. Connecting Cities With Minimum Cost](https://leetcode.com/problems/connecting-cities-with-minimum-cost/) (Kruskal-style) | -      |               |               |
| 5   | Number of operations to make network connected | Hard       | [1319. Number of Operations to Make Network Connected](https://leetcode.com/problems/number-of-operations-to-make-network-connected/)                                                                                                   | -      |               |               |
| 6   | Most stones removed with same row or column    | Medium     | [947. Most Stones Removed with Same Row or Column](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/)                                                                                                          | -      |               |               |
| 7   | Accounts merge                                 | Hard       | [721. Accounts Merge](https://leetcode.com/problems/accounts-merge/)                                                                                                                                                                    | -      |               |               |
| 8   | Number of islands II                           | Hard       | [305. Number of Islands II](https://leetcode.com/problems/number-of-islands-ii/)                                                                                                                                                        | -      |               |               |
| 9   | Making a large island                          | Hard       | [827. Making A Large Island](https://leetcode.com/problems/making-a-large-island/)                                                                                                                                                      | -      |               |               |
| 10  | Swim in Rising Water                           | Medium     | [778. Swim in Rising Water](https://leetcode.com/problems/swim-in-rising-water/)                                                                                                                                                        | -      |               |               |


### Additional graph topics (fills sheet count)


| #   | Problem                             | Difficulty | LeetCode                                                                                                                                                                     | Status | Last revision | Next revision |
| --- | ----------------------------------- | ---------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------ | ------------- | ------------- |
| 1   | Clone Graph                         | Medium     | [133. Clone Graph](https://leetcode.com/problems/clone-graph/)                                                                                                               | -      |               |               |
| 2   | Evaluate Division                   | Medium     | [399. Evaluate Division](https://leetcode.com/problems/evaluate-division/)                                                                                                   | -      |               |               |
| 3   | Reconstruct Itinerary               | Hard       | [332. Reconstruct Itinerary](https://leetcode.com/problems/reconstruct-itinerary/)                                                                                           | -      |               |               |
| 4   | Longest Increasing Path in a Matrix | Hard       | [329. Longest Increasing Path in a Matrix](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/)                                                               | -      |               |               |
| 5   | Pacific Atlantic Water Flow         | Medium     | [417. Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)                                                                               | -      |               |               |
| 6   | Walls and Gates                     | Medium     | [286. Walls and Gates](https://leetcode.com/problems/walls-and-gates/) (Premium on LC in some regions)                                                                       | -      |               |               |
| 7   | Open the Lock                       | Medium     | [752. Open the Lock](https://leetcode.com/problems/open-the-lock/)                                                                                                           | -      |               |               |
| 8   | Critical Connections in a Network   | Hard       | [1192. Critical Connections in a Network](https://leetcode.com/problems/critical-connections-in-a-network/)                                                                  | -      |               |               |
| 9   | Possible Bipartition?               | Medium     | [886. Possible Bipartition?](https://leetcode.com/problems/possible-bipartition/)                                                                                            | -      |               |               |
| 10  | Strongly Connected Components       | Hard       | [1192. Critical Connections in a Network](https://leetcode.com/problems/critical-connections-in-a-network/) (Tarjan's bridges); SCC via Kosaraju — often GFG / sheet concept | -      |               |               |


