#include<stdio.h>
#include<math.h>
#define maxn 1000005
double r[maxn];
int main()
{
    int a, b, t, x;
    for(int i=1; i<=maxn; i++)
    {
        r[i] = r[i-1] + log(i);
    }
    scanf("%d",&t);
    for (int i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);
        x = r[a]/log(b)+1;
        printf("Case %d: %d\n",i,x);
    }
    return 0;
}

