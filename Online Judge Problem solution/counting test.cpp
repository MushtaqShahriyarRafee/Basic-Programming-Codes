#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n, q;
        scanf("%lld%lld",&n,&q);
        string s;
        cin >> s;
        while(q--)
        {
            long long int l, r;
            int count = 0, x=0,z;
            char c;
            scanf("%lld%lld",&l,&r);
            cin >> c;

            if(r<=n)
            {
                for(int i=l-1; i<=r-1; i++)
                {
                    if(s[i]==c)
                        count++;
                }
            }
            else if(r>n)
            {
                z = r/n;
                while(z--)
                    s = s + s;
                for(int i=l-1; i<=r-1; i++)
                {
                    if(s[i]==c)
                        count++;
                }
            }
            cout << count << endl;
        }
    }
}

