#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t, i, j, b, d, len;
    string a;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> a >> b;
        if(a[0]=='-') j=1;
        else j=0;
        d=0;
        for(; j<a.size(); j++)
        {
            d = d*10 + (a[j] - '0');
            d = d%b;
        }
        cout << "Case " << i << ": ";
        if(d!=0) cout << "not divisible" << endl;
        else cout << "divisible" << endl;
    }
}

