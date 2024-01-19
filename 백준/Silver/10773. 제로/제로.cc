#include <iostream>
#include <stack>

using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n;
  cin >> n;

  stack<int> s;
  int temp = 0;

  for(int i = 0; i < n; i++) {
    cin >> temp;

    if(temp == 0) { s.pop(); }
    else {s.push(temp); }
  }

  int sum = 0;
  int size = s.size();
  for(int i = 0; i < size; i++) {
    sum += s.top();
    s.pop();
  }
  
  cout << sum;
  return 0;
}