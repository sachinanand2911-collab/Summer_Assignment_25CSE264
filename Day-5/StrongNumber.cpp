#include<iostream>
using namespace std;
int main(){
    int n,digit,sum=0,original;
    cout<<"Enter the value of n:";
    cin>>n;
     original=n;
    while(n!=0){
        digit=n%10;
        int fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
    sum=sum+fact;
     n=n/10;
    }
      if(sum==original)
        cout<<"The number is Strong";
        else
        cout<<"The number is not strong";
        return 0;
}