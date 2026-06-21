#include<iostream>
using namespace std;
int main(){
     int arr[5];
    cout<<"Enter the elements of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be found :";
    cin>>key;
    int low=0;
    int high=4;
    while(low<=high){
        int mid=(low + high)/2;
        if(arr[mid]==key){
            cout<<"Element found at index :"<<mid;
            break;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}