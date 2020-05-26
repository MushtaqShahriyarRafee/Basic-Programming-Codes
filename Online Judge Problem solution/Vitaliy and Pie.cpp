#include <bits/stdc++.h>
using namespace std;

int flag[40];
int main()
{
    int n, ans=0;
    cin >> n;
    string s;
    cin>>s;
    for(int i=0; i<n*2-2; i++)
    {
        if(i%2==0)
            flag[s[i]-'a']++;
        else
        {
            if(flag[s[i]-'A']==0)
                ans++;
            else
                flag[s[i]-'A']--;
        }
    }
    cout<<ans<<endl;
}

