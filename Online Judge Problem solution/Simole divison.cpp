#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    while (scanf("%d", &a) && a)
    {
        x = 0;
        while (scanf("%d", &b) && b)
        {
            if (x==0) x = abs(b-a);
            else
            {
                if (abs(b-a)==0) continue;
                x = __gcd(x,abs(b-a));
            }
            a = b;
        }
        printf("%d\n", x);
    }
}

