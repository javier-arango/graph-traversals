#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;  


void bfs(const Graph& graph, int src) {
  vector<bool> visited(graph.numVertices);
  queue<int> q;
  
  visited[src] = true;
  q.push(src);
  
  while (!q.empty()) {
    int u = q.front();
    cout << u << " ";
    q.pop();
  }
  
  for (int v : graph.adjList[u]) {
    if (!visited[v]) {
      visited[v] = true;
      q.push(v);
    }
  }
}
