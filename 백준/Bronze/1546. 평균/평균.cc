#include <iostream>

using namespace std;

int main() {
  int n, max =0;
  double score, sum, result =0;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> score;
    sum += score;
    if(max < score)
      max = score;
  }

  result = sum/max*100/n;
  cout << result;

  return 0;
}