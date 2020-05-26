#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;
int flag[1000006];

int main()
{
    int n, x, count, maxi=-99;
    vector<int>v, y;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    y = v;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            count = 0;
            for(int k=i; k<=j; k++)
            {
                if(y[k]==1)
                    y[k]=0;
                else y[k] = 1;
            }
            for(int k=0; k<n; k++)
            {
                if(y[k]==1)
                    count++;
                if(count>maxi)
                    maxi=count;
            }
            y=v;
        }
    }
    cout << maxi << endl;

}


