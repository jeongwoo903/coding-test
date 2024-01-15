#include <iostream>
#include <vector>

using namespace std;

int mod[1000];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n,m;
  cin >> n >> m;

  long long result = 0;
  long long sum = 0;

  for (int i = 0; i < n; ++i)
  {
      long long temp;
      cin >> temp; 

      sum += temp;

      result += mod[sum % m];

      if (sum % m == 0)
          result++;

      mod[sum % m]++;
  }

  cout << result;
  return 0;
}