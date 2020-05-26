#include<bits/stdc++.h>
using namespace std;
int b[100004];
int main()
{
    int n;
    cin >> n;
    vector<int>v;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    int ans = 0, x;
    for(int i=0; i<n; i++)
    {
        if(b[i]==1)
            continue;
        v.push_back(a[i]);
        x = a[i];
        for(int j=i+1; j<n; j++)
        {
            if(b[j]==1)
                continue;
            if(x>=a[j])
                continue;
            v.push_back(a[j]);
            x = a[j];
            b[j]=1;
        }
    }
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i+1]>v[i])
            ans++;
    }
    cout << ans << endl;

}

