#include <iostream>
#include <vector>
#include <algorithm>
 
#define endl '\n'
 
using namespace std;

static unsigned dp[201][201];
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;

  dp[0][0] = 1;

  for(int i = 1; i <= m; i++) {
    dp[i][0] = 1;
    for(int j = 1; j <= n; j++) {
      dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 1000000000;
    }
  }

  cout << dp[m][n];
  return 0;
}