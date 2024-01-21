#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  
  map<string, string > member;

  string name, log;
  for(int i = 0; i < n; i++) {
    cin >> name >> log;

    if(log == "enter") member[name] = log;
    else member.erase(name);
  }

  for (auto it = member.rbegin(); it != member.rend(); it++) {
    cout << it->first << "\n";
  }
   
  return 0;
}