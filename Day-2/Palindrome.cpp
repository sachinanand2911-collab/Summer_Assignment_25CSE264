#include<iostream>
using namespace std;;
int main(){
    int n,rev=0,original,r;
    cout<<"The value of n:";
    cin>>n;
    original=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==original)
    cout<<"The number is palindrome";
    else
    cout<<"Not palindrome";
}