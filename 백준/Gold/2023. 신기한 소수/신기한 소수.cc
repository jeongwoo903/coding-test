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
  if(digit == N) {
    if(isPrime(num)) { cout << num << "\n"; }
    return;
  }

  for(int i = 1; i < 10; i++) {
    if(i % 2 == 0) { continue; }
    if(isPrime(num*10 + i)) { DFS(num*10 + i, digit + 1); }
  }
}

bool isPrime(int num) {
  for(int i = 2; i*i <= num; i++) {
    if(num % i == 0) { return false; }
  }
  return true;
}
