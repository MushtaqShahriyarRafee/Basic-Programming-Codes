#include<bits/stdc++.h>
using namespace std;
map<int, int>m,mmm;
vector<int>v,vv;
#define long long ll

int main()
{
    int n, mm, c=0, maxi=0,x;
    cin >> n;
    string s;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            if(a[i+1]<a[i])
                swap(a[i+1],a[i]);
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>=a[i+1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

}


