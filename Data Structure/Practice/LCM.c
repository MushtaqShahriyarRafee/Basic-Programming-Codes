#include<stdio.h>
int main()
{
    int a,b,t,x,gcd,lcm;
    scanf("%d%d",&a,&b);
    x=a*b;
    if(a==0)gcd=a;
    else if(b==0)gcd=b;
    else
    {
        while(b!=0)
        {
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    lcm=x/gcd;
    printf("LCM is:%d\n",lcm);
    return 0;
}

