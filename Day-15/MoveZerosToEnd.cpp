#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int brr[5];
    int j=0;
    cout<<"Enter the elements of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
  for(int i=0;i<5;i++){
    if(arr[i]!=0){
       brr[j]=arr[i];
       j++;
    }
  }
 while(j<5){
    brr[j]=0;
    j++;
 }
 cout<<"Array after moving zero to end :";
 for(int i=0;i<5;i++){
        cout<<" "<<brr[i];
    }

    return 0;
}