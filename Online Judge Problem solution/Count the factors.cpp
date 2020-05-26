#include<iostream>
using namespace std;

int main()
{
    long long int n, ans, i, x;
    int count;
    while(cin>>x&&x!=0)
    {
        ans = -1;
        count = 0;
        n = x;
        for(i=2; i*i<=n&&n!=1; i++)
        {
            while(n%i==0)
            {
                n/=i;
                ans = i;
            }
            if(ans == i) count++;
        }
        cout << x << " : " << count+1 << endl;
    }
}

