#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n ,d;
        cin >> n >> d;
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin >> a[j];
        }
        int maxim = -9999;
        for(int j=0; j<n; j++)
        {
            int maxi = max(a[j],a[j+d]);
            if(maxi> maxim)
            {
                maxim = maxi;
            }
        }
        cout << "Case " << i << ": " << maxim << endl;

    }
}
