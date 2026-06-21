#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        int minIndex=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp =arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
       cout<<"The sorted array is:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}