#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
 
using namespace std;

typedef pair<int, int> edge;
static vector<vector<edge > > v;
static vector<bool> visited;
static vector<int> m_distance;

void BFS(int node) {
  queue<int> q;
  q.push(node);
  visited[node] = true;

  while(!q.empty()) {
    int now = q.front();
    q.pop();
    for(edge i: v[now]) {
      if(!visited[i.first]) {
        q.push(i.first);
        visited[i.first] = true;
        m_distance[i.first] = m_distance[now] + i.second;
      }
    }
  }
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n;
  cin >> n;
  v.resize(n + 1);

  m_distance = vector<int>(n + 1, 0);
  visited = vector<bool>(n + 1, false);

  for(int i = 0; i < n; i++) {
    int s, e, w;
    cin >> s;

    while(true) {
      cin >> e;
      if(e == -1) { break; }
      cin >> w;
      v[s].push_back(edge(e,w));
    }
  }

  BFS(1);
  int max = 1;

  for(int i = 2; i <= n; i++) {
    if(m_distance[max] < m_distance[i]) { max = i; }
  }

  fill(m_distance.begin(), m_distance.end(), 0);
  fill(visited.begin(), visited.end(), false);
  BFS(max);
  sort(m_distance.begin(), m_distance.end(), greater<int>());

  cout << m_distance[0];
  return 0;
}