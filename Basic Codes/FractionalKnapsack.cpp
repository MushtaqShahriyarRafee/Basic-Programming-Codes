#include<iostream>
using namespace std;
typedef struct{
    double weight, price, unitprice;
}object;
double FractionalKnapsack(object obj[], int n, double cap){
    double profit = 0.0;
    int i, j;
    object t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(obj[i].unitprice < obj[j].unitprice){
                t = obj[i];
                obj[i] = obj[j];
                obj[j] = t;
            }
        }
    }
    /*for(i=0;i<n;i++){
        cout<<"w"<<i<<"= "<<obj[i].weight<<", p"<<i<<"= "<<obj[i].price<<endl;
    }*/
    for(i=0;i<n;i++){
        if(obj[i].weight < cap){
            profit += obj[i].price;
            cap -= obj[i].weight;
        }
        else{
            profit += cap * obj[i].unitprice;
            cap = 0.0;
            break;
        }
    }
    return profit;
}
int main()
{
    int n, i;
    double capacity;
    cin>>n;
    object obj[n];
    for(i=0;i<n;i++){
        cin>>obj[i].weight>>obj[i].price;
        obj[i].unitprice = obj[i].price/obj[i].weight;
    }
    cin>>capacity;
    cout<<"Maximum Profit: "<<FractionalKnapsack(obj, n, capacity)<<endl;
    return 0;
}
