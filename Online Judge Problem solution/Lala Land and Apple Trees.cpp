#include <bits/stdc++.h>
using namespace std;
pair<int, int>a[10005];
int main ()
{
    int n, b, c, d, len1, len2, sum = 0;
    cin >> n;
    vector<int>v, vv;
    for(int i=0; i<n; i++)
    {
        int f, g;
        cin >> f >> g;
        a[i].first = f;
        a[i].second = g;
        d = f;
        if(d>0)
            v.push_back(d);
        else if(d<0)
            vv.push_back(d);
    }
    sort(a, a+n);
    len1 = v.size();
    len2 = vv.size();
    //cout << len1 << len2 << endl;
    if(len2==0)
        cout << a[0].second << endl;
    else if(len1==0)
        cout << a[n-1].second << endl;
    else if(len1==len2)
    {
        for(int i=0; i<n; i++)
            sum+=a[i].second;
        cout << sum << endl;
    }
    else if(len1>len2)
    {
        for(int i=0; i<len2*2+1; i++)
            sum+=a[i].second;
        cout << sum << endl;
    }
    else if(len2>len1)
    {
        for(int i=n-1; i>=n-(len1*2+1); i--)
            sum+=a[i].second;
        cout << sum << endl;
    }
}
