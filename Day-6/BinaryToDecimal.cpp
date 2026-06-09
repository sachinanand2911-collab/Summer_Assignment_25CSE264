#include<iostream>
using namespace std;
int main(){
    int n,decimal=0,remainder,power=1;
    cout<<"Enter the binary number:";
    cin>>n;
    while(n!=0){
    remainder=n%10;
    decimal=decimal+remainder*power;
    power=power*2;
    n=n/10;
    }
    cout<<"The decimal to Binary Number is:"<<decimal;
    return 0;
}