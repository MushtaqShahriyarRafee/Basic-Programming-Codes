#include<bits/stdc++.h>
using namespace std;
struct student
{
    int id;
    string name;
    double cgpa;
};
student x[100],y;
int main()
{
    int i, n, j ;
    double a=0, ave ;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> x[i].id >> x[i].name >> x[i].cgpa ;
    }
    for (i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(x[i].cgpa>x[j].cgpa)
            {
                y = x[i];
                x[i] = x[j] ;
                x[j] = y ;
            }
        }
    }
    for(i=n-1; i>=0; i--)
        cout << x[i].id << " " << x[i].name << " " << x[i].cgpa << endl ;
}










