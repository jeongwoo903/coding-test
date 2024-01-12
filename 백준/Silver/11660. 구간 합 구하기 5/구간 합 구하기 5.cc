#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> v(n + 1, vector<int>(n+1,0));
  vector<vector<int>> S(n + 1, vector<int>(n+1,0));

  for (int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      cin >> v[i][j];

      S[i][j] = S[i][j-1] + S[i-1][j] - S[i-1][j-1] + v[i][j];
    }
  }

  int x1, y1, x2, y2;
  int result;

  while(m--) {
    cin >> x1 >> y1 >> x2 >> y2;

    result = S[x2][y2] - S[x1 - 1][y2] - S[x2][y1 -1] + S[x1 - 1][y1 -1];
    cout << result << "\n";
  }

  return 0;
}