#include <iostream>
#include <algorithm>

using namespace std;

int main (void) {
  int n, now;
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> now;

    if((now % 100) == 0) {
      continue;
    }

    if(((now + 1)%(now % 100)) == 0) {
      cout << "Good" << endl;
    }
    else {
      cout << "Bye" << endl;
    }
  }

  return 0;
}