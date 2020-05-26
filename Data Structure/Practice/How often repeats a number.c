#include<stdio.h>
int flag[1000];
int main()
{
    int i,n,a[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        flag[a[i]]++;
    }
    for(i=0; i<1000; i++)
    {
        if(flag[i]!=0)
            printf("%d repeats %d times \n",i,flag[i]);
    }
    return 0;
}
