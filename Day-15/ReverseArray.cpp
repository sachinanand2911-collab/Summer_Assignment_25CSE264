#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int brr[5];
    cout<<"Enter the elements of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        brr[i]=arr[4-i];
    }
    for(int i=0;i<5;i++){
        arr[i]=brr[i];
    }
    cout<<"The reverse array is :";
    for(int i=0;i<5;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}