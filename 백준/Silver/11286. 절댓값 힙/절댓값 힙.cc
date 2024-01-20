#include <iostream>
#include <vector>
#include <queue>
 
using namespace std;

struct compare {
  bool operator()(int o1, int o2) {
    int first_abs = abs(o1);
    int second_abs = abs(o2);
    if(first_abs == second_abs) { return o1 > o2; }
    else { return first_abs > second_abs; }
  }
};
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  priority_queue<int, vector<int>, compare> pq;
 
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    int m;
    cin >> m;

    if(m == 0) {
      if(pq.empty()) { cout << "0\n"; }
      else {
        cout << pq.top() << "\n";
        pq.pop();
      }
    } else { pq.push(m); }
  }
 
}