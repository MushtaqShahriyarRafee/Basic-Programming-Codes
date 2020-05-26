#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;


int main()
{
    int n, k, ans=0, m, s, c, b;
    cin >> s >> n;
    P a[n];
    for(int i=0; i<n; i++)
    {
        cin >> c >> b;
        a[i].first=c;
        a[i].second=b;
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i].first<s)
        {
            s+=a[i].second;
            ans++;
        }
    }
    if(ans==n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

