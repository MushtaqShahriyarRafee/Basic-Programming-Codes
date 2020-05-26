#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
typedef pair<int, int>P;
map<char,int>m;
string y;
int main()
{
    string s,x;
    int n;
    cin >> n >> s;
    vector<string>v;
    if(n==1)
    {
        cout << "YES" << endl << s << endl;
        return 0;
    }
    else
    {
        int c=1;
        x+=s[0];
        m[s[0]]++;
        for(int i=1; i<s.size(); i++)
        {
            if(m[s[i]]==1)
                x+=s[i];
            else if(m[s[i]]==0)
            {
                m[s[i]]++;
                v.push_back(x);
                c++;
                x=y;
                if(c==n)
                {
                    for(int j=i; j<s.size(); j++)
                        x+=s[j];
                    v.push_back(x);
                    break;
                }
                else x+=s[i];

            }
        }
    }
    if(v.size()==n)
    {
        cout << "YES" << endl;
        for(int i=0; i<n; i++)
            cout << v[i] << endl;
    }
    else cout << "NO" << endl;
}

