#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    long long int x=0;
    cin >> n;
    int a[n];
    for(int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        x+=abs(a[i]-i);
    cout << x << endl;
}



