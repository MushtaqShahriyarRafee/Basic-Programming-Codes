#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;



int main()
{
    int n, sum=0, y, x;
    cin >> n;
    P a[n];
    for(int i=0; i<n; i++)
    {
        cin >> x;
        sum+=x;
        a[i].first=x;
        a[i].second=i+1;
    }
    sort(a,a+n);
    y=sum/(n/2);
    for(int i=0; i<n/2; i++)
    {
        for(int j=n-1; j>=0; j--)
        {
            if(a[i].first+a[j].first == y)
            {
                a[i].first=-1;
                a[j].first=-1;
                cout << a[i].second << " " << a[j].second << endl;
                break;
            }
        }
    }
	return 0;

}




