#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  long n, k;
  cin >> n >> k;

  long start = 1, end = k;
  long ans;

  while(start <= end) {
    long mid = (start + end) / 2;
    long cnt = 0;

    for(int i = 1; i <= n; i++) { cnt += min(mid/i, n); }

    if(cnt < k) { start = mid + 1; }
    else {
      ans = mid;
      end = mid - 1;
    }
  }
  cout << ans;
  return 0;
}