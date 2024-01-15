#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n , m;

  cin >> n;
  cin >> m;

  vector<int> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end(), less<int>());

  int sp = 0;
  int ep = n - 1;
  int sum = 0;
  int count = 0;

  while(sp < ep) {
    sum = v[sp] + v[ep];

    if(sum == m) { count++; sp++; ep--;}
    else if (sum < m) sp++;
    else ep--;
  }

  cout << count;
  return 0;
}