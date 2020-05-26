#include<bits/stdc++.h>
using namespace std;

int LIS( int arr[], int n )
{
    int lis[n], i, j, ans = 0;
    for (i = 0; i < n; i++)
        lis[i] = 1;
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    for (i = 0; i < n; i++ )
        if (ans < lis[i])
            ans = lis[i];
    free(lis);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Length of LIS is " <<  LIS(arr, n) << endl;
    return 0;
}
