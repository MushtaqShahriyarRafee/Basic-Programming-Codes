#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<char, int>mp;

int main()
{
    int a,b,s;
    cin >> a >> b >> s;
    a = abs(a);
    b = abs(b);
    if(s<(a+b))
        cout << "No" << endl;
    else
    {
        a = a+b;
        if(a%2==0)
        {
            if(s%2==0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else if(a%2==1)
        {
            if(s%2==1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}

