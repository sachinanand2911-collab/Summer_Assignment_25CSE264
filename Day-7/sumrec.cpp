#include<iostream>
using namespace std;
int rev(int n){
    static int sum=0;
    if(n==0)
    return sum;
    sum=sum*10+n%10;
    return rev(n/10);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"The Reverse of number is:"<<rev(n);
    return 0;
}