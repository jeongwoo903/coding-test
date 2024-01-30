#include <iostream>
 
#define endl '\n'
#define MAX 100001
#define MOD 9901
 
using namespace std;

int DP(int num);
static int arr[MAX];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  cout << DP(n);
  return 0;
}

int DP(int k) {
    arr[0] = 1;
    arr[1] = 3;
    
    for(int i = 2; i <= k; i++) {
        arr[i] = (arr[i - 2] + arr[i - 1] * 2) % MOD;
    }

    return arr[k];
}