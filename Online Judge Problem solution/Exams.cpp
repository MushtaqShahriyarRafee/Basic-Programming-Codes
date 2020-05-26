#include<bits/stdc++.h>
using namespace std;
pair<int, int> a[5007];

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n);
    int x=a[0].second;
    for(int i=0; i<n; i++)
    {
        if(a[i].second>=x)
            x = min(a[i].second, a[i].first);
        else
            x = a[i].first;
    }
    cout << x << endl;
}
