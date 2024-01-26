#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

static vector<vector<int>> node;
static vector<bool> visited;

void DFS(int k);
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n, m;
  cin >> n >> m;

  node.resize(n+1);
  visited = vector<bool> (n+1, false);

  int start, end;

  for(int i = 1; i < m+1; i++) {
    cin >> start >> end;

    node[start].push_back(end);
    node[end].push_back(start);
  }

  int count = 0;

  for(int i = 1; i < n+1; i++) {
    if(!visited[i]) {
      DFS(i);
      count++;
    }
  }

  cout << count;
  return 0;
}

void DFS(int k) {
  if(visited[k]) { return; }

  visited[k] = true;

  for(int i: node[k]) {
    if(visited[i] == false) { 
      DFS(i);
    }
  }
}