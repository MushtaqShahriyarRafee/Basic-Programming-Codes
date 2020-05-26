#include<stdio.h>
int main()
{
   int i=0,n,x,sum=0;
   printf("n=");
   scanf("%d",&n);
   for(i=0;i<n;i++){
        scanf("%d",&x);
    sum=sum+x;
   }
   printf("The sum is %d",sum);
   return 0;
}
