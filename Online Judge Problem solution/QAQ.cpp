#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;
int flag[1000006];

int main()
{


    int ans=0;
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='Q')
            continue;
        for(int k=i+1; k<s.size(); k++)
        {
            if(s[k]!='A')
                continue;
            for(int j=k+1; j<s.size(); j++)
            {
                if(s[j]=='Q')
                    ans++;
            }

        }
    }
    cout << ans << endl;
}

