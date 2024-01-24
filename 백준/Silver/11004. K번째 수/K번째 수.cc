#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n, k;
  cin >> n >> k;

  vector<int> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end(), less<int>());

  cout << v[k - 1];
  return 0;
}