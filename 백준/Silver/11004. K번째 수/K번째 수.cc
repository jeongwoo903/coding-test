#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int n, k;
  cin >> n >> k;

  vector<int> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end(), less<int>());

  cout << v[k - 1];
  return 0;
}

// quicksort 직접 구현 - 시간 초과남
// #include <iostream>
// #include <vector>
// #include <algorithm>
 
// using namespace std;

// void swap(vector<int> &A, int i, int j);
// int partition(vector<int> &A, int start, int end);
// void quicksort(vector<int> &A, int start, int end);

 
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);
 
//   int n, k;
//   cin >> n >> k;

//   vector<int> A(n);

//   for(int i = 0; i < n; i++) {
//     cin >> A[i];
//   }

//   quicksort(A, 0, n - 1);

//   cout << A[k - 1];
//   return 0;
// }

// void swap(vector<int> &A, int i, int j) {
//   int temp = A[i];
//   A[i] = A[j];
//   A[j] = temp;
// }

// int partition(vector<int> &A, int start, int end) {
//   if(start >= end) { return 0; }
//   int pivot = start;
//   int i = start + 1;
//   int j = end;

//   while(i <= j) {
//     while(A[i] < A[pivot]) { i++; }
//     while(A[j] > A[pivot] && j > start) { j--; }
//     if(i <= j) { swap(A, i, j); }
//   }
  
//   swap(A, j, pivot);
//   return j;
// }

// void quicksort(vector<int> &A, int start, int end) {
//   if(start < end) {
//     int q = partition(A, start, end);
//     quicksort(A, start, q - 1);
//     quicksort(A, q + 1, end);
//   }
// }
