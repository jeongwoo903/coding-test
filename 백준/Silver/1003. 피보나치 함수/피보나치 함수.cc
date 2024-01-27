#include <iostream>
 
using namespace std;

int dp[41] = { 0, 1, 1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

	for (int i = 3; i < 41; i++) { 
    dp[i] = dp[i - 1] + dp[i - 2];
  }

	int n;
	int m;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m == 0) { cout << 1 << ' ' << 0 << '\n'; }
		else if (m == 1) { cout << 0 << ' ' << 1 << '\n'; }
		else { cout << dp[m - 1] << ' ' << dp[m] << '\n'; }
	}

	return 0;
}