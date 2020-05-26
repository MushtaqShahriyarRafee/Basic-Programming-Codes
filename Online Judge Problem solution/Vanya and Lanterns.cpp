#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, x;
    cin >> n >> l;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    x = max(a[0], l - a[n - 1]) * 2;
    for (int i = 0; i < n - 1; i++)
        x = max(x, a[i + 1] - a[i]);

    cout.precision(20);
    cout << fixed << x / 2.0 << endl;
}
