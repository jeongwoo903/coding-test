#include <iostream>
using namespace std;
#define MAX 1000000
#define MOD 1000000009

long long dp[MAX + 1];

int main()
{
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= MAX; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}