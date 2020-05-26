#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int x=0;
        for(int i=0; i<n; i++)
        {
            int p=i;
            for(int j=i+1; j<n; j++)
                if(a[p]>a[j])
                    p=j;
            if(p!=i)
            {
                swap(a[p],a[i]);
                x++;
            }
        }
        cout<<"Case "<< k <<": "<< x <<endl;
    }
}

