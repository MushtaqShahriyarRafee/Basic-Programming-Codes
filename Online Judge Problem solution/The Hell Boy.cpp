#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, a;
        long long int ans = 1;
        scanf("%d",&n);
        vector<int>v;
        for(int i=0; i < n; i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        for (int i = 0; i < n; i++ )
            ans = ((ans%1000000007) * ((v[i] + 1))%1000000007)%1000000007;
        printf("%lld\n",ans-1);
    }
}
