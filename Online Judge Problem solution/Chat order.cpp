#include<bits/stdc++.h>
using namespace std;
const int N=2e5+2;

int main()
{
    map<string,int>m;
    int n;
    string s[N];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> s[i];
    for(int i=n-1; i>=0; i--)
    {
        if(m[s[i]]==0)
        {
            cout << s[i] << endl;
            m[s[i]]++;
        }
    }
}
