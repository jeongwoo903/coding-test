#include <iostream>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n, m;
  cin >> n;

  while(n--) {
    cin >> m;

    if(m/5 != 0) {
      for(int i =0; i < m/5; i++) {
        cout << "++++ ";
      }
    }

    if(m%5 != 0) {
      for(int i = 0; i < m%5; i++) {
        cout << "|";
      }
      cout << " ";
    }
  }

  return 0;
}