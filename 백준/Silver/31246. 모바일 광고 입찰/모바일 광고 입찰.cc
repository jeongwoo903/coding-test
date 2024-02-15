#include <iostream>
#include <vector>
#include <algorithm>
 
#define endl '\n'
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n, k;
  cin >> n >> k;

  vector<int> v;

  int ap, bp;

  for(int i = 0; i < n; i++) {
    cin >> ap >> bp;
    v.push_back((bp - ap));
  }
  sort(v.begin(), v.end(), less<int>());
  (v[k - 1] > 0) ? cout << v[k - 1] : cout << 0;

  return 0;
}