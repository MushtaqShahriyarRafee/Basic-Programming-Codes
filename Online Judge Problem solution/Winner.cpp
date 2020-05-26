#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>m,g;
    string s[1010];
    int x[1010], n, z=0, k=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s[i] >> x[i];
        m[s[i]]+= x[i];
    }
    for(int i=0; i<n; i++)
    {
        if(m[s[i]]>z)
            z = m[s[i]];
    }
    while(m[s[k]]<z || (g[s[k]]+=x[k]) <z)
        k++;
    cout << s[k] << endl;
}
