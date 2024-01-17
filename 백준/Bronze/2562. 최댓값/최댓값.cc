#include <iostream>
 
using namespace std;

int compare(int a, int b) {
  if(a > b) return a;
  else return b;
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int max = 0, index = 0;
  int temp;
  
  for(int i = 0; i < 9; i++) {
    cin >> temp;
    max = compare(temp, max);

    if(temp == max) index = i + 1;
  }

  cout << max << "\n" << index;
  return 0;
}