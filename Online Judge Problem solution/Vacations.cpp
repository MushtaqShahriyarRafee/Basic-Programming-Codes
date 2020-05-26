#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans=0, x=0;
    cin >> n;
    int v[n];
    for(int i=0; i<n; i++)
        cin >> v[i];
    for(int i=0; i<n; i++)
    {
        if(v[i]==0)
        {
            ans++;
            x=0;
        }
        else if(!x)
            x=v[i];
        else if(x==3)
            x = v[i];
        else if(x==1 && v[i]!=1)
            x=2;
        else if(x==1 && v[i]==1)
        {
            x=0;
            ans++;
        }
        else if(x==2 && v[i]!=2)
            x=1;
        else if(x==2 && v[i]==2)
        {
            x=0;
            ans++;
        }
    }
    cout << ans << endl;
}


