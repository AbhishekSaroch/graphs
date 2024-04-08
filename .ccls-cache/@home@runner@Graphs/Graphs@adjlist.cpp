#include <iostream>
#include <list>
#include <queue>>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph {
public:
  unordered_map<int, list<int>> adjList;

  void addEdge(int u, int v, bool direction) {
    // direction=0 -> undirected graph
    // direction=1 -> directed graph
    // create an edge from u to v
    adjList[u].push_back(v);
    if (direction == 0) {
      // undirected graph
      adjList[v].push_back(u);
    }
  }
  void printAdjList() {
    for (auto node : adjList) {
      cout << node.first << "->";
      for (auto neighbour : node.second) {
        cout << neighbour << ",";
      }
      cout << endl;
    }
  }
  void bfs(int src){
    queue<int> q;
    unordered_map<int,bool>visited;
    q.push(src);
    visited[src]=true;
    
  }
};

int main2() {
  Graph g;
  g.addEdge(0, 1, 0);
  g.addEdge(1, 2, 0);
  g.addEdge(0, 2, 0);

  g.printAdjList();
  return 0;
}