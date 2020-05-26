#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=1;
    cin >> n;
    map<string,int>m;
    while(n--)
    {
        string s, a, b, e;
        getline(cin,s);
        int c=0, d=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=' ')
                a+= s[i];
            else if(s[i]==' ')
                break;
        }
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]!=' ')
                b+= s[i];
            else if(s[i]==' ')
                break;
        }
        for(int i=b.size()-1; i>=0; i--)
            e+=b[i];
        m[a]++;
        m[e]++;
        if((m[a]==1||m[a]==2)&&(m[e]==1||m[e]==2))
            count++;
        //cout << a << " " << e;
    }
    cout << count << endl;
}
