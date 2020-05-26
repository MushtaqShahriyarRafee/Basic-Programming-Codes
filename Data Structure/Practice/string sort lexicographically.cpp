#include<bits/stdc++.h>
using namespace std;
vector<string>v,vv;
map<string, int>m;

int main()
{
    long long int t, n, a, b, c=1;
    string s,ss;
    cin >> t;
    while(t--)
    {
        cin >> n;
        map<string, int>m;
        for(int i=0; i<n; i++)
        {
            cin >> s;
            m[s]=1;
        }
        map<string, int>:: iterator i;
        cout << i->first;
        for(i=m.begin(); i!=m.end(); i++)
            cout << i->first << endl;
        v =vv;m=mm;
    }

}

