int main()
{
    int n,k;
    static unsigned dp[201][201];
    scanf("%d%d",&n,&k);
    dp[0][0]=1;
    for(int i=1;i<=k;i++)
    {
        dp[i][0]=1;
        for(int j=1;j<=n;j++) dp[i][j]=(dp[i-1][j]+dp[i][j-1])%1000000000;
    }
    printf("%u\n", dp[k][n]);
}