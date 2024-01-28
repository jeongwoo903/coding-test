#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
 
using namespace std;

static vector<vector<int>> graph;
static vector<bool> visited;

static queue<int> q;

void BFS(int k) {
  q.push(k);
  visited[k] = true;

  while(!q.empty()) {
    int now = q.front();
    q.pop();
    cout << now << ' ';
    
    for(int i: graph[now]) {
      if(!visited[i]) {
        visited[i] = true;
        q.push(i);
      }
    }
  }
}

void DFS(int k) {
  if(visited[k]) { return; }
  visited[k] = true;
  cout << k << ' ';

  for(int i: graph[k]) {
    if(!visited[i]) { DFS(i); }
  }
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n, e, s;
  cin >> n >> e >> s;

  graph.resize(n+1);
  visited = vector<bool>(n+1, false);

  int a, b;
  for(int i = 1; i <= e; i++) {
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for(int i = 1; i <= n; i++) {
    sort(graph[i].begin(), graph[i].end(), less<int>());
  }
  
  DFS(s);
  cout << "\n";
  fill(visited.begin(), visited.end(), false);
  BFS(s);
  
  return 0;
}