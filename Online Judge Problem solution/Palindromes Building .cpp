#include <bits/stdc++.h>
using namespace std;
vector<string> a;
/*int permute(string s);

int pali(string s)
{
    int x,a=0,count=0;
    x = s.size();
    for(int i=0; i<=x/2; i++)
    {
        if(s[i]!=s[x-1-i])
        {
            a++;
        }
    }
    if(a==0)
        count++;
    return count;
}*/

void permute(string s)
{
    //vector<string> a;
    sort(s.begin(), s.end());
    do
    {


        a.push_back(s);
    }
    while (next_permutation(s.begin(), s.end()));
    //return a;
}


int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        char s[n];
        cin >> s;
        permute(s);
        for(int i=0; i<a.size(); i++)
        {
            vector<string>z;
            z = a[i];
            int x,c=0,count=0;
            x = z.size();
            for(int i=0; i<=x/2; i++)
            {
                if(z[i]!=z[x-1-i])
                {
                    c++;
                }
            }
            if(c==0)
                count++;
            cout << count << endl;
        }
    }
}
