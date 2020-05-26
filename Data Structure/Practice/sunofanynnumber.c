#include<stdio.h>
int main()
{
   int i=1,n,x,sum=0;
   printf("n= ");
   scanf("%d",&n);
   while(i<=n){
    printf("Enter no.%d:  ",i);
    scanf("%d",&x);
   sum=sum+x;
   i++;}
   float ave=(float)sum/n;
   printf("The ave is %0.3f\n",ave);
   printf("The sum is %d\n",sum);
   return 0;
}

