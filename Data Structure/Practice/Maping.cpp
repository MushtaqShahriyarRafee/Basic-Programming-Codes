#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<string,int>a;
    int n,q;
    string str;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        a[str]++;
    }
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> str;
        cout << a[str] << endl;
    }
}
