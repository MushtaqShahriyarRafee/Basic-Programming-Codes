#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int a;
    cin >> a;
    while(a>1)
    {
        if(a%1000==144)
            a/=1000;
        else if(a%100==14)
            a/=100;
        else if(a%10==1)
            a/=10;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
	return 0;
}

