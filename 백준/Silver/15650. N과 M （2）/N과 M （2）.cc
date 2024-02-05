#include <iostream>
 
#define endl '\n'

using namespace std;

static int n, m;
static int v[9];

void solve(int k, int cnt) {
  if(cnt == m ) {
    for(auto i = 0; i < m; i++) {
      cout << v[i] << " ";
    }
    cout << "\n";
  } else {
    for(auto i = k; i <= n; i++) {
      v[cnt] = i;
      solve(i + 1, cnt + 1);
    }
  }
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  cin >> n >> m;

  solve(1, 0);
}