#include<stdio.h>

int factorial( int n )
{
    if ( n <= 1)
        return 1;
    return n * factorial ( n - 1 );
}
int main()
{
    int a ;
    scanf("%d", &a);
    if ( a < 0){
        printf("Undefined\n");
        return 0;
    }
    printf("Factorial of %d is %d \n",a, factorial(a));
}

