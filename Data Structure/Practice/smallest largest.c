#include<stdio.h>
int smallest(int n);
int largest (int n);
int main()
{
    int i,n,min,max;
    scanf("%d",&n);
    smallest(n);
}
int smallest (int z)
{
    int i,min,a[z],max;
    for(i=0; i<z; i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=0; i<z; i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("The smallestest number is %d\n",min);
    max=a[0];
    for(i=0; i<z; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("The largest number is %d\n",max);
    return 0;
}

