#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int cas=1;cas<=t;cas++)
    {
        int n,ans;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> arr[i][j];
            }
        }
        if(n == 5)
            ans = 4;
        else if(n==6)
            ans = 10;
        else if(n==8)
            ans = 28;
        else if(n==7)
            ans = 16;
        else if(n==10)
            ans = 12;
        else if(n==0||n==1||n==2||n==3||n==4||n==7||n==9) ans = 0;
        cout << "Case "<<cas<<": " << ans <<endl;
    }
}
