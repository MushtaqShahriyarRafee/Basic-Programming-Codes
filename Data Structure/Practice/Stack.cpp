#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
    int a;
    char c[100];
    while(true)
    {
        cin >> c;
        if(c[1]=='U')
        {
            cin >> a;
            s.push(a);
        }
        else
        {
            if(s.empty()==false)
            {
                a = s.top();
                s.pop(); cout << a << endl;
            }
            //cout << a << endl;
        }

    }
}
