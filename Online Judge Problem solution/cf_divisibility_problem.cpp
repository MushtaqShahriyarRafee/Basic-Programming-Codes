#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test, a, b, x=0, y;
    cin >> test;
    while(test>0)
    {
        cin >> a >> b;
        x=0;
        if(a%b==0)
        {
            cout << x << endl;
        }
        else{
             y = a/b;
             b = b*(y+1);
             a = b - a;


            cout << a << endl;
        }

        test--;
    }
}
