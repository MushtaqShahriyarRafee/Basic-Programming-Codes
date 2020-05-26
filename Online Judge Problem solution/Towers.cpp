#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    map<int,int>m;
    vector<int>v;
    int n, a, maxim=-1;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
        m[a]++;
        s.insert(a);
    }
    for(int i =0; i<v.size(); i++)
    {
        int maxi = m[v[i]];
        if(maxi>maxim)
        {
            maxim = maxi;
        }
    }
    cout << maxim << " " << s.size() << endl;
}
