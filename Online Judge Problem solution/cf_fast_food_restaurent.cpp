#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, a, b, c, count, y, z;
    cin >> test;
    while(test>0)
    {
        cin >> a >> b >> c;
        count=0, z = a+b+c;
        y=a;
        a = max(a,max(b,c));
        c = min(y,min(b,c));
        b = z-(a+c);
        if(a>0)
        {
            count++;
            a--;
        }
        if(b>0)
        {
            count++;
            b--;
        }
        if(c>0)
        {
            count++;
            c--;
        }
        if(a>0&&b>0)
        {
            count++;
            a--;
            b--;
        }
        if(a>0&&c>0)
        {
            count++;
            a--;
            c--;
        }
        if(b>0&&c>0)
        {
            count++;
            b--;
            c--;
        }
        if(a>0&&b>0&&c>0)
        {
            count++;
            a--;
            b--;
            c--;
        }

        cout << count << endl;


        test--;
    }
}
