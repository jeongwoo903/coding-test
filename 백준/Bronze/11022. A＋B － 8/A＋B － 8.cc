#include <iostream>

#define endl '\n'
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n;
  cin >> n;

  int a, b;
  for(int i = 0; i < n; i++) {
      cin >> a >> b;
      cout << "Case " << "#" << i + 1 << ": " << a << " + " << b << " = " << a+b << endl;
  }

  return 0;
}