#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;  


void bfs(const Graph& graph, int src) {
  vector<bool> visited(graph.numVertices);
  stack<int> s;
  
  visited[src] = true;
  s.push(src);
  
  while (!s.empty()) {
    int u = s.top();
    cout << u << " ";
    s.pop();
  }
  
  for (int v : graph.adjList[u]) {
    if (!visited[v]) {
      visited[v] = true;
      q.push(v);
    }
  }
}
