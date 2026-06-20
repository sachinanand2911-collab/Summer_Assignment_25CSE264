#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int brr[5];
    int crr[10];
    cout<<"Enter the elements of first array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements of second array:";
     for(int i=0;i<5;i++){
        cin>>brr[i];
    }
   
     for(int i=0;i<5;i++){
        crr[i]=arr[i];
     }
        for(int i=0;i<5;i++){
            crr[i+5]=brr[i];
        }
    
    cout<<"The merge of two array is :";
    for(int i=0;i<10;i++){
        cout<<" "<<crr[i];
    }
}