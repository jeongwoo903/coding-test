#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[1005];

int main(){
    int n;
    int ans = 0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
        ans += arr[i]*(n-i);

    printf("%d",ans);

    return 0;
}