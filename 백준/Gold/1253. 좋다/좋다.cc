#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n;
  cin >> n;

  if(n < 3) {
    return 0;
  }

  vector<int> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end(), less<int>());

  int count = 0;

  for(int i = 0; i < n; i++) {
    int sp = 0;
    int ep = n - 1;

    while (sp < ep) {
			if (v[sp] + v[ep] < v[i]) {
				sp++;
			}
			else if (v[sp] + v[ep] > v[i]) {
				ep--;
			}
			else {
				if (sp == i) sp++;
				else if (ep == i) ep--;
				else {
					count++;
					break;
				}
			}
		}
  }

  cout << count;
  return 0;
}