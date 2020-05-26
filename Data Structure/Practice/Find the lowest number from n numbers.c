#include<stdio.h>
int main()
{
    int i,n,min;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];//x=999999;
    for(i=0;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }
    printf("The lowest number is %d\n ",min);

    return 0;
}




