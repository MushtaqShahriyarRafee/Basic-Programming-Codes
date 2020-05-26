#include<bits/stdc++.h>
using namespace std;
#define N 100
int countInversion(int n,int arr[]){
    int cnt=0;
    for(int i=0;i<n*n-1;i++) for(int j=i+1;j<n*n;j++) if(arr[i]&&arr[j]&&arr[i]>arr[j]) cnt++;
    return cnt;
}
int getRow(int n,int arr[N][N]){
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(!(arr[i][j])) return n+1-(i+1);
}
int main(){
    int n,arr[N][N];
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>arr[i][j];
    int cnt=countInversion(n,(int*)arr);
    if(n&1){
        if(!(cnt&1)) cout<<"Solvable\n";
        else cout<<"Unsolvable\n";
    }
    else{
        int rowNo=getRow(n,arr);
        if((cnt&1)&&(!(rowNo&1))) cout<<"Solvable\n";
        else if(!(cnt&1)&&((rowNo&1))) cout<<"Solvable\n";
        else cout<<"Unsolvable\n";
    }
    return 0;
}

