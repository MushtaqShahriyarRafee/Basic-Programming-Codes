#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        long long int w, n=1, m=1;
        cin >> w;
        cout << "Case " << i << ": ";
        if(w&1)
        {
            cout << "Impossible" << endl;
            continue;
        }
        bool x = false;
        for(;;)
        {
            m<<=1;
            w>>=1;
            if(w&1)
            {
                n=w;
                x = true;
                break;
            }
            if(w==0)
                break;
        }
        if(!x)
            cout << "Impossible" << endl;
        else cout << n << " " << m << endl;
    }
}
