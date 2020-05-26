#include<bits/stdc++.h>
using namespace std;
#define sz 400

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string a, b;
        cin >> a >> b;
        for(int i=0; i<a.size(); i++)
            a[i] = tolower(a[i]);
        for(int i=0; i<b.size(); i++)
            b[i] = tolower(b[i]);
        int lena = a.size();
        int lenb = b.size();
        int mat[sz][sz];
        for(int i=0; i<=lena; i++)
            mat[i][0] = i;
        for(int i=0; i<=lenb; i++)
            mat[0][i] = i;
        for(int i=1; i<=lena; i++)
        {
            for(int j=1; j<=lenb; j++)
            {
                if(a[i-1] == b[j-1])
                    mat[i][j] = mat[i-1][j-1];
                else
                    mat[i][j] = min(min(mat[i-1][j], mat[i][j-1]), mat[i-1][j-1]) + 1;
            }
        }
        cout << mat[lena][lenb] << endl;
    }
    return 0;
}



