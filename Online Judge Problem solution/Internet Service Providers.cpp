#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        long long int n, c;
        cin >> n >> c;
        cout << "Case " << i << ": ";
        if(n==0||c==0)
        {
            cout << "0" << endl;
            continue;
        }
        cout << (ll)(1.0*c/(2*n)+.499999) << endl;
    }
}


