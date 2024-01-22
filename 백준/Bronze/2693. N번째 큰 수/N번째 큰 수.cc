#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n;
  cin >> n;

  while(n--) {
    vector<int> v(10);

    for(int i = 0; i < 10; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());
    cout << v[2] << "\n";
  }

  return 0;
}