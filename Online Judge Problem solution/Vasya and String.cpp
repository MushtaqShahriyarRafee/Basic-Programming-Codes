#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin >> s;
    int l=0,r=0,ans=0,cnt=0;
    for(; r<n;)
    {
        while(r<n&&cnt<=k)
        {
            if(s[r]=='b')
                cnt++;
            r++;
        }
        if(cnt>k) cnt--,r--;
        ans=max(ans,r-l);
        while(s[l]=='a'&&l<=r)
            l++;
        l++;
        cnt--;
    }
    l=0,r=0,cnt=0;
    for(; r<n;)
    {
        while(r<n&&cnt<=k)
        {
            if(s[r]=='a')
                cnt++;
            r++;
        }
        if(cnt>k) cnt--,r--;
        ans=max(ans,r-l);
        while(s[l]=='b'&&l<=r)
            l++;
        l++;
        cnt--;
    }
    printf("%d\n",ans);
    return 0;
}
