#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n, m;
  cin >> n >> m;

  string str;
  cin >> str;

  int cnt = 0;
  for(int i = 0; i < m; i++) {
    int len = 0;

    if(str[i] == 'O') { continue; }
    else {
      while(str[i + 1] == 'O' && str[i + 2] == 'I') {
        len++;

        if(len == n) {
          cnt++;
          len--;
        }

        i += 2;
      }
    }
    
    len = 0;
  }

  cout << cnt;
  return 0;
}