#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n, len;
  cin >> n >> len;

  string str;
  cin >> str;

  string main = "I";
  for(int i = 0; i < n; i++) { main += "OI"; }

  int cnt = 0;
  int gap = n*2 + 1;

  for(int i = 0; i < len; i++) {
    if(i + gap > len) { break; }
    string sub = str.substr(i, gap);
    int result = main.compare(sub);

    if(result == 0) { cnt++; }
  }

  cout << cnt;
}