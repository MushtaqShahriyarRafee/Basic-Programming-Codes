#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
typedef pair<int, int>P;

int main()
{
    int n, m, k, a, b=0, c=0;
    string s,x,y;
    string q="";
    cin >> s >> k;
    if(s.size()%k!=0)
        cout << "NO" << endl;
    else
    {
        a = s.size()/k;
        for(int i=0; i<s.size(); i++)
        {
            x+=s[i];
            b++;
            if(b==a)
            {
                y=x;
                reverse(y.begin(), y.end());
                if(x==y)
                    c++;
                b=0;
                x=q;
            }
        }
        if(c==k)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

