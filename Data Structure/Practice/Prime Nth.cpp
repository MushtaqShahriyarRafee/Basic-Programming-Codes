#include<bits/stdc++.h>
using namespace std ;

int main()
{
     int check, n, c = 0 ;
    cout << "Enter Nth Prime Number you want to Find: " ;
    cin >> n ;
    for(int i=2; i<=99999999999999; i++)
    {
        check = 0;
        for(int j=2; j<=sqrt(i); j++)
        {
            if(i%j == 0)
            {
                check = 1 ;
                break ;
            }
        }
        if(check == 0)
            c++ ;
        if(c == n)
        {
            cout << n << "th prime Number is: "<< i << endl ;
            break ;
        }
    }
}
