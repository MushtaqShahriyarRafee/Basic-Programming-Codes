#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    long long int a[n], sum=0;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        sum+=a[i]*(i+1);
    cout << sum-a[n] << endl;
}


