#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test, n, x;
    cin >> test;
    while(test--)
    {
        int count;
        cin >> n >> x;

        int arr[n], ar[200];

        for(int i=1; i<=200; i++)
        {
            ar[i] = 0;
        }cout << x<< endl;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        cout << x << "fuck "<< endl;
        for(int i=0; i<n; i++)
        {
            ar[arr[i]] = 1;
        }

        if(n==1)
            cout << n + x << "fuck "<< endl;
        else
        {
            count=0;

            for(int i=1; i<=200; i++)
            {
                if(ar[i]==1)count++;
                else if(ar[i]==0&&x!=0){count++;x--;}
            }

            cout << count << endl;
        }
    }
}
