#include <iostream>
#include <queue>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n;
  cin >> n;

  int temp;

  queue<int> q;

  for(int i = 1; i <= n; i++) {q.push(i);}

  int i = 1;
  while(q.size() != 1) { 
    if(i % 2 == 1) {
      q.pop();
    } else {
      temp = q.front();
      q.pop();
      q.push(temp);
    }
    i++;
  }

  cout << q.front();
}