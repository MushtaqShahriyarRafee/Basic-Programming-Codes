#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, cnt1=0, cnt2=0, maxim=-1;
    cin >> n;
    vector<string> v;
    string s,bb;
    map<string,int>m;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for(int i =0; i<v.size(); i++)
    {
        m[v[i]]++;
    }
    for(int i =0; i<v.size(); i++)
    {
        int maxi = m[v[i]];
        if(maxi>maxim)
        {
            maxim = maxi;
            bb = v[i];
        }
    }
    cout << bb << endl;

}


