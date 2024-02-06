#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
 
#define endl '\n'
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int arr[5];
  int add = 0;

  for(int i = 0; i < 5; i++) {
    cin >> arr[i];
    add += arr[i];
  }

  sort(arr, arr + 5, greater<int>());
  
  int avg = add / 5;
  int med = arr[2];

  cout << avg << "\n";
  cout << med;

  return 0;
}