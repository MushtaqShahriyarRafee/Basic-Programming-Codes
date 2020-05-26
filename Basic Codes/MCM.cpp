#include<iostream>
using namespace std;

int main()
{
    int i, j, k, n, m[100][100], d, p[100];
    cin>>n;
    for(i=0;i<=n;i++)
        cin>>p[i];

    //initialization
    for(i=1;i<=n;i++)
        m[i][i] = 0;

    //MCM
    for(d=1;d<n;d++)
    {
        for(i=1;i<=n-d;i++)
        {
            j = i+d;
            k = i;
            m[i][j] = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
            for(k=i+1;k<j;k++)
            {
                m[i][j] = min(m[i][j], m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]);
            }
            //cout<<i<<", "<<j<<endl;
        }
    }
    cout<<"Minimum Operation: "<<m[1][n]<<endl;
    /*m[1][2]
    m[2][3]
    m[3][4]
    m[4][5]

    m[1][3]
    m[2][4]
    m[3][5]

    m[1][4]
    m[2][5]

    m[1][5]*/
    return 0;
}
/*
4
10 5 20 10 25
*/
