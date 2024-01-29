#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

static vector<int> v;
static int k, n;
static long long ans = 0;

void cutting(long long start, long long end) {
  if(start > end) { return; }

  long long  mid = (start + end) / 2;
  long long len = 0;

  for(int i: v) { len += i / mid; }

  if (len < n) { cutting(start, mid - 1); }
  else { 
    if(ans <= mid) { 
      ans = mid; 
    }
    cutting(mid + 1, end);
  }
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  cin >> k >> n;

  v = vector<int> (k);

  for(int i = 0; i < k; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end(), greater<int>());

  long long start = 1, end= 0;
  end = v.front();

  cutting(start, end);

  cout << ans;
  return 0;
}