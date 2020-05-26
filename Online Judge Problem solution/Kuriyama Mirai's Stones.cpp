#include <bits/stdc++.h>
using namespace std;

#define maxn 100006
__int64 sum;
__int64 pp[maxn]= {0},p[maxn]= {0},xp[maxn];
int main()
{
    int i,j,k,t,n,m,l,r, x;
    cin >> n;
    p[0]=0;
    for(i=1; i<=n; i++)
    {
        cin >> x;
        xp[i]=x;
        p[i]=p[i-1]+x;
    }
    xp[0]=0;
    sort(xp+1,xp+n+1);
    for(i=1; i<=n; i++)
        pp[i]=pp[i-1]+xp[i];
    cin >> t;
    while(t--)
    {
        cin >> m >> l >> r;
        if(m==1)
        {
            sum=p[r]-p[l-1];
            cout << sum << endl;
        }
        else if(m==2)
        {
            sum=pp[r]-pp[l-1];
            cout << sum << endl;
        }
    }
}
