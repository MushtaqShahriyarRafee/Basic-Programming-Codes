#include <bits/stdc++.h>
using namespace std ;

int PRIME (int x)
{
    int i, z=0, a ;
    for(i=2; i<=sqrt(x)+1; i++)
    {
        a = x % i ;
        if(a == 0)
        {
            return 1 ;
        }
    }
}

int main()
{
    int a, b ;
    cin >> a ;
    if (a == 2)
    {
         cout << "Prime" << endl ;
         return 0;
    }
    else if(a>1)
    {
        b = PRIME(a) ;
        if(b == 1)
            cout << "Not Prime" << endl ;
        else
            cout << "Prime" << endl ;
        return 0;
    }
}
