#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of Base:";
    cin>>x;
    int n;
    cout<<"Enter the value of exponent:";
    cin>>n;
    int result=1;
    for(int i=1;i<=n;i++){
        result=result*x;
    }
    cout<<x<<"^"<<n<<"="<<result;
    return 0;
}