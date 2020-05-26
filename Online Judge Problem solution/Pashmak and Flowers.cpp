#include<bits/stdc++.h>
using namespace std;
#define ll __int64

int a[200002];
int main()
{
    int n;
    ll mid,ans,b,c;
    int dis;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    dis = a[n-1] - a[0];
    if(dis == 0)
        ans = (ll)n*(n-1)/2;
    else
    {
        b = c = 1;
        for(int i=1; i<n; i++)
        {
            if(a[i]!=a[0])        break;
            b++;
        }
        for(int i=n-2; i>=0; i--)
        {
            if(a[i]!=a[n-1])   break;
            c++;
        }
        ans = b*c;
    }
    printf("%d %I64d\n",dis,ans);
    return 0;
}

