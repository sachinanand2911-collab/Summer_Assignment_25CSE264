#include<iostream>
using namespace std;
int main(){
    int n,remainder,count=0;
    cout<<"Enter the value of n:";
    cin>>n;
    while(n!=0){
    remainder=n%2;;
    n=n/2;
    if(remainder==1){
          count++;
       }
    }
    cout<<"There are"<< " "<<count<<" "<<"bits in a number";
  return 0;
}