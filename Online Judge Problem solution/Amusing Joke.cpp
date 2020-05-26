#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    map<string,int>m,n;
    for(int i=0; i<a.size(); i++)
    {
        d = a[i];
        m[d]++;
    }
    for(int i=0; i<b.size(); i++)
    {
        d = b[i];
        m[d]++;
    }
    for(int i=0; i<c.size(); i++)
    {
        d = c[i];
        n[d]++;
    }
    if(m==n)
        cout <<"YES" << endl;
    else
        cout <<"NO" << endl;
}
