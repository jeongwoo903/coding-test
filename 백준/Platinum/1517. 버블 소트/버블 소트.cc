#include <iostream>
#include <vector>
 
using namespace std;

void merge(int start, int pivot, int end);
void mergeSort(int start, int end);

static vector<int> temp;
static vector<int> v;
static long result;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  v = vector<int>(n, 0);
  temp = vector<int>(n, 0);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }

  result = 0;
  mergeSort(0, n -1);
  cout << result;

  return 0;
}

void merge(int start, int pivot, int end) {
  int i = start;
  int j = pivot + 1;
  int k = start;

  while(i <= pivot && j <= end) {
    if(v[i] <= v[j]) {
      temp[k] = v[i];
      i++;
    } else {
      result = result + j - k;
      temp[k] = v[j];
      j++;
    }
    k++;
  }

  while(i <= pivot) { 
    temp[k] = v[i];
    i++;
    k++;
  }

  while(j <= end) { 
    temp[k] = v[j];
    j++;
    k++;
  }

  for(int idx = start; idx <= end; idx++) {
    v[idx] = temp[idx];
  }
}

void mergeSort(int start, int end) {
  if (start < end) {
    int pivot = (start + end) / 2;
    
    mergeSort(start, pivot);
    mergeSort(pivot + 1, end);
    merge(start, pivot, end);
  }
}