#include <iostream>
#include <stack>
#include <vector>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n;
  cin >> n;

  vector<int> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }

  stack<int> s;
  s.push(0);

  vector<int> result(n);

  for(int i = 1; i < n; i++) {
    while(!s.empty() && v[s.top()] < v[i]) {
      result[s.top()] = v[i];
      s.pop();
    }

    s.push(i);
  }

  while(!s.empty()) {
    result[s.top()] = -1;
    s.pop();
  }

  for(int i = 0; i < n; i++) {
    cout << result[i] << " ";
  }

  return 0;
}