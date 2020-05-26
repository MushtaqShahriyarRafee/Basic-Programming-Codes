#include<iostream>
using namespace std;
#define sz 100
int main()
{
    string seqA, seqB;
    int lenA, lenB, i, j, mat[sz][sz];
    cin>>seqA>>seqB;
    lenA = seqA.size();
    lenB = seqB.size();
    //initialization
    for(i=0;i<=lenA;i++)
        mat[i][0] = i;
    for(j=0;j<=lenB;j++)
        mat[0][j] = j;
    //MED
    for(i=1;i<=lenA;i++){
        for(j=1;j<=lenB;j++){
            if(seqA[i-1] == seqB[j-1]){
                mat[i][j] = mat[i-1][j-1];
                //mat[i][j] = mat[i-1][j-1] + 1;
            }
            else{
                mat[i][j] = min(min(mat[i-1][j], mat[i][j-1]), mat[i-1][j-1]) + 1;
                //mat[i][j] = max(max(mat[i-1][j], mat[i][j-1]), mat[i-1][j-1]);
            }
        }
    }
    cout<<"Minimum Edit Distance: "<<mat[lenA][lenB]<<endl;
    return 0;
}

