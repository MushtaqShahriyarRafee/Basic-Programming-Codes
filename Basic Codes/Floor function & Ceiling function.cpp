#include<stdio.h>
int main()
{
    float a;
    int x,y;
    scanf("%f",&a);
    x=a;
    y=a;
    if(a>y)
        printf("%d %d",x,y+1);
    else if(y==a)
        printf("%d    %0.2f",x,a);
    return 0;
}
