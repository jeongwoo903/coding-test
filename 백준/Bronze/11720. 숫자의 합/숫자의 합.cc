#include <stdio.h>

using namespace std;

int main() {
  int n, l;
  scanf("%d", &n);

  int result = 0;

  while(n--) {
    scanf("%1d", &l);
    result +=l;
  }

  printf("%d", result);
  return 0;
}