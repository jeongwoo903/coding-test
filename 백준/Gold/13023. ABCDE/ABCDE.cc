#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

static vector<vector<int>> v;
static vector<bool> visited;
static bool answer;

void DFS(int i, int depth);
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n, m;
  cin >> n >> m;

  v.resize(n);
  visited = vector<bool>(n, false);

  answer = false;

  int s, e;
  for(int i = 0; i < m; i++) {
    cin >> s >> e;

    v[s].push_back(e);
    v[e].push_back(s);
  }

  for(int i = 0; i < n; i++) {
    DFS(i, 1);
    if(answer) { break; }
  }

  (answer) ? cout << 1 : cout << 0;
  return 0;
}

void DFS(int i, int depth) {
  if(depth == 5 || answer) { 
    answer = true;
    return; 
  }

  visited[i] = true;
  for(int k: v[i]) {
    if(!visited[k]) { DFS(k, depth + 1); }
  }

  visited[i] = false;
}