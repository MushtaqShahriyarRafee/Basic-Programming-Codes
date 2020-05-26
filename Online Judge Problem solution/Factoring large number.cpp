#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int prime[80000];
    int count = 2;
    prime[0] = 2;
    prime[1] = 3;
    for (int i = 5, gap = 2; i <= 1000000; i += gap, gap = 6-gap){
        int sqrt_i = sqrt(i);
        bool isPrime = 1;
        for (int j = 1; prime[j] < sqrt_i; j++){
            if (i % prime[j] == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            prime[count++] = i;
    }
    long long int n;
    while(scanf("%lld",&n))
    {
        if(n<0) break;
        for (int i = 0; prime[i]<=sqrt(n); i++){
            while (n % prime[i] == 0){
                printf("    %d\n",prime[i]);
                n /= prime[i];
            }
            if (n == 1) break;
        }
        if (n != 1) printf("    %lld\n",n);
        printf("\n");
    }
}
