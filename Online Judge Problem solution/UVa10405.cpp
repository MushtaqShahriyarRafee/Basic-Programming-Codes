#include<bits/stdc++.h>
using namespace std;

int mat[2000][2000];
int main()
{
    string seqA, seqB;
    int lenA, lenB;
    /*while(getline(cin,seqA))
    {
        getline(cin,seqB);
        lenA = seqA.size();
        lenB = seqB.size();
        //initialization
        for(int i=0; i<=lenA; i++)
            mat[i][0] = 0;
        for(int i=0; i<=lenB; i++)
            mat[0][i] = 0;
        for(int i=1; i<=lenA; i++)
        {
            for(int j=1; j<=lenB; j++)
            {
                if(seqA[i-1] == seqB[j-1])
                    mat[i][j] = mat[i-1][j-1] + 1;
                else
                    mat[i][j] = max(max(mat[i-1][j], mat[i][j-1]), mat[i-1][j-1]);
            }
        }
        cout << mat[lenA][lenB] << endl;
    }
    return 0;*/
    int x = INT_MAX;
    cout << x;

}
