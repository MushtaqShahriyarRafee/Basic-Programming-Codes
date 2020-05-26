#include<stdio.h>
int main()
{
    int n,i,mul=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        printf("%d*",i);
    mul=mul*i;}
    mul=mul*i;
    printf("%d=%d",i,mul);
    return 0;
}
