#include<bits/stdc++.h>
using namespace std;
typedef vector<string>vs;

bool Ischeck(string x, string y)
{
    int i,len=x.size();
    bool fl=false;
    for(i=0; i<len; i++)
    {
        if(x[i] != y[i])
            return true;
    }
    return false;
}

int main()
{
    int t;
    vs v;
    cin >> t;
    while(t--)
    {
        v.clear();
        int n;
        cin >> n;
        string s;
        int i;
        for(i=0; i<n; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)cout << v[i] << " ";
        if(n==1)
        {
            cout << "YES" << endl;
            continue;
        }
        bool f=false;
        for(i=0; i<n-1; i++)
        {
            if(Ischeck(v[i],v[i+1]))
                f=true;
            else
            {
                f=false;
                break;
            }
        }
        if(f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

