#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int brr[5];
    cout<<"Enter the elements of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    brr[0]=arr[4];
     for(int i=1;i<5;i++){
        brr[i]=arr[i-1];
     }
     for(int i=0;i<5;i++){
        arr[i]=brr[i];
     }
     cout<<"Elements of array rotate in right are:";
      for(int i=0;i<5;i++){
        cout<<" "<<arr[i];
     }
    return 0;

}