#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, ans=0, i, j;
    vector<int>v,w;
    cin >> a;
    for(int i=0; i<a; i++)
    {
        cin >> c;
        v.push_back(c);
    }
    cin >> b;
    for(i=0; i<b; i++)
    {
        cin >> c;
        w.push_back(c);
    }
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    for(i=0,j=0;i<a&&j<b;)
    {
        if(abs(v[i]-w[j])<=1)
        {
            ans++;
            i++;
            j++;
        }
        else if(v[i]>w[j])
            j++;
        else i++;
    }
    cout << ans << endl;

}

