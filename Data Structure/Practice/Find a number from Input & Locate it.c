#include<stdio.h>
int main()
{
    int i,n,x,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=1; i<=n; i++)
        if(a[i]==x)
        {
            printf("%d is found at %d\n",x,i);
            flag=1;
            break;
        }
    if(flag==0)
        printf("Not found\n");
    return 0;
}




