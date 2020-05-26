#include<stdio.h>
int main()
{
    int i,n,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];//x=-999999;
    for(i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];}
    printf("The highest number is %d\n ",max);
    return 0;
}



