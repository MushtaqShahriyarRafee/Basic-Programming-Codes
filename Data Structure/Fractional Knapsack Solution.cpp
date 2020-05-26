#include<bits/stdc++.h>
using namespace std;

typedef pair<double, double>P;

int main()
{
    int n;
    double capacity;
    cin >> n >> capacity;
    double weight[n], price[n], profit = 0.0;
    P unitprice[n];
    for(int i=0; i<n; i++)
        cin >> weight[i];
    for(int i=0; i<n; i++)
    {
        cin >> price[i];
        unitprice[i].first = price[i]/weight[i];
        unitprice[i].second = weight[i];
    }
    sort(unitprice, unitprice+n);
    for(int i=n; i>=0; i--)
    {
        if(unitprice[i].second<=capacity)
        {
            profit+=unitprice[i].second*unitprice[i].first;
            capacity-=unitprice[i].second;
        }
        else
        {
            profit+=capacity*unitprice[i].first;
            capacity = 0.0;
            break;
        }
    }
    cout << profit << endl;
}
