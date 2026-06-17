#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int key;
    cout<<"Enter the element to be found:";
    cin>>key;
     cout<<"Enter the array elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"Element found at index :"<<i;
            break;
        }
    }
    cout<<"Element is not found.";
    return 0 ;
}