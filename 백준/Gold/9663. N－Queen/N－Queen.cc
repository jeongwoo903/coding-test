#include <iostream>
#include <algorithm>
 
using namespace std;

int n;
int result;
int board[16] = {0, };

bool checkBoard(int row) {
    for (int i = 0; i < row; i++) {
      if (board[row] == board[i] || row - i == abs(board[row] - board[i])) { return false; }
  }

  return true; 
}

void nQueen(int row) {
  if(row == n) {
    result++;
    return;
  }

  for (int col = 1; col <= n; col++) {
    board[row] = col;
    if (checkBoard(row)) { nQueen(row + 1); }
  }
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  cin >> n;

  nQueen(0);

  cout << result;
  return 0;
}