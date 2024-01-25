#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++)
    cout << v[i] << "\n";

  return 0;
}

// merge sort로 구현한 것 - 시간초과 남.
// #include <iostream>
// #include <vector>
// #include <algorithm>
 
// using namespace std;

// void merge(vector<int> &v, int start, int pivot, int end);
// int mergeSort(vector<int> &v, int start, int end);

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);

//   int n;
//   cin >> n;

//   vector<int> v(n);

//   for(int i = 0; i < n; i++) {
//     cin >> v[i];
//   }

//   mergeSort(v, 0, n -1);

//   for(int i = 0; i < n; i++) {
//     cout << v[i] << "\n";
//   }
//   return 0;
// }

// void merge(vector<int> &v, int start, int pivot, int end) {
//   int i = start;
//   int j = pivot + 1;
//   int k = start;

//   vector<int> temp(v.size());

//   while(i <= pivot && j <= end) {
//     if(v[i] <= v[j]) {
//       temp[k] = v[i];
//       i++;
//     } else {
//       temp[k] = v[j];
//       j++;
//     }
//     k++;
//   }

//   while(i <= pivot) { 
//     temp[k] = v[i];
//     i++;
//     k++;
//   }

//   while(j <= end) { 
//     temp[k] = v[j];
//     j++;
//     k++;
//   }

//   for(int idx = start; idx <= end; idx++) {
//     v[idx] = temp[idx];
//   }
// }

// int mergeSort(vector<int> &v, int start, int end) {
//   if(start < end) {
//     int pivot = (start + end) / 2;
//     mergeSort(v, start, pivot);
//     mergeSort(v, pivot + 1, end);
//     merge(v, start, pivot, end);
//   }

//   return 0;
// }
