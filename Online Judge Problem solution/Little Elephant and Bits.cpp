#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;


int main()
{
    string n;
    int c=0,x=0;
    cin >> n;
    for(int i=0; i<n.size(); i++)
    {
        if(n[i] == '1')
            x++;
    }
    if(x==n.size())
    {
        for(int i=0; i<x-1; i++)
            cout << n[i];
    }
    else
    {
        for(int i=0; i<n.size(); i++)
        {
            if(n[i] == '0' && c==0)
            {
                c++;
                continue;
            }
            cout << n[i] ;
        }
    }
    cout << endl;
    return 0;
}


