#include <iostream>
#include <deque>
 
using namespace std;

// first = value, second = index
typedef pair<int, int> Node;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n, l;
  cin >> n >> l;
  deque<Node> d;

  for(int i =0; i < n; i++) {
    int now;
    cin >> now;

    // back 제거
    while(d.size() && (d.back().first > now)) d.pop_back();
    // 추가
    d.push_back(Node(now, i));
    // front 제거
    if(d.front().second <= i -l) d.pop_front();

    cout << d.front().first << " ";
  }
}