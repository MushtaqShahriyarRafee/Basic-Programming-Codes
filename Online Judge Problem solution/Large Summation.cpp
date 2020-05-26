#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n, a, j = 0,i;
        scanf("%lld",&n);
        long long int arr[n],arrr[n];
        priority_queue<long long int > q;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
            q.push(arr[i]);
        }
        for (i=0; i<n; i++)
        {
            if(arr[i]==q.top())
            {
                int x = q.top();
                q.pop();
                arrr[j++] = (arr[i] + q.top()) % 1000000007;
                q.push(x);
            }
            else
                arrr[j++] = (arr[i] + q.top()) % 1000000007;
        }
        for(i=0; i<j-1; i++)
            printf("%lld ",arrr[i]);
        printf("%lld\n",arrr[i]);
    }
}

