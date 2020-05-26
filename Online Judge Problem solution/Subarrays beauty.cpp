#include<bits/stdc++.h>
using namespace std;
int ans;
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n, sum = 0;
        scanf("%lld",&n);
        long long int arr[n];
        for(int i=0; i<n; i++)
            scanf("%lld",&arr[i]);
        for (int i=0; i<n; i++)
        {
            ans = arr[i];
            for (int j=i; j<n; j++)
            {
                ans = ans&arr[j];
                sum += ans;
            }
        }
        printf("%lld\n",sum);
    }
}
