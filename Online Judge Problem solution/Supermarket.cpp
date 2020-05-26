#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, m, a,b;
    cin >> n >>m;
    float z, ans=999999999;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        z = ((a*1.0)*m)/b;
        if(z<ans)
            ans=z;
        //cout << z << " ";
    }
    printf("%.8f\n", ans);
	return 0;
}


