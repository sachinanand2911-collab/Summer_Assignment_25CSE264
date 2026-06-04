#include<iostream>
using namespace std;
int main(){
    int n,product;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1;i<=10;i++){
        product=n*i;
        cout<<product<<"\n";
    }
}