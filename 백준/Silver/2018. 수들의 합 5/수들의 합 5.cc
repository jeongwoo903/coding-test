#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;

  int start_point = 1;
  int end_point = 1;

  int sum = 1, count = 1;

  cin >> n;

  while(n != end_point) {
    if(sum < n) {
      end_point++;
      sum += end_point;
    } else if (sum > n) {
      sum -= start_point;
      start_point++;
    } else {
      count++;
      end_point++;
      sum += end_point;
    }
  }

  cout << count;
  return 0;
}
