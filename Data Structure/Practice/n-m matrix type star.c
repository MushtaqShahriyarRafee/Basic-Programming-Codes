                //row & coloum er number onujayi kahini korte hobe...
#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter row & coloum numbers: ");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
        printf(" * ");
        printf("\n");}
    return 0;
}
