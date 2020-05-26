#include<stdio.h>
int main()
{
    int n,a[100],b,i=1,j;
    scanf("%d",&n);
    if(n>0)
    {
        while(n!=0)
        {
            a[i++]=n%2;
            n=n/2;
        }
        for(j=i-1 ; j>0; j--)
            printf("%d",a[j]);
    }
    else if(n<=0)
        printf("0");
    return 0;
}
