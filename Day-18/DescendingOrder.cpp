#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the array elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
    for(int j=0;j<4-i;j++){
        if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    cout<<"The sorted array in descending order is :";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}