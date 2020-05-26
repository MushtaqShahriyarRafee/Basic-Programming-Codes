#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,len,n=0;
    string a;
    cin >> a ;
    len= a.size();
    for(i=0; i<len; i++)
    {
        if(a[i]=='1') n=n*2+1;
        else if(a[i]=='0') n*=2;
    }
    cout << n;
}
