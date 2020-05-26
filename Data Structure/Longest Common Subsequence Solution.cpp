#include<bits/stdc++.h>
using namespace std;
#define sz 100
#define diag 1
#define left 2
#define up 3
int dir[sz][sz];
int main()
{
    string seqA, seqB, seqC;
    int lenA, lenB;
    cin >> seqA >> seqB;
    int mat[sz][sz];
    lenA = seqA.size();
    lenB = seqB.size();
    for(int i=0; i<=lenA; i++)
        mat[i][0] = 0;
    for(int i=0; i<=lenB; i++)
        mat[0][i] = 0;
    for(int i=1; i<=lenA; i++)
    {
        for(int j=1; j<=lenB; j++)
        {
            if(seqA[i-1] == seqB[j-1])
            {
                mat[i][j] = mat[i-1][j-1] + 1;
                dir[i][j] = diag;
            }
            else
            {
                mat[i][j] = max(max(mat[i-1][j], mat[i][j-1]), mat[i-1][j-1]);
                if(mat[i][j] == mat[i-1][j])
                    dir[i][j] = up;
                else if(mat[i][j] == mat[i][j-1])
                    dir[i][j] = left;
                else dir[i][j] = diag;

            }
        }
    }
    cout << "LCS Length: " << mat[lenA][lenB] << endl;
    int i = lenA;
    int j = lenB;
    seqC = "";
    while(i > 0 && j > 0)
    {
        if(dir[i][j] == diag)
        {
            if(seqA[i-1] == seqB[j-1])
                seqC += seqA[i-1];
            i--;
            j--;
        }
        else if(dir[i][j] == left)
            j--;
        else i--;
    }
    reverse(seqC.begin(), seqC.end());
    cout << seqC << endl;
    return 0;
}

