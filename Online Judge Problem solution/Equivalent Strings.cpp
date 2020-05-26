#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector< string > v, vv, v1, v2, v3, v4;
    int n, m;
    string a, b, c;
    cin >> a >> c;
    for(int i=0; i<a.size(); i++)
    {
        b = a[i];
        v.push_back(b);
    }
    for(int i=0; i<c.size(); i++)
    {
        b = c[i];
        vv.push_back(b);
    }
    if(v == vv)
    {
        cout << "YES" << endl;
        return 0;
    }
    n = a.size();
    m = c.size();
    if(n%2==0)
    {
        for(int i=0; i<n/2; i++)
        {
            b = a[i];
            v1.push_back(b);
        }
        for(int i=n/2; i<n; i++)
        {
            b = a[i];
            v2.push_back(b);
        }
        for(int i=0; i<m/2; i++)
        {
            b = c[i];
            v3.push_back(b);
        }
        for(int i=m/2; i<m; i++)
        {
            b = c[i];
            v4.push_back(b);
        }
        //sort(v1.begin(), v1.end());
        //sort(v2.begin(), v2.end());
        //sort(v3.begin(), v3.end());
        //sort(v4.begin(), v4.end());
        if((v1==v3 && v2 == v4)||(v1==v4 && v2 == v3))
            cout << "YES" << endl;
        else cout <<"NO" << endl;
    }
}
