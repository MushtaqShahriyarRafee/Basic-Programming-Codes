#include<bits/stdc++.h>
using namespace std;
#define maxn 200001
int a[maxn];
int b[maxn];
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    sort(a,a+n);
    int ans=0;
    for(int i=0; i<maxn; i++)
    {
        if(b[i]>1)
        {
            ans+=b[i]-1;
            b[i+1]+=b[i]-1;
            b[i]=1;
        }
    }
    cout<< ans <<endl;
}
