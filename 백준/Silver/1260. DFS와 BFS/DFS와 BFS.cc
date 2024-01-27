#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;

int n, m, v;
vector<int> graph[1001];
queue<int> Q;
bool visit[1001];

void BFS(int start)
{
  memset(visit, false, sizeof(visit));
  Q.push(start);
  visit[start] = true;

  while (!Q.empty())
  {
    int now = Q.front();
    Q.pop();
    cout << now << " ";

    for (int i = 0; i < graph[now].size(); i++)
    {
      int next = graph[now][i];
      if (!visit[next])
      {
        Q.push(next);
        visit[next] = true;
      }
    }
  }
}

void DFS(int start)
{
  visit[start] = true;
  cout << start << " ";

  for (int i = 0; i < graph[start].size(); i++)
  {
    int next = graph[start][i];
    if (!visit[next])
      DFS(next);
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m >> v;

  while (m--)
  {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }

  for (int i = 1; i <= n; i++)
  {
    sort(graph[i].begin(), graph[i].end());
    // 인접리스트 정렬
  }

  DFS(v);
  cout << "\n";
  BFS(v);
}