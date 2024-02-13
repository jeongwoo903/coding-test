#include <iostream>
 
#define endl '\n'
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, count = 0;

	cin >> n;

	while(n) {
		if(n % 2 == 1) { count++; }
		n /= 2;
	}

	cout << count;
  return 0;
}