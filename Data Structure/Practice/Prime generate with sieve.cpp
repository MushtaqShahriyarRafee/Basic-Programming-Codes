#include<bits/stdc++.h>

const int maxn = 10;
bool flag[maxn];
using namespace std;
vector <int> prime;
void sieve()
{
    flag[1] = 1;
    prime.push_back(2);
    for(int i=4; i<maxn; i+=2)
        flag[i] = 1;
    for(int i=3; i<=maxn; i+=2)
    {
        if(flag[i]==0)
        {
            prime.push_back(i);
            if(maxn/i>=i)
            {
                int add = i*2;
                for(int j=i*i; j<=maxn; j+=add)
                    flag[j]=1;
            }
        }
    }
}

int main()
{
    sieve();
    int j=0;
    printf("Number of primes: %d\n",prime.size());
    for(int i=1; i<=prime.size(); i++)
        printf("%d %d\n",i,prime[j++]);

    //prime factor

    /*vector <pair<int, int >> factor;
    for(int i=0; prime[i]<=sqrt(n); i++)
    {
        if(n%prime[i]==0)
        {
            int count = 0;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                count++;
            }
            factor.push_back(mp(prime[i],count));
        }
    }
    if(n>1)
        factor.push_back(mp(n,1));
    */


    //big mod
    /*int big mod(lla, llb, m)
    {
        if(b == 0)
            return 1%m;
        x = big mod (a,b/2,m);
        x = (x*x)%m;
        if(b%2 == 1)
            x = (x*a)%m;
    }*/
}
