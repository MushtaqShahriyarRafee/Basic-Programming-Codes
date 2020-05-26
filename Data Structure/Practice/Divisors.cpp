#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int divisor, n, x ;
    while(true)
    {
        scanf("%d",&n);
        int j = 0, a[10000];
        divisor = 0;
        for(int i=1; i*i<= n; i++)
        {
            if(n%i == 0)
            {
                if( i*i == n)
                {
                    divisor += 1;
                    a[j++] = i;
                }
                else
                {
                    x = n/i;
                    divisor +=2;
                    a[j++] = i;
                    a[j++] = x;
                }
            }
        }
        sort(a,a+j);
        for(int i=0; i<j; i++)
            cout << a[i] << " ";
        cout << endl<< "Number of divisors: " << divisor << endl;
    }
}


