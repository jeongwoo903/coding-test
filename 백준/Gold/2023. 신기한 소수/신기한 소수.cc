#include <iostream>
 
using namespace std;

void DFS(int num, int digit);
bool isPrime(int k);
static int N;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  cin >> N;

  DFS(2, 1);
  DFS(3, 1);
  DFS(5, 1);
  DFS(7, 1);
}

void DFS(int num, int digit) {
  int n_list[4] = {1,3,7,9};

  if(digit == N) {
    if(isPrime(num)) { cout << num << "\n"; }
    return;
  }

  for(int i: n_list) {
    int x = num * 10 + i;
    if(isPrime(x)) { DFS(x, digit + 1); }
  }
}

bool isPrime(int num) {
  for(int i = 2; i*i <= num; i++) {
    if(num % i == 0) { return false; }
  }
  return true;
}
