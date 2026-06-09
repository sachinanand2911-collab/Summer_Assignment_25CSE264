#include<iostream>
using namespace std;
int main(){
    int n,remainder,place=1,binary=0;
    cout<<"Enter the value of n:";
    cin>>n;
    while(n!=0){
        remainder=n%2;
       binary = binary + remainder * place;
       place = place * 10;
       n=n/2;
    }
    cout<<"The decimal to Binary is :"<<binary;
  return 0;
}