#include<iostream>
using namespace std;
int main(){
    int n,r,product=1;
    cout<<"Enter the value of n:";
    cin>>n;
    while(n!=0){
        r=n%10;
        product=product*r;
        n=n/10;
    }
    cout<<"The product is :"<<product;
}