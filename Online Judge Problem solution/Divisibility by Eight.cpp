#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if((s[i] - '0')%8 == 0)
        {
            cout << "YES" << endl << s[i] << endl;
            return 0;
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<i; j++)
        {
            int x = (s[j]-'0')*10+(s[i]-'0');
            if(x%8==0)
            {
                cout << "YES" << endl << x << endl;
                return 0;
            }
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<i; j++)
        {
            for(int k=0; k<j; k++)
            {
                int x= (s[k]-'0')*100+(s[j]-'0')*10+(s[i]-'0');
                if(x%8==0)
                {
                    cout << "YES" << endl << x << endl;;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
}
