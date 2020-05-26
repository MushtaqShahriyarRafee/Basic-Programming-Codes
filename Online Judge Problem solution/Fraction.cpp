#include<bits/stdc++.h>

const int maxn = 1000;
bool flag[maxn];
using namespace std;
vector <int> prime, v;
void sieve(int n)
{
    flag[1] = 1;
    prime.push_back(1);
    prime.push_back(2);
    for(int i=2; i<n; i+=2)
    {

        for(int j=i+1; j<n; j++)
        {
            if(__gcd(i,j)==1)
            {
                if(!flag[j])
                    {flag[j]=true;prime.push_back(j);}
            }
        }
    }
}


int main()
{
    int n;
    cin >> n;
    sieve(n);
    for(int i=0; i<prime.size(); i++)
        cout << prime[i] << endl;
    for(int i=0; i<prime.size(); i++)
    {
        for(int j=i+1; j<prime.size(); j++)
        {
            if(prime[i]+prime[j]==n)
            {
                v.push_back(prime[i]);
                v.push_back(prime[j]);
            }
        }
    }
    sort(v.begin(), v.end());
    /*for(int i=0; i<v.size(); i++)
        cout << v[i] << endl;*/
    int t =v.size();
    cout << v[t/2-1] << " " << v[t/2] << endl;
}
