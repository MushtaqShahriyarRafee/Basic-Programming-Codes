#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s, t;
    cin >> s >> t;
    int x=0, n=s.size();
    if(s==t)
    {
        cout << s << endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]!=t[i])
            x++;
    }
    if(x%2==1)
        cout << "impossible" << endl;
    else
    {
        x/=2;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=t[i])
            {
                if(x>0)
                {
                    cout << s[i];
                    x--;
                }
                else
                    cout << t[i];
            }
            else
                cout << s[i];
        }
    }
    cout << endl;
    return 0;
}
