#include<bits/stdc++.h>
using namespace std;
int a[10000010];

int main()
{
    int n, p=1, k=1,m, x,y;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &y);
        for(int j=p; j<p+y; j++)
            a[j]=k;
        k++;
        p= y+p;
    }
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        scanf("%d", &x);
        printf("%d\n",a[x] );
    }
}
