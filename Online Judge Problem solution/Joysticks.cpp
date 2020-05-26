#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;
int flag[1000006];

int main()
{
    int ans=0, a, b;
    cin >> a >> b;
    while(true)
    {
        if(a<=0 || b<=0) break;
        if(a==1 && b==1) break;
        if(a>b)
        {
            swap(a,b);}
            a+=1;
            b-=2;
            ans++;

    }
    cout << ans << endl;

}


