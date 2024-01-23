#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str;
  cin >> str;

  vector<int> v(str.size(), 0);

  for(int i = 0; i < str.size(); i++) {
    v[i] = stoi(str.substr(i, 1));
  }

  for(int i = 0; i < v.size(); i++) {
    int max = i;
    for(int j = i + 1; j < v.size(); j++) {
      if(v[max] <= v[j]) { 
        max = j; 
      }
    }
    if(v[i] < v[max]) swap(v[i], v[max]);
  }

  for(int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
  
  return 0;
}