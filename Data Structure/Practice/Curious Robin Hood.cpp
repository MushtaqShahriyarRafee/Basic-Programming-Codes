#include<bits/stdc++.h>
using namespace std;
#define SIZE 100005
int x[SIZE], n;

long long update(int i, int val)
{
    while(i<=n)
    {
        x[i] = x[i]+val;
        i = i + (i&(-i));
    }
}

long long query(int i)
{
    long long int a = 0;
    while(i>0)
    {
        a+=x[i];
        i = i-(i&(-i));
    }
    return x;
}

int main()
{
    int t, x, y, w, cc, q, ch;
    long long ans;
    scanf("%d", &t);
    for(int cs=1; cs<=n; cs++)
    {
        scanf("%d %d",&n,&q);
        memset(a,0,sizeof a);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d",&x);
            update(i,x);
        }
    }
    printf("Case %d:\n",cs);
    for(int i=0; i<q; i++)
    {
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            scanf("%d",&x);
            x++;
            ans = query(x) - query (x-1);
            update(x, ans);
            printf("%lld\n",ans);
            break;
        case 2:
            scanf("%d",&x);
            x++;
            scanf("%d",&w);
            update(x,w);
            break;
        case 3:
            scanf("%d %d",&x,&y);
            x++;
            y++;
            ans = query(y) - query(x-1);
            printf("%lld\n",ans);
            break;

        }
    }
}




