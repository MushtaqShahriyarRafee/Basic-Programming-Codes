#include<iostream>
#include<algorithm>
using namespace std;
#define sz 100
#define diag 1
#define left 2
#define up 3
int main()
{
    string seqA, seqB, seqC;
    int lenA, lenB, i, j, mat[sz][sz], dir[sz][sz];
    cin>>seqA>>seqB;
    lenA = seqA.size();
    lenB = seqB.size();
    //initialization
    for(i=0;i<=lenA;i++)
        mat[i][0] = 0;
    for(j=0;j<=lenB;j++)
        mat[0][j] = 0;
    //LCS
    for(i=1;i<=lenA;i++){
        for(j=1;j<=lenB;j++){
            if(seqA[i-1] == seqB[j-1]){
                mat[i][j] = mat[i-1][j-1] + 1;
                dir[i][j] = diag;
            }
            else{
                mat[i][j] = max(max(mat[i-1][j], mat[i][j-1]), mat[i-1][j-1]);
                if(mat[i][j] == mat[i][j-1])
                    dir[i][j] = left;
                else if(mat[i][j] == mat[i-1][j])
                    dir[i][j] = up;
                else
                    dir[i][j] = diag;
            }
        }
    }
    cout<<"LCS Length: "<<mat[lenA][lenB]<<endl;
    //print sequence
    i = lenA;
    j = lenB;
    seqC = "";
    while(i > 0 && j > 0){
        if(dir[i][j] == diag)
        {
            if(seqA[i-1] == seqB[j-1]){
                seqC += seqA[i-1];
            }
            i--;
            j--;
        }
        else if(dir[i][j] == left){
            j--;
        }
        else{
            i--;
        }
    }
    reverse(seqC.begin(), seqC.end());
    cout<<"LCS: "<<seqC<<endl;
    return 0;
}
/*
TGCCAG
ATGACG
*/
