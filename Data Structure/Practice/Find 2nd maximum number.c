#include<stdio.h>
int main()
{
    int i,n,x,y;
    scanf("%d",&n);
    int a[n] ;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    x=a[0];
    for(i=0;i<n;i++)
        if(a[i]>x){
            y = x;
            x = a[i];}
        else if(a[i]>y){
            y = a[i];}
    printf("First highest number= %d\n", x);
    printf("Second highest number= %d\n", y);
    return 0;
}

