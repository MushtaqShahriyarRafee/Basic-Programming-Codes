#include<iostream>
using namespace std;

int main()
{
    long long int n, ans, i;
    int count;
    while(cin>>n&&n!=0)
    {
        if(n<0) n *= -1;
        ans = -1;
        count = 0;
        for(i=2; i*i<=n&&n!=1; i++)
        {
            while(n%i==0)
            {
                n/=i;
                ans = i;
            }
            if(ans == i) count++;
        }
        if(n!=1&&ans!=-1) ans = n;
        else if(count==1) ans = -1;
        cout << ans << endl;
    }
}

