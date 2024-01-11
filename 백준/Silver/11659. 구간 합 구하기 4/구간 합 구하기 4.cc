#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  int i, j;
  cin >> n >> m;

  vector<int> v(n);
  vector<int> S(n + 1);

  S[0] = 0;
  for(int i =0; i < n; i++) {
    cin >> v[i];
    S[i + 1] = S[i] + v[i];
  }

  while(m--) {
    cin >> i >> j;
    cout << S[j] - S[i - 1] << "\n";
  }

  return 0;
}