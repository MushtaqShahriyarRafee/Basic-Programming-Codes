#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000010;
int prime[MAX];
bool status[MAX];

void sieve()
{
    memset(status, true, sizeof(status));
    status[0] = status[1] = false;
    int i, j, k = 0, sq;
    sq = sqrt(MAX);
    for(i = 2; i<= sq; i++)
    {
        if(status[i])
        {
            for(j= i+i; j<MAX; j+= i)
                status[j] = false;
        }
    }
    for(i =2 ; i< MAX; i++)
        if(status[i])prime[k++] = i;
}

int main()
{
    sieve();
    int n,m,i,j,k,l,max,flag,x,y;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        printf("%d:\n",n);
        max=0;flag =0;
        for(i=1;i<=n/2;i++)
        {
            if(status[i]&&status[n-i])
            {
                x=i;
                y=n-i;
                flag=1;
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        printf("%d+%d\n",x,y);
        else printf("NO WAY!\n");
    }
    return 0;
}

