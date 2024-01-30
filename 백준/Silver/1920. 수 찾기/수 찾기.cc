#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
 
using namespace std;

static vector<int> range;
static vector<int> check;

void BS(int k, int s, int e) {
  int mid = ( s + e )/ 2;

  if(s >= e) {
    if(k == range[mid]) { 
      cout << 1 << "\n"; 
      return;
    } else { 
      cout << 0 << "\n";
      return;
    }
  }  

  if(k < range[mid]) { BS(k, s, mid - 1); } 
  else if (k == range[mid]) { 
    cout << 1 << "\n"; 
    return;
  } 
  else { BS(k, mid + 1, e); }
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n;
  cin >> n;

  range = vector<int> (n);

  for(int i = 0; i < n; i++) { cin >> range[i]; }
  sort(range.begin(), range.end(), less<int>());

  int m;
  cin >> m;

  check = vector<int> (m);
  
  for(int i = 0; i < m; i++) { 
    cin >> check[i]; 
    BS(check[i], 0, range.size() - 1);
  }

  return 0;
}