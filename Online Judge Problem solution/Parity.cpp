#include<stdio.h>
int main()
{
    int n,a[100],b,i,j,count;
    while(scanf("%d",&n)==1&&n)
    {
        i=1;
        b=n;
        while(b!=0)
        {
            a[i++]=b%2;
            b=b/2;
        }
        count=0;
        printf("The parity of ");
        for(j=i-1 ; j>0; j--)
        {
            printf("%d",a[j]);
            if(a[j]==1)count++;
        }
        printf(" is %d (mod 2).\n",count);
    }
    return 0;

}



