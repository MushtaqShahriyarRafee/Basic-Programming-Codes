#include<bits/stdc++.h>
using namespace std;
string a, b;
int main()
{
    int n, s, x, i;
    cin >> n >> s;
    if(s==0)
    {
        if(n==1)
            cout << "0 0" << endl;
        else
            cout << "-1 -1" << endl;
    }
    else
    {
        for (i=0; i<n; i++)
        {
            x = min(s, 9);
            b += x + '0';
            s -= x;
        }
        if (s>0)
        {
            cout << "-1 -1" << endl;
            return 0;
        }
        for (i=n-1; i>=0; i--)
            a += b[i];
        for (i=0; a[i]=='0'; i++);

        a[i]--, a[0]++;
        cout << a << " " << b << endl;
    }
}
