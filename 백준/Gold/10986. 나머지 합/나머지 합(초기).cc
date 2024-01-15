// 처음 생각해 보았던 방식
// 다음 방식으로는 시간이 초과된다.

#include <iostream>
#include <vector>

using namespace std;

int result = 0, cnt = 0;

void check(int phase, vector<int> &S) {
  for(int i = phase; i < S.size(); i++) {
    if (S[i] == 0) continue;
    else if(S[i] % 3 == 0) cnt++;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<int> v(n, 0);
  vector<int> S(n+1, 0);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
    S[i + 1] = S[i] + v[i];
  }

  check(0, S);

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j <= n; j++)
      S[j] -= v[i];

    check(i + 1,S);
  }

  cout << cnt;
  return 0;
}
