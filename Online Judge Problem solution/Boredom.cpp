#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;
long long int a[1000006], dp[1000006];
int main()
{
    long long int n, b, c, ans=0, j=0, k=0;
    cin >> n;
    memset(a, 0, sizeof(a));
    memset(dp, 0, sizeof(dp));
    for(int i=0; i<n; i++)
    {
        cin >> b;
        if(b>ans)
            ans=b;
        a[b]++;
    }
    dp[0] = 0;
    dp[1] = a[1];
    for(int i=2; i<=ans; i++)
        dp[i] = max(dp[i-1], dp[i-2] + a[i]*i);
    cout << dp[ans] << endl;
}
