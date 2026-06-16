#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=1;
        int b=i-1;
        for(int j=1;j<=i;j++){
            int d=a+64;
            char ch=(char)d;
            cout<<ch;
            a++;
        }
        for(int k=1;k<=i-1;k++){
             int d=b+64;
            char ch=(char)d;
            cout<<ch;
            b--;
        }
        cout<<"\n";
    }
    return 0;
}