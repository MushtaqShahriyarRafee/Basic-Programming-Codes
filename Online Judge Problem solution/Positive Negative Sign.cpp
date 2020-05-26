#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        long long int n, m;
        cin >> n >> m;
        cout << "Case " << i << ": " << n*m/2 << endl;
    }
}

