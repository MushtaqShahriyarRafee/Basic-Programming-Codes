#include <bits/stdc++.h>
using namespace std;


bool cm(int x, int y)
{
    return x>y;
}



int main ()
{
    int n,x=0, z=0;
    cin >> n;
    string a;
    cin >> a;
    while(a[x]=='0')
        x++;
    for(int i=x; i<=n; i++)
    {
        if(a[i]=='0')
            continue;
        if(a[i]=='1')
            continue;
        if(a[i]=='2')
            s[z++] = 2;
        if(a[i]=='3')
            s[z++] = 3;
        if(a[i]=='4')
            s[z++]=3,s[z++] = 2,s[z++] = 2;
        if(a[i]=='5')
            s[z++] = 5;
        if(a[i]=='6')
            s[z++] = 5, s[z++] = 3;
        if(a[i]=='7')
            s[z++] = 7;
        if(a[i]=='8')
            s[z++] = 7, s[z++] = 2, s[z++] = 2, s[z++] = 2;;
        if(a[i]=='9')
            s[z++] = 2, s[z++] = 3, s[z++] = 3, s[z++] = 7;
    }

    sort(s,s+z,cm);

    for(int i=0; i<z; i++)
        cout << s[i];
}


