#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++)
    {
        x=1;
        for(int j=0; j<n; j++)
        {
            if(a[i]<a[j])
                x++;
        }
        b[i] = x;
    }
    for(int i=0; i<n; i++)
        cout << b[i] << " " ;
    cout << endl;
}
