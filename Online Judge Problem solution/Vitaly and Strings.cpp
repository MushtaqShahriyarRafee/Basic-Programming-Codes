#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<char, int>mp;

int main()
{
    int t, n, m, c, d, x=4, y=2;
    string s, ss, a,b;
    cin >> s >> ss;
    a = s;
    for(int i=s.size()-1; i>=0; i--)
    {
        while(a[i]<'z')
        {
            a[i]++;
            if(a<ss)
            {
                cout << a << endl;
                return 0;
            }
        }
        if(a[i]=='z')
                a[i]='a';
    }
    cout << "No such string" << endl;
}

