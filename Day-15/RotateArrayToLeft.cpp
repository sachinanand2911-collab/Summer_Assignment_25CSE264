#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int brr[5];
    cout<<"Enter the elements of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    brr[4]=arr[0];
     for(int i=0;i<4;i++){
        brr[i]=arr[i+1];
     }
     for(int i=0;i<5;i++){
        arr[i]=brr[i];
     }
     cout<<"Elements of array rotate in left are:";
      for(int i=0;i<5;i++){
        cout<<" "<<arr[i];
     }


    return 0;

}