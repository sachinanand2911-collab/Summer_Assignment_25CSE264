#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"The fibonacci of n is:"<<fibo(n);
    return 0;
}