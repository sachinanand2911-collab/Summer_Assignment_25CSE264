#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int key;
    cout<<"Enter element whose frequency to find:";
    cin>>key;
    int count=0;
     cout<<"Enter the array elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
     for(int i=0;i<5;i++){
        if(arr[i]==key){
           count++;
        }
    }
    cout<<count<<" "<<"is the frequency of element to be found";
    return 0;
}