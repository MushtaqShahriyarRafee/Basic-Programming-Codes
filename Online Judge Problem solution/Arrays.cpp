#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, k, m;
    vector<int> v,vv;
    cin >> a >> b >> k >> m;
    for(int i=0; i<a; i++)
    {
        cin >> c;
        v.push_back(c);
    }
    for(int i=0; i<b; i++)
    {
        cin >> c;
        vv.push_back(c);
    }
    //sort(v.begin(), v.end());
    //sort(vv.begin(), vv.end());
    int x = v[k-1];
    int y = vv[b-m];
    if(y>x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}



