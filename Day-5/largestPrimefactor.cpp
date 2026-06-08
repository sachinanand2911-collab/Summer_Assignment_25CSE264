#include<iostream>
using namespace std;
int main(){
    int n,largest=0,count;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
        count=0;
    for(int j=1;j<=i;j++){
     if(i%j==0)
     count++;
    }
       if(count==2){
        largest=i;
    }
    }
}
cout<<largest;
}