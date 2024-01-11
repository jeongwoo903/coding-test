#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
  int n, score;
  float nf, max, result;
  
  vector<int> v;
  vector<float> vf;

  cin >> n;
  int num = n;

  while(num--) {
    cin >> score;
    v.push_back(score);
  }

  sort(v.begin(), v.end(), greater<int>());
  max = v.at(0);

  for(int i = 0; i < n; i++)
    nf += (v[i]/max) * 100;

  result = nf/(float)n;
  cout << result;

  return 0;
}