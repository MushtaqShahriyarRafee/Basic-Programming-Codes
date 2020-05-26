#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n , m, x, r, z, count;
        vector<int>v;
        scanf("%d%d",&n,&m);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            v.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]>=0)
            {
                r = i;
                break;
            }
        }
        if(r<n-1)
        {
            for(int i=r+1; i<n; i++)
            {
                v[i]= v[i-1]+1;
            }
        }
        if(r>0)
        {
            for(int i=r-1; i>=0; i--)
            {
                count = v[i+1] - 1;
                if(count==-1)
                    count = m-1;
                v[i]= count;
            }
        }
        for(int i=0; i<n; i++)
        {
            v[i] = v[i]%m;
        }
        for(int i=0; i<n; i++)
            printf("%d ",v[i]);
        printf("\n");
    }
}
