#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define LL long long
int main()
{
    LL n,k = 0,a[1000]={0};
    scanf("%lld",&n);
    for(int i=100;i>=0;i--){
        if(n-i<=0) continue;
        LL p = n-i,sum = n-i;
        while(p){
            sum+=p%10;
            p/=10;
        }
        if(sum==n) a[k++]=n-i;
    }
    printf("%lld\n",k);
    for(int i=0;i<k;i++) printf("%lld\n",a[i]);
    return 0;
}
