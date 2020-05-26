#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a=0;
    cin >> n >> m;
    while(n<m)
    {
        if(m%2==0)
           m = m/2;
        else m++;
        a++;
    }
    cout << a+n-m << endl;

}
